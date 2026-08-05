#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int FloatComparison_Operation_TypeDefinitionIndex = 34294;

	enum class FloatComparison_Operation : ::System::Int32
	{
		LessThan = 0,
		LessThanOrEqualTo = 1,
		EqualTo = 2,
		NotEqualTo = 3,
		GreaterThanOrEqualTo = 4,
		GreaterThan = 5,
	};
}
