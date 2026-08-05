#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionStateParamType_TypeDefinitionIndex = 79711;

	enum class AIActionStateParamType : ::System::Int32
	{
		Int = 1,
		Bool = 0,
		Float = 2,
	};
}
