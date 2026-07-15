#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelMinimapSectionType_TypeDefinitionIndex = 16489;

	enum class LevelMinimapSectionType : ::System::Int32
	{
		Normal = 0,
		RoadItem = 1,
	};
}
