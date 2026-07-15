#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FindChestTriggerType_TypeDefinitionIndex = 12795;

	enum class FindChestTriggerType : ::System::Int32
	{
		None = 0,
		Avatar = 1,
		Item = 2,
	};
}
