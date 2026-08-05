#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FSM_TransitionCallMode_TypeDefinitionIndex = 31215;

	enum class FSM_TransitionCallMode : ::System::Int32
	{
		Normal = 0,
		Clean = 2,
		Stacked = 1,
	};
}
