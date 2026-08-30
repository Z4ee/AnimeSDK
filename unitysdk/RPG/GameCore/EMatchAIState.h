#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EMatchAIState_TypeDefinitionIndex = 58569;

	enum class EMatchAIState : ::System::Int32
	{
		Drive = 0,
		ChaseDelay = 1,
		Chase = 2,
		SprintYield = 3,
	};
}
