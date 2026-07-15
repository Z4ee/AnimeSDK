#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int AutoTestLogType_TypeDefinitionIndex = 34716;

	enum class AutoTestLogType : ::System::Int32
	{
		Start = 0,
		End = 1,
		AddModifier = 2,
		UpdateModifier = 3,
		RemoveModifier = 4,
		AttackerRollDice = 5,
		AttackerUseLimitedDice = 6,
		DefenderRollDice = 7,
		DefenderUseLimitedDice = 8,
		AttackerConfirm = 9,
		DefenderConfirm = 10,
		AttackDamage = 11,
		DirectDamage = 12,
		StrikeBackDamage = 13,
		Heal = 14,
		InsertAbility = 15,
	};
}
