#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int MessageItemType_TypeDefinitionIndex = 18545;

	enum class MessageItemType : ::System::Int32
	{
		Normal = 0,
		DynamicLabel = 1,
	};
}
