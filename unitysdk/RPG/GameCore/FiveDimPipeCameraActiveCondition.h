#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPipeCameraActiveCondition_TypeDefinitionIndex = 17839;

	enum class FiveDimPipeCameraActiveCondition : ::System::Int32
	{
		HintTrigger = 0,
		EnterExitPipe = 1,
	};
}
