#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNavigationState_TypeDefinitionIndex = 57115;

	enum class AdvNavigationState : ::System::Int32
	{
		Ready = 0,
		Calculating = 1,
		PreSteer = 2,
		Pathing = 3,
		WaitForRootMotion = 4,
		PostSteer = 5,
		WaitForStop = 6,
	};
}
