#pragma once
#include "unitysdk/unitysdk.h"

namespace RichTap::Types
{
	inline static constexpr unsigned int State_TypeDefinitionIndex = 38743;

	enum class State : ::System::Int32
	{
		Idle = 0,
		Stop = 1,
		Play = 2,
		Update = 3,
	};
}
