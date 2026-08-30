#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonDifficulty_TypeDefinitionIndex = 12319;

	enum class ActivitySummonDifficulty : ::System::Int32
	{
		Easy = 1,
		Hard = 2,
	};
}
