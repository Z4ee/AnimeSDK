#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeGiftStatus_TypeDefinitionIndex = 62439;

	enum class RechargeGiftStatus : ::System::Int32
	{
		None = 0,
		Selling = 1,
		Rewarding = 2,
		Finished = 3,
	};
}
