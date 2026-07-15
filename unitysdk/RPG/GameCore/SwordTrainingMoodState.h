#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingMoodState_TypeDefinitionIndex = 11942;

	enum class SwordTrainingMoodState : ::System::Int32
	{
		None = 0,
		Low = 1,
		Middle = 2,
		Normal = 3,
		High = 4,
	};
}
