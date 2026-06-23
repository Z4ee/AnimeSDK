#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FSM_TransitionCallMode_TypeDefinitionIndex = 29183;

	enum class FSM_TransitionCallMode : ::System::Int32
	{
		Stacked = 1,
		Normal = 0,
		Clean = 2,
	};
}
