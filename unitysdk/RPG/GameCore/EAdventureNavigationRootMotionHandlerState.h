#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAdventureNavigationRootMotionHandlerState_TypeDefinitionIndex = 57289;

	enum class EAdventureNavigationRootMotionHandlerState : ::System::Int32
	{
		None = 0,
		Activate = 1,
		Finish = 2,
	};
}
