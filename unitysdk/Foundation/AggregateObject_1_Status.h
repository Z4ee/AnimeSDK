#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AggregateObject_1_Status_TypeDefinitionIndex = 9170;

	enum class AggregateObject_1_Status : ::System::Int32
	{
		Initialized = 3,
		IsRegistering = 1,
		OnRegistered = 2,
		None = 0,
	};
}
