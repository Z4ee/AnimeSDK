#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupMissionConditionOperation_TypeDefinitionIndex = 16297;

	enum class LevelGroupMissionConditionOperation : ::System::Int32
	{
		And = 0,
		Or = 1,
	};
}
