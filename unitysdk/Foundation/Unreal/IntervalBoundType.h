#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Unreal
{
	inline static constexpr unsigned int IntervalBoundType_TypeDefinitionIndex = 8634;

	enum class IntervalBoundType : ::System::Byte
	{
		Open = 0x0,
		Exclusive = 0x1,
		Inclusive = 0x2,
	};
}
