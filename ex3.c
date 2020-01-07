#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
   double min;
   min=atof(argv[1]);
   for(int i=1;i<argc;i++)
   {
       if(atof(argv[i])<min)
       min=atof(argv[i]);
   }
   printf("Min parameter is %f\n",min);
}