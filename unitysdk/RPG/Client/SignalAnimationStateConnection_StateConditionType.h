#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SignalAnimationStateConnection_StateConditionType_TypeDefinitionIndex = 67777;

	enum class SignalAnimationStateConnection_StateConditionType : ::System::Int32
	{
		Greater = 0,
		GreaterOrEqual = 1,
		Less = 2,
		LessOrEqual = 3,
		Equal = 4,
	};
}
