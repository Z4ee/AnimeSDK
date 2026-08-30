#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPipeCameraActiveCondition_TypeDefinitionIndex = 18358;

	enum class FiveDimPipeCameraActiveCondition : ::System::Int32
	{
		HintTrigger = 0,
		EnterExitPipe = 1,
	};
}
