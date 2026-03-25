#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint; }

#define CLASS_2_16F749F67120419B_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x165C4DC0)
#define CLASS_2_16F749F67120419B__CTOR_OFFSET UNITYSDK_OFFSET(0x165C4DB0)

inline static constexpr unsigned int Class_2_16F749F67120419B_TypeDefinitionIndex = 28427;

class Class_2_16F749F67120419B : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_843468DEB2C89684* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_16F749F67120419B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16F749F67120419B_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}
};
