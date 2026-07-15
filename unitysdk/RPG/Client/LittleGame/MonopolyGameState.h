#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MonopolyGameState_TypeDefinitionIndex = 40381;

	enum class MonopolyGameState : ::System::Int32
	{
		Ready = 0,
		Moving = 1,
		Pause = 2,
		Finish = 3,
		SwitchWorld = 4,
	};
}
