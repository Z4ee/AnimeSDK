#pragma once
#include "unitysdk/unitysdk.h"

namespace IRIClusterBuilder::Test
{
	inline static constexpr unsigned int IRICarTestManager_LightType_TypeDefinitionIndex = 45998;

	enum class IRICarTestManager_LightType : ::System::Int32
	{
		MainLight = 0,
		BreakLight = 1,
		TurnRightLight = 2,
		TurnLeftLight = 3,
		TailLight = 4,
	};
}
