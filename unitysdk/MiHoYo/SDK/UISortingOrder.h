#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UISortingOrder_TypeDefinitionIndex = 8033;

	enum class UISortingOrder : ::System::Int32
	{
		Default = 99,
		Low = 1,
		LowMiddle = 100,
		Middle = 199,
		High = 999,
		Max = 1000,
	};
}
