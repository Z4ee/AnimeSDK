#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int BoolOperator_Operation_TypeDefinitionIndex = 32103;

	enum class BoolOperator_Operation : ::System::Int32
	{
		AND = 0,
		OR = 1,
		NAND = 2,
		XOR = 3,
	};
}
