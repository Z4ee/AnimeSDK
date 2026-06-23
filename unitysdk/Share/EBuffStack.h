#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBuffStack_TypeDefinitionIndex = 11050;

	enum class EBuffStack : ::System::Int16
	{
		Unique = 0,
		Overwrite = 1,
		EnumCount = 3,
		Stack = 2,
	};
}
