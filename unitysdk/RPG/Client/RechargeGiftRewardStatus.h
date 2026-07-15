#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeGiftRewardStatus_TypeDefinitionIndex = 63808;

	enum class RechargeGiftRewardStatus : ::System::Int32
	{
		None = 0,
		Locked = 1,
		CanReceive = 2,
		Received = 3,
	};
}
