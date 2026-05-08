#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int NestedBTState_BTExitMode_TypeDefinitionIndex = 27290;

	enum class NestedBTState_BTExitMode : ::System::Int32
	{
		StopAndRestart = 0,
		PauseAndResume = 1,
	};
}
