#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeAnimatorConditionMode_TypeDefinitionIndex = 65757;

	enum class RuntimeAnimatorConditionMode : ::System::Int32
	{
		If = 1,
		IfNot = 2,
		Greater = 3,
		Less = 4,
		Equals = 6,
		NotEqual = 7,
	};
}
