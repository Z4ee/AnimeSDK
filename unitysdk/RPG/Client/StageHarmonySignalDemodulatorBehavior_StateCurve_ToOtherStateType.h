#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDemodulatorBehavior_StateCurve_ToOtherStateType_TypeDefinitionIndex = 70960;

	enum class StageHarmonySignalDemodulatorBehavior_StateCurve_ToOtherStateType : ::System::Int32
	{
		WaitCurrentStateFinished = 0,
		JumpToOtherStateImidiate = 1,
	};
}
