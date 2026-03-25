#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNavigationState_TypeDefinitionIndex = 45984;

	enum class AdvNavigationState : ::System::Int32
	{
		Ready = 0,
		PreSteer = 1,
		Pathing = 2,
		WaitForRootMotion = 3,
		PostSteer = 4,
		WaitForStop = 5,
	};
}
