#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint; }

#define CLASS_2_16F749F67120419B_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1C1FA330)
#define CLASS_2_16F749F67120419B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1FA320)

inline static constexpr unsigned int Class_2_16F749F67120419B_TypeDefinitionIndex = 35621;

class Class_2_16F749F67120419B : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint* IGHAHBNLIJA; // 0x18
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_16F749F67120419B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16F749F67120419B_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}
};
