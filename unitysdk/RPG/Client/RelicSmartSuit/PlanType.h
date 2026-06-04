#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int PlanType_TypeDefinitionIndex = 69501;

	enum class PlanType : ::System::Int32
	{
		Invalid = 0,
		System = 1,
		HighlyUsed = 2,
		Custom = 3,
		Self = 4,
	};
}
