#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoleSwitchCondType_TypeDefinitionIndex = 13533;

	enum class RoleSwitchCondType : ::System::Int32
	{
		None = 0,
		ByMaxTrait = 1,
		ByPlacedInBackRegion = 2,
	};
}
