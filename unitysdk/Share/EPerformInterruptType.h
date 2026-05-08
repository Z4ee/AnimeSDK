#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPerformInterruptType_TypeDefinitionIndex = 13268;

	enum class EPerformInterruptType : ::System::Int16
	{
		Reset = 2,
		Continue = 0,
		Pause = 1,
	};
}
