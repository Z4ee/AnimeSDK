#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Unreal
{
	inline static constexpr unsigned int IntervalBoundType_TypeDefinitionIndex = 8897;

	enum class IntervalBoundType : ::System::Byte
	{
		Inclusive = 0x2,
		Open = 0x0,
		Exclusive = 0x1,
	};
}
