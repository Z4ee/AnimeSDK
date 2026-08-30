#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class BattleSilverWolf999CustomUIData; }

#define CLASS_2_0461CF72CBC4B02F_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x159D5270)
#define CLASS_2_0461CF72CBC4B02F__CTOR_OFFSET UNITYSDK_OFFSET(0x159D5380)
#define CLASS_2_0461CF72CBC4B02F__ONBIND_OFFSET UNITYSDK_OFFSET(0x159D52D0)

inline static constexpr unsigned int Class_2_0461CF72CBC4B02F_TypeDefinitionIndex = 71254;

class Class_2_0461CF72CBC4B02F : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::BattleSilverWolf999CustomUIData* JNEALEEMIIF; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0461CF72CBC4B02F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_0461CF72CBC4B02F_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0461CF72CBC4B02F__ONBIND_OFFSET))(this);
	}
};
