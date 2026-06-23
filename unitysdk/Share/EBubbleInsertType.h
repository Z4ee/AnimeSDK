#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBubbleInsertType_TypeDefinitionIndex = 13021;

	enum class EBubbleInsertType : ::System::Int16
	{
		End = 2,
		EnumCount = 4,
		None = 0,
		Begin = 1,
		Duration = 3,
	};
}
