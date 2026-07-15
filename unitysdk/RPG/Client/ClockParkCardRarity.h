#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkCardRarity_TypeDefinitionIndex = 58748;

	enum class ClockParkCardRarity : ::System::Int32
	{
		None = 0,
		Normal = 1,
		AllPositive = 2,
		AllNegative = 3,
		PartialPositiveOrNone = 4,
		PartialNegativeOrNone = 5,
	};
}
