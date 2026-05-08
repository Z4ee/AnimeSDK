#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int IntComparison_Operation_TypeDefinitionIndex = 32113;

	enum class IntComparison_Operation : ::System::Int32
	{
		LessThan = 0,
		LessThanOrEqualTo = 1,
		EqualTo = 2,
		NotEqualTo = 3,
		GreaterThanOrEqualTo = 4,
		GreaterThan = 5,
	};
}
