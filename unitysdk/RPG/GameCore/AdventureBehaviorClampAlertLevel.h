#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureBehaviorClampAlertLevel_TypeDefinitionIndex = 16917;

	enum class AdventureBehaviorClampAlertLevel : ::System::Int32
	{
		None = 0,
		Alert = 1,
		Combat = 2,
	};
}
