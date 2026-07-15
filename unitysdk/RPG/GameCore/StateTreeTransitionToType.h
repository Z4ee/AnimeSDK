#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StateTreeTransitionToType_TypeDefinitionIndex = 14983;

	enum class StateTreeTransitionToType : ::System::Int32
	{
		SpecifiedState = 0,
		NextState = 1,
		TreeSucceed = 2,
		TreeFail = 3,
		NextValidState = 4,
	};
}
