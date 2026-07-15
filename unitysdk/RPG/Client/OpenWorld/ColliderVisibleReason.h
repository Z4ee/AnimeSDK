#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int ColliderVisibleReason_TypeDefinitionIndex = 70523;

	enum class ColliderVisibleReason : ::System::Int32
	{
		PVS = 0,
		OverrideSystem = 1,
	};
}
