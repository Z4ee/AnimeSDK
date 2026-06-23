#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int NestedFSMState_FSMExitMode_TypeDefinitionIndex = 30744;

	enum class NestedFSMState_FSMExitMode : ::System::Int32
	{
		StopAndRestart = 0,
		PauseAndResume = 1,
	};
}
