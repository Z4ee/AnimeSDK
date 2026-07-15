#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtAIBehaviorState_TypeDefinitionIndex = 51619;

	enum class RtAIBehaviorState : ::System::Int32
	{
		Init = 0,
		Runing = 1,
		Stop = 2,
		Release = 3,
	};
}
