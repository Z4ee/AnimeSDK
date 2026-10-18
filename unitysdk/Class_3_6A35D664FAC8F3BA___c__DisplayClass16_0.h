#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_741;
class Class_1_D7FE7C0ADCE6BFB9;
class Class_3_6A35D664FAC8F3BA;

#define CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC308750)
#define CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0___STARTUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xC3091F0)
#define CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0___STARTUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0xC309210)

inline static constexpr unsigned int Class_3_6A35D664FAC8F3BA___c__DisplayClass16_0_TypeDefinitionIndex = 61149;

class Class_3_6A35D664FAC8F3BA___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_1_D7FE7C0ADCE6BFB9* queue; // 0x10
	::Class_3_6A35D664FAC8F3BA* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void __StartUpdate_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0___STARTUPDATE_B__0_OFFSET))(this);
	}

	::System::Void __StartUpdate_b__1(::Class_0_16E4307DCC419505_741* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_741*))((::PBYTE)hIl2Cpp + CLASS_3_6A35D664FAC8F3BA___C__DISPLAYCLASS16_0___STARTUPDATE_B__1_OFFSET))(this, a1);
	}
};
