#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	inline static constexpr unsigned int AISimulatePhase_TypeDefinitionIndex = 40504;

	enum class AISimulatePhase : ::System::Int32
	{
		Think = 0,
		Simulate = 1,
		Operate = 2,
	};
}
