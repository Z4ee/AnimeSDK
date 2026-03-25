#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int DiceCombatGameState_TypeDefinitionIndex = 28345;

	enum class DiceCombatGameState : ::System::Byte
	{
		WaitPlayerEnterAndLoading = 0x1,
		Coin = 0x2,
		TurnPrepare = 0x3,
		AttackerRollDice = 0x4,
		AttackerSwapDice = 0x5,
		AttackerConfirmDiceModifier = 0x6,
		DefenderRollDice = 0x7,
		DefenderSwapDice = 0x8,
		DefenderConfirmDiceModifier = 0x9,
		Combat = 0xA,
		TurnEnd = 0xB,
		GameFinish = 0xC,
	};
}
