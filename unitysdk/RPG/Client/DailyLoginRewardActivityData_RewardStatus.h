#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DailyLoginRewardActivityData_RewardStatus_TypeDefinitionIndex = 49982;

	enum class DailyLoginRewardActivityData_RewardStatus : ::System::Int32
	{
		None = 0,
		Unavailable = 1,
		Available = 2,
		Received = 3,
	};
}
