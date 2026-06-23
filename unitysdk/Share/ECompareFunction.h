#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECompareFunction_TypeDefinitionIndex = 9455;

	enum class ECompareFunction : ::System::Int16
	{
		EnumCount = 7,
		GreaterEqual = 1,
		Greater = 0,
		LessEqual = 4,
		NotEqual = 6,
		Equal = 2,
		Less = 3,
	};
}
