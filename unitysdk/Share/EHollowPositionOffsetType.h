#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowPositionOffsetType_TypeDefinitionIndex = 10175;

	enum class EHollowPositionOffsetType : ::System::Int16
	{
		EventPos = 2,
		Absolute = 1,
		Relative = 0,
		EnumCount = 3,
	};
}
