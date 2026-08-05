#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBubbleInsertType_TypeDefinitionIndex = 10030;

	enum class EBubbleInsertType : ::System::Int16
	{
		Begin = 1,
		EnumCount = 4,
		None = 0,
		Duration = 3,
		End = 2,
	};
}
