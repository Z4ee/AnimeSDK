#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0C58AD91B0F4D809;
class Class_2_6D05354A7C0BEECF;

#define CLASS_2_6D05354A7C0BEECF___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12956140)
#define CLASS_2_6D05354A7C0BEECF___C__DISPLAYCLASS2_0___CREATETRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x12956360)
#define CLASS_2_6D05354A7C0BEECF___C__DISPLAYCLASS2_0___CREATETRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x12956420)

inline static constexpr unsigned int Class_2_6D05354A7C0BEECF___c__DisplayClass2_0_TypeDefinitionIndex = 70520;

class Class_2_6D05354A7C0BEECF___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_2_6D05354A7C0BEECF* __4__this; // 0x10
	::Class_2_0C58AD91B0F4D809* entity; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D05354A7C0BEECF___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreateTrigger_b__0(::Class_2_0C58AD91B0F4D809* guestEntity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_6D05354A7C0BEECF___C__DISPLAYCLASS2_0___CREATETRIGGER_B__0_OFFSET))(this, guestEntity);
	}

	::System::Void __CreateTrigger_b__1(::Class_2_0C58AD91B0F4D809* guestEntity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_6D05354A7C0BEECF___C__DISPLAYCLASS2_0___CREATETRIGGER_B__1_OFFSET))(this, guestEntity);
	}
};
