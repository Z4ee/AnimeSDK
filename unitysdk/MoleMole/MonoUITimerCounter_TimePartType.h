#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITimerCounter_TimePartType_TypeDefinitionIndex = 46888;

	enum class MonoUITimerCounter_TimePartType : ::System::Int32
	{
		HOUR_HIGT = 512,
		HOUR_LOW = 256,
		MILLI_SECOND_1 = 4,
		MINITE_HIGT = 128,
		SECOND_HIGH = 32,
		SECOND_LOW = 16,
		ALL = 2147483647,
		HOUR = 768,
		MILLI_SECOND_2 = 8,
		MINITE = 192,
		MILLI_SECOND_0 = 2,
		MINITE_LOW = 64,
		SECOND = 48,
	};
}
