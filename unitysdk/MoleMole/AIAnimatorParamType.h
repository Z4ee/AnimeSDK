#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AIAnimatorParamType_TypeDefinitionIndex = 77883;

	enum class AIAnimatorParamType : ::System::Int32
	{
		Int = 1,
		Float = 0,
		Trigger = 3,
		Bool = 2,
	};
}
