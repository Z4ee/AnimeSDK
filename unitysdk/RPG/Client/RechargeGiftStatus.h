#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeGiftStatus_TypeDefinitionIndex = 63805;

	enum class RechargeGiftStatus : ::System::Int32
	{
		None = 0,
		Selling = 1,
		Rewarding = 2,
		Finished = 3,
	};
}
