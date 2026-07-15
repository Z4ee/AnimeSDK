#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingDescGroup_TypeDefinitionIndex = 13460;

	enum class LoadingDescGroup : ::System::Int32
	{
		None = 0,
		Default = 1,
		StoryLine = 2,
		World100 = 3100,
		World101 = 3101,
		World201 = 3201,
		World301 = 3301,
		World401 = 3401,
		World501 = 3501,
		World601 = 3601,
		NormalRule = 401,
		NormalIP = 402,
	};
}
