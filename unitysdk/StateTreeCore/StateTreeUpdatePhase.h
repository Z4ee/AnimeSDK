#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeUpdatePhase_TypeDefinitionIndex = 31537;

	enum class StateTreeUpdatePhase : ::System::Byte
	{
		Unset = 0x0,
		StartTree = 0x1,
		StopTree = 0x2,
		StartGlobalTasks = 0x3,
		StopGlobalTasks = 0x4,
		TickStateTree = 0x5,
		ApplyTransitions = 0x6,
		TriggerTransitions = 0x7,
		TickingGlobalTasks = 0x8,
		TickingTasks = 0x9,
		TransitionConditions = 0xA,
		StateSelection = 0xB,
		TrySelectBehavior = 0xC,
		EnterConditions = 0xD,
		EnterStates = 0xE,
		ExitStates = 0xF,
		StateCompleted = 0x10,
	};
}
