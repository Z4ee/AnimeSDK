#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_CD4EC20BEBA8A2DA;
class Class_1_D8BECDCE48063EC7;
class Class_2_D84B4578A743B6D7;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkSkillDice; }

#define CLASS_2_9B786B10431C509B_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x1C18CD70)
#define CLASS_2_9B786B10431C509B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C18CCC0)

inline static constexpr unsigned int Class_2_9B786B10431C509B_TypeDefinitionIndex = 35606;

class Class_2_9B786B10431C509B : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_D84B4578A743B6D7* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice* IGHAHBNLIJA; // 0x20
	::Class_1_CD4EC20BEBA8A2DA* LMDHPABCOAB; // 0x28

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_9B786B10431C509B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B786B10431C509B_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}
};
