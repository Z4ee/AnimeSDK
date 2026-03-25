#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeConditionLogicType_TypeDefinitionIndex = 15742;

	enum class LevelNavNodeConditionLogicType : ::System::Int32
	{
		Or = 0,
		And = 1,
	};
}
