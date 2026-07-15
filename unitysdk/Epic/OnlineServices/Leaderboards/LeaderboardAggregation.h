#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int LeaderboardAggregation_TypeDefinitionIndex = 43688;

	enum class LeaderboardAggregation : ::System::Int32
	{
		Min = 0,
		Max = 1,
		Sum = 2,
		Latest = 3,
	};
}
