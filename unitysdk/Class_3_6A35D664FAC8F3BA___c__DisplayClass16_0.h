#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_1_8CA784D26D9A6CF7;
class Class_3_6A35D664FAC8F3BA;

#define CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC40EC00)
#define CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0___STARTUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xC40F6B0)
#define CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0___STARTUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0xC40F6D0)

inline static constexpr unsigned int Class_3_6A35D664FAC8F3BA___c__DisplayClass16_0_TypeDefinitionIndex = 61244;

class Class_3_6A35D664FAC8F3BA___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_1_8CA784D26D9A6CF7* queue; // 0x10
	::Class_3_6A35D664FAC8F3BA* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void __StartUpdate_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0___STARTUPDATE_B__0_OFFSET))(this);
	}

	::System::Void __StartUpdate_b__1(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0___STARTUPDATE_B__1_OFFSET))(this, a1);
	}
};
