#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_630;
class Class_0_16E4307DCC419505_635;

#define CLASS_1_C584489F76966D79_1_METHOD_1_03136C27AAE442FD_OFFSET UNITYSDK_OFFSET(0x174CCA10)
#define CLASS_1_C584489F76966D79_1_METHOD_1_3C22D711B6298B99_OFFSET UNITYSDK_OFFSET(0x174CCC90)
#define CLASS_1_C584489F76966D79_1__CTOR_OFFSET UNITYSDK_OFFSET(0x174CCA00)

inline static constexpr unsigned int Class_1_C584489F76966D79_1_TypeDefinitionIndex = 61238;

class Class_1_C584489F76966D79_1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_635* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_635* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_635*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_1__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_03136C27AAE442FD()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_1_METHOD_1_03136C27AAE442FD_OFFSET))(this);
	}

	::System::Void Method_1_3C22D711B6298B99(::Class_0_16E4307DCC419505_630* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_630*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_1_METHOD_1_3C22D711B6298B99_OFFSET))(this, a1);
	}
};
