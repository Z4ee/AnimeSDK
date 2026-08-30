#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPropStateIconCategory_TypeDefinitionIndex = 17000;

	enum class LevelPropStateIconCategory : ::System::Int32
	{
		PropState = 0,
		TimeRewind = 1,
	};
}
