#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowPositionOffsetType_TypeDefinitionIndex = 16531;

	enum class EHollowPositionOffsetType : ::System::Int16
	{
		Absolute = 1,
		Relative = 0,
		EnumCount = 3,
		EventPos = 2,
	};
}
