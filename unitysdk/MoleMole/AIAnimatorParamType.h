#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AIAnimatorParamType_TypeDefinitionIndex = 65019;

	enum class AIAnimatorParamType : ::System::Int32
	{
		Float = 0,
		Bool = 2,
		Trigger = 3,
		Int = 1,
	};
}
