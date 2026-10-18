#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_00D0CC9E4AC1D590;

#define CLASS_1_40CD5CE8474BAA94___C__DISPLAYCLASS49_0__CHANGEDICE_B__0_OFFSET UNITYSDK_OFFSET(0x15B4E450)
#define CLASS_1_40CD5CE8474BAA94___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B48610)

inline static constexpr unsigned int Class_1_40CD5CE8474BAA94___c__DisplayClass49_0_TypeDefinitionIndex = 60320;

class Class_1_40CD5CE8474BAA94___c__DisplayClass49_0 : public ::System::Object
{
public:
	::Class_1_00D0CC9E4AC1D590* dice; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ChangeDice_b__0(::Class_1_00D0CC9E4AC1D590* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_00D0CC9E4AC1D590*))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___C__DISPLAYCLASS49_0__CHANGEDICE_B__0_OFFSET))(this, a1);
	}
};
