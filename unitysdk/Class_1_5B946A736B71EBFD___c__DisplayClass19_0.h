#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE49D2686B15EB31.h"
#include "unitysdk/System/Object.h"

class Class_1_5B946A736B71EBFD;

#define CLASS_1_5B946A736B71EBFD___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17B01220)
#define CLASS_1_5B946A736B71EBFD___C__DISPLAYCLASS19_0___CHECK_DUPLICATES_B__0_OFFSET UNITYSDK_OFFSET(0x17B01320)

inline static constexpr unsigned int Class_1_5B946A736B71EBFD___c__DisplayClass19_0_TypeDefinitionIndex = 37806;

class Class_1_5B946A736B71EBFD___c__DisplayClass19_0 : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_FE49D2686B15EB31>* edges; // 0x10
	::Class_1_5B946A736B71EBFD* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
	}

	::System::Int32 __check_duplicates_b__0(::System::Int32 x, ::System::Int32 y)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD___C__DISPLAYCLASS19_0___CHECK_DUPLICATES_B__0_OFFSET))(this, x, y);
	}
};
