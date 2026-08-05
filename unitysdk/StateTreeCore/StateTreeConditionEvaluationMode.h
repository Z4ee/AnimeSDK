#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeConditionEvaluationMode_TypeDefinitionIndex = 31540;

	enum class StateTreeConditionEvaluationMode : ::System::Byte
	{
		Evaluated = 0x0,
		ForcedTrue = 0x1,
		ForcedFalse = 0x2,
	};
}
