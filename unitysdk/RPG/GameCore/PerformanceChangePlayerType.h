#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceChangePlayerType_TypeDefinitionIndex = 10134;

	enum class PerformanceChangePlayerType : ::System::Int32
	{
		None = 0,
		StoryLine = 1,
		Character = 2,
	};
}
