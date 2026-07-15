#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraDuelTurnBasedBattleStageStep_TypeDefinitionIndex = 39509;

	enum class ChimeraDuelTurnBasedBattleStageStep : ::System::Int32
	{
		None = 0,
		SummonStage = 1,
		TurnBegin = 2,
		BeforeAction = 3,
		Action = 4,
		AfterAction = 5,
		TurnSettle = 6,
		Count = 7,
	};
}
