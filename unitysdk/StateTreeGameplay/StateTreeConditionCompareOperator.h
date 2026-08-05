#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeGameplay
{
	inline static constexpr unsigned int StateTreeConditionCompareOperator_TypeDefinitionIndex = 84737;

	enum class StateTreeConditionCompareOperator : ::System::Byte
	{
		Less = 0x0,
		Greater = 0x5,
		NotEqual = 0x3,
		LessOrEqual = 0x1,
		GreaterOrEqual = 0x4,
		Equal = 0x2,
	};
}
