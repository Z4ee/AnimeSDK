#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int EAICarState_TypeDefinitionIndex = 41286;

	enum class EAICarState : ::System::Int32
	{
		BehindPlayer = 0,
		AheadOfPlayer = 1,
		OvertakeProtection = 2,
		Overtaken = 3,
		OvertakenRecovery = 4,
	};
}
