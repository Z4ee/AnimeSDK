#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_SelectStateBehaviorType_TypeDefinitionIndex = 15324;

	enum class ST_SelectStateBehaviorType : ::System::Int32
	{
		SelectStateByOrder = 0,
		SelectStateAtRandom = 1,
	};
}
