#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackEffect_CutinAnimation; }

#define CLASS_2_BEB460DE61517D8C_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x165E83B0)
#define CLASS_2_BEB460DE61517D8C__CTOR_OFFSET UNITYSDK_OFFSET(0x165E83A0)

inline static constexpr unsigned int Class_2_BEB460DE61517D8C_TypeDefinitionIndex = 28426;

class Class_2_BEB460DE61517D8C : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation* Field_2_0; // 0x18
	::Class_2_843468DEB2C89684* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_BEB460DE61517D8C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEB460DE61517D8C_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
