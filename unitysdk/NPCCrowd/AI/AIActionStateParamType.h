#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionStateParamType_TypeDefinitionIndex = 84938;

	enum class AIActionStateParamType : ::System::Int32
	{
		Bool = 0,
		Int = 1,
		Float = 2,
	};
}
