#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int EAIState_TypeDefinitionIndex = 34641;

	enum class EAIState : ::System::Int32
	{
		Idle = 0,
		RollDice = 1,
		RerollDiceAction = 2,
		ConfirmDiceAction = 3,
		ConfirmDice = 4,
		UseLimitedDice = 5,
		UseLimitedDiceAction = 6,
		TacticsBuy = 7,
		TacticsUse = 8,
		SwapDice = 9,
	};
}
