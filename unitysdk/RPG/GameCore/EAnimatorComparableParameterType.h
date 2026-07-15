#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAnimatorComparableParameterType_TypeDefinitionIndex = 10143;

	enum class EAnimatorComparableParameterType : ::System::Int32
	{
		Float = 0,
		Int = 1,
		Bool = 2,
	};
}
