#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int DiceCombatGameState_TypeDefinitionIndex = 34653;

	enum class DiceCombatGameState : ::System::Byte
	{
		WaitPlayerEnterAndLoading = 0x1,
		Coin = 0x2,
		TurnPrepare = 0x3,
		TacticsBuy = 0x4,
		AttackerRollDice = 0x5,
		AttackerSwapDice = 0x6,
		PreAttackerConfirmDiceModifier = 0x7,
		AttackerConfirmDiceModifier = 0x8,
		DefenderRollDice = 0x9,
		DefenderSwapDice = 0xA,
		PreDefenderConfirmDiceModifier = 0xB,
		DefenderConfirmDiceModifier = 0xC,
		Combat = 0xD,
		TurnEnd = 0xE,
		GameFinish = 0xF,
	};
}
