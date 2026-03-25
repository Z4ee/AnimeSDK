#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int DiceCombatModifierEvent_TypeDefinitionIndex = 28534;

	enum class DiceCombatModifierEvent : ::System::Int32
	{
		OnTurnPrepare = 0,
		OnAttackerConfirmDice = 1,
		OnDefenderConfirmDice = 2,
		OnTurnEnd = 3,
		OnAfterRoll = 4,
		OnAttackSuccess = 5,
		OnAttackFailed = 6,
		OnDefendSuccess = 7,
		OnDefendFailed = 8,
		OnBeforeCombat = 9,
		OnAfterCombat = 10,
		OnDamage = 11,
		OnTakeDamage = 12,
	};
}
