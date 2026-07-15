#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int WriteMessageThread_State_TypeDefinitionIndex = 36357;

	enum class WriteMessageThread_State : ::System::Int32
	{
		Idle = 0,
		Writing = 1,
		LostConnection = 2,
		Max = 3,
	};
}
