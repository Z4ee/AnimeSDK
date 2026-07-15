#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int DiceCombatModifierEvent_TypeDefinitionIndex = 34883;

	enum class DiceCombatModifierEvent : ::System::Int32
	{
		OnTurnPrepare = 0,
		OnPreAttackerConfirmDice = 1,
		OnAttackerConfirmDice = 2,
		OnDefenderRollDice = 3,
		OnPreDefenderConfirmDice = 4,
		OnDefenderConfirmDice = 5,
		OnTurnEnd = 6,
		OnAfterRoll = 7,
		OnAttackSuccess = 8,
		OnAttackFailed = 9,
		OnDefendSuccess = 10,
		OnDefendFailed = 11,
		OnBeforeCombat = 12,
		OnAfterCombat = 13,
		OnDamage = 14,
		OnTakeDamage = 15,
	};
}
