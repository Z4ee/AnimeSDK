#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Unreal
{
	inline static constexpr unsigned int IntervalBoundType_TypeDefinitionIndex = 8556;

	enum class IntervalBoundType : ::System::Byte
	{
		Open = 0x0,
		Inclusive = 0x2,
		Exclusive = 0x1,
	};
}
