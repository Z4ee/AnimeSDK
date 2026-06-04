#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeBossDisplayPattern_TypeDefinitionIndex = 12333;

	enum class ChallengeBossDisplayPattern : ::System::Int32
	{
		Small = 0,
		SmallAndLarge = 1,
		Large = 2,
	};
}
