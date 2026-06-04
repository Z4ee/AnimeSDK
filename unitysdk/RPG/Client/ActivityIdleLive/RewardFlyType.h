#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int RewardFlyType_TypeDefinitionIndex = 70180;

	enum class RewardFlyType : ::System::Int32
	{
		TechPoint = 0,
		Gem = 1,
		Box = 2,
		Ticket = 3,
	};
}
