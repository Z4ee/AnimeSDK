#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLoginData_RewardStatus_TypeDefinitionIndex = 59010;

	enum class ActivityLoginData_RewardStatus : ::System::Int32
	{
		None = 0,
		Unavailable = 1,
		Available = 2,
		Received = 3,
	};
}
