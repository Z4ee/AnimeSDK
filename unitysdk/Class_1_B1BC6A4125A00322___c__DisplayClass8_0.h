#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1BC6A4125A00322;
namespace System { class String; }

#define CLASS_1_B1BC6A4125A00322___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB7CB060)
#define CLASS_1_B1BC6A4125A00322___C__DISPLAYCLASS8_0__SETTIMEOUT_B__0_OFFSET UNITYSDK_OFFSET(0xB7CC6D0)

inline static constexpr unsigned int Class_1_B1BC6A4125A00322___c__DisplayClass8_0_TypeDefinitionIndex = 49627;

class Class_1_B1BC6A4125A00322___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_1_B1BC6A4125A00322* __4__this; // 0x10
	::System::String* info; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1BC6A4125A00322___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetTimeout_b__0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B1BC6A4125A00322___C__DISPLAYCLASS8_0__SETTIMEOUT_B__0_OFFSET))(this, a1);
	}
};
