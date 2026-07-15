#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int DropRateType_TypeDefinitionIndex = 71542;

	enum class DropRateType : ::System::Int32
	{
		Chest = 0,
		Crystal = 1,
		Ticket = 2,
	};
}
