#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDifficulty_TypeDefinitionIndex = 11090;

	enum class LevelDifficulty : ::System::Int32
	{
		Easy = 1,
		Normal = 2,
		Hard = 3,
	};
}
