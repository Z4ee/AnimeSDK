#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FrameSyncStepPhase_TypeDefinitionIndex = 53876;

	enum class FrameSyncStepPhase : ::System::Int32
	{
		None = 0,
		PreStepAction = 1,
		ExecuteOp = 2,
		PosStepAction = 3,
	};
}
