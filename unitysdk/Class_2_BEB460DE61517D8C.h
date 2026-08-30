#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackEffect_CutinAnimation; }

#define CLASS_2_BEB460DE61517D8C_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1A559D50)
#define CLASS_2_BEB460DE61517D8C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A559D40)

inline static constexpr unsigned int Class_2_BEB460DE61517D8C_TypeDefinitionIndex = 35620;

class Class_2_BEB460DE61517D8C : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_BEB460DE61517D8C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEB460DE61517D8C_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
