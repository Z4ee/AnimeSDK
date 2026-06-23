#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int FloatOperator_Operation_TypeDefinitionIndex = 33660;

	enum class FloatOperator_Operation : ::System::Int32
	{
		Add = 0,
		Subtract = 1,
		Multiply = 2,
		Divide = 3,
		Min = 4,
		Max = 5,
		Modulo = 6,
	};
}
