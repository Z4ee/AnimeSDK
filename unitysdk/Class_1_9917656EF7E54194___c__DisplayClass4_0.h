#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_280B56AF77019A2F;

#define CLASS_1_9917656EF7E54194___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB70C7B0)
#define CLASS_1_9917656EF7E54194___C__DISPLAYCLASS4_0__GETSPONSOR_B__0_OFFSET UNITYSDK_OFFSET(0xB70CC60)

inline static constexpr unsigned int Class_1_9917656EF7E54194___c__DisplayClass4_0_TypeDefinitionIndex = 79017;

class Class_1_9917656EF7E54194___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::UInt32 sponsorID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9917656EF7E54194___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetSponsor_b__0(::Class_1_280B56AF77019A2F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_280B56AF77019A2F*))((::PBYTE)hIl2Cpp + CLASS_1_9917656EF7E54194___C__DISPLAYCLASS4_0__GETSPONSOR_B__0_OFFSET))(this, a1);
	}
};
