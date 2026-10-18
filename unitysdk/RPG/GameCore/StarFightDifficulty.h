#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StarFightDifficulty_TypeDefinitionIndex = 12388;

	enum class StarFightDifficulty : ::System::Int32
	{
		Easy = 1,
		Hard = 2,
	};
}
