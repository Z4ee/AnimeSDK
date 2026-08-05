#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITimerCounter_TimePartType_TypeDefinitionIndex = 79333;

	enum class MonoUITimerCounter_TimePartType : ::System::Int32
	{
		SECOND_HIGH = 32,
		SECOND = 48,
		MINITE_LOW = 64,
		MINITE_HIGT = 128,
		MILLI_SECOND_2 = 8,
		MINITE = 192,
		HOUR = 768,
		HOUR_LOW = 256,
		MILLI_SECOND_1 = 4,
		ALL = 2147483647,
		MILLI_SECOND_0 = 2,
		HOUR_HIGT = 512,
		SECOND_LOW = 16,
	};
}
