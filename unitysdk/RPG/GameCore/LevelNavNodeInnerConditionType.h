#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerConditionType_TypeDefinitionIndex = 16470;

	enum class LevelNavNodeInnerConditionType : ::System::Int32
	{
		FSV = 0,
		FloorConstValue = 1,
		GroupProperty = 2,
	};
}
