#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooSpicalEventState_TypeDefinitionIndex = 11895;

	enum class SpaceZooSpicalEventState : ::System::Int32
	{
		Invalid = 0,
		Lock = 1,
		Unlock = 2,
		Get = 3,
	};
}
