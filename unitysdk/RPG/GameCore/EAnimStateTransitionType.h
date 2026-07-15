#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAnimStateTransitionType_TypeDefinitionIndex = 54606;

	enum class EAnimStateTransitionType : ::System::Int32
	{
		Default = 0,
		TransitionIn = 1,
		TransitionOut = 2,
	};
}
