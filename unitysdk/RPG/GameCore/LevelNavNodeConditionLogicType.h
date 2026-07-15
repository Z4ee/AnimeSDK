#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeConditionLogicType_TypeDefinitionIndex = 16471;

	enum class LevelNavNodeConditionLogicType : ::System::Int32
	{
		Or = 0,
		And = 1,
	};
}
