#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeRewardGotoStatus_TypeDefinitionIndex = 58938;

	enum class LightConeRewardGotoStatus : ::System::Int32
	{
		NOT_AVAILABLE = 0,
		AVAILABLE = 1,
		TAKEN = 2,
	};
}
