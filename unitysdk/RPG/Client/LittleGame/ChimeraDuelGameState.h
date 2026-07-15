#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraDuelGameState_TypeDefinitionIndex = 39491;

	enum class ChimeraDuelGameState : ::System::Int32
	{
		Invalid = 0,
		GameStartStage = 1,
		GameLoopStage = 2,
		GameSettleStage = 3,
	};
}
