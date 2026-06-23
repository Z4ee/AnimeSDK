#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowPositionOffsetType_TypeDefinitionIndex = 15458;

	enum class EHollowPositionOffsetType : ::System::Int16
	{
		EnumCount = 3,
		Absolute = 1,
		EventPos = 2,
		Relative = 0,
	};
}
