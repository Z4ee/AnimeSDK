#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_1_C6B3B57B6E91674E;
class Class_3_6A35D664FAC8F3BA;

#define CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1427D900)
#define CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0___STARTUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x1427E3A0)
#define CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0___STARTUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x1427E3C0)

inline static constexpr unsigned int Class_3_6A35D664FAC8F3BA___c__DisplayClass16_0_TypeDefinitionIndex = 58414;

class Class_3_6A35D664FAC8F3BA___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_3_6A35D664FAC8F3BA* __4__this; // 0x10
	::Class_1_C6B3B57B6E91674E* queue; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void __StartUpdate_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0___STARTUPDATE_B__0_OFFSET))(this);
	}

	::System::Void __StartUpdate_b__1(::Class_0_16E4307DCC419505_614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_614*))((::PBYTE)hIl2Cpp + CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0___STARTUPDATE_B__1_OFFSET))(this, a1);
	}
};
