#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITimerCounter_TimePartType_TypeDefinitionIndex = 48181;

	enum class MonoUITimerCounter_TimePartType : ::System::Int32
	{
		MILLI_SECOND_1 = 4,
		SECOND = 48,
		HOUR_LOW = 256,
		MINITE_LOW = 64,
		MINITE_HIGT = 128,
		MILLI_SECOND_2 = 8,
		ALL = 2147483647,
		HOUR_HIGT = 512,
		MINITE = 192,
		SECOND_LOW = 16,
		SECOND_HIGH = 32,
		HOUR = 768,
		MILLI_SECOND_0 = 2,
	};
}
