#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int QteCatchGhostRewindInstance_RewindPhase_TypeDefinitionIndex = 57567;

	enum class QteCatchGhostRewindInstance_RewindPhase : ::System::Int32
	{
		Ready = 0,
		Escape = 1,
		Aim = 2,
		Drag = 3,
		Struggle = 4,
		Return = 5,
		Finish = 6,
	};
}
