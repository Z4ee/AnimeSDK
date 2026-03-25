#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActionDelayVisibleType_TypeDefinitionIndex = 58330;

	enum class ActionDelayVisibleType : ::System::Int32
	{
		Fade = 1,
		InControlAction = 2,
		Setting = 4,
		Task = 8,
	};
}
