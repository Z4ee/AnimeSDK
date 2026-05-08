#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBubbleInsertType_TypeDefinitionIndex = 12667;

	enum class EBubbleInsertType : ::System::Int16
	{
		None = 0,
		Duration = 3,
		EnumCount = 4,
		End = 2,
		Begin = 1,
	};
}
