#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B7044A592B17773_10;

#define CLASS_1_03D6D30E62EFB374_1___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x129C7E50)
#define CLASS_1_03D6D30E62EFB374_1___C__DISPLAYCLASS4_0__GETSPONSOR_B__0_OFFSET UNITYSDK_OFFSET(0x129C82A0)

inline static constexpr unsigned int Class_1_03D6D30E62EFB374_1___c__DisplayClass4_0_TypeDefinitionIndex = 68503;

class Class_1_03D6D30E62EFB374_1___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::UInt32 sponsorID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_1___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetSponsor_b__0(::Class_1_1B7044A592B17773_10* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1B7044A592B17773_10*))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_1___C__DISPLAYCLASS4_0__GETSPONSOR_B__0_OFFSET))(this, x);
	}
};
