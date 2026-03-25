#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int CombatPerformanceEventType_TypeDefinitionIndex = 28536;

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
		TriggerSpecialHint = 0x11,
		IceEffect = 0x12,
		UpdateWeather = 0x13,
		DiceUpgrade = 0x14,
		StartCombat = 0x15,
		AfterCombat = 0x16,
		ChallengerRevival = 0x17,
		BossChangePhase = 0x18,
		Count = 0x19,
	};
}
