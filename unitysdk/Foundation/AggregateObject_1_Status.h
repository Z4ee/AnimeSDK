#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AggregateObject_1_Status_TypeDefinitionIndex = 8755;

	enum class AggregateObject_1_Status : ::System::Int32
	{
		None = 0,
		IsRegistering = 1,
		OnRegistered = 2,
		Initialized = 3,
	};
}
