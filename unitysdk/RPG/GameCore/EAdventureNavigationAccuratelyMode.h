#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAdventureNavigationAccuratelyMode_TypeDefinitionIndex = 53352;

	enum class EAdventureNavigationAccuratelyMode : ::System::Int32
	{
		None = 0,
		LocationOnly = 1,
		LocationAndRotation = 2,
	};
}
