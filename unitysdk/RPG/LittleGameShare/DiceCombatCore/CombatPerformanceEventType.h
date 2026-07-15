#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int CombatPerformanceEventType_TypeDefinitionIndex = 34885;

	enum class CombatPerformanceEventType : ::System::Byte
	{
		AttackerCutin = 0x0,
		AttackerCutinAnimation = 0x1,
		TriggerAttackEffect = 0x2,
		AttackerCutout = 0x3,
		IgnoreDefendPoint = 0x4,
		AttackDamage = 0x5,
		DirectDamage = 0x6,
		Heal = 0x7,
		AddModifier = 0x8,
		RemoveModifier = 0x9,
		UpdateModifier = 0xA,
		UpdateProperty_HP = 0xB,
		UpdateProperty_Atk = 0xC,
		UpdateProperty_Def = 0xD,
		TriggerCustomEffect = 0xE,
		TriggerSkillCutin = 0xF,
		TriggerSkillHint = 0x10,
		TriggerBossSpecialEffect = 0x11,
		TriggerSpecialHint = 0x12,
		IceEffect = 0x13,
		UpdateWeather = 0x14,
		DiceUpgrade = 0x15,
		BeforeCombatEffect = 0x16,
		CardCutin = 0x17,
		ChangeChallengerTeamActionEntity = 0x18,
		AfterCombatEffect = 0x19,
		ChallengerRevival = 0x1A,
		BossChangePhase = 0x1B,
		GainTacticsPoint = 0x1C,
		AlignAttack = 0x1D,
		AlignDefend = 0x1E,
		Count = 0x1F,
	};
}
