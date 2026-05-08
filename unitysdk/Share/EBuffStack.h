#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBuffStack_TypeDefinitionIndex = 17183;

	enum class EBuffStack : ::System::Int16
	{
		Unique = 0,
		Stack = 2,
		Overwrite = 1,
		EnumCount = 3,
	};
}
