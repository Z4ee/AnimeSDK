#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraGameStage_TypeDefinitionIndex = 39531;

	enum class ChimeraGameStage : ::System::Int32
	{
		None = 0,
		Ready = 1,
		OnGameStart = 2,
		PreBattle = 3,
		InBattle = 4,
		AfterBattleBeforeDeath = 5,
		AfterBattleInDeath = 6,
		GameSettle = 7,
		TransitionBetweenWorks = 8,
	};
}
