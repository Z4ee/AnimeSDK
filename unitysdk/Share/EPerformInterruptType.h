#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPerformInterruptType_TypeDefinitionIndex = 13078;

	enum class EPerformInterruptType : ::System::Int16
	{
		Continue = 0,
		Reset = 2,
		Pause = 1,
	};
}
