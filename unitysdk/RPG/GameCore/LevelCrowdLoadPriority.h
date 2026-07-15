#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCrowdLoadPriority_TypeDefinitionIndex = 16593;

	enum class LevelCrowdLoadPriority : ::System::Int32
	{
		Low = 0,
		Middle = 1,
		High = 2,
	};
}
