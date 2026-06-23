#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int MessageItemType_TypeDefinitionIndex = 12889;

	enum class MessageItemType : ::System::Int32
	{
		DynamicLabel = 1,
		Normal = 0,
	};
}
