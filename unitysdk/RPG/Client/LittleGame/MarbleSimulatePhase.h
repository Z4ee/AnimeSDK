#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MarbleSimulatePhase_TypeDefinitionIndex = 40014;

	enum class MarbleSimulatePhase : ::System::Int32
	{
		None = 0,
		Simulate = 1,
		Die = 2,
		Swallow = 3,
		Revive = 4,
		ShowScore = 5,
		Tutorial = 6,
		Delay = 7,
		Finish = 8,
	};
}
