#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityVisibleReason_TypeDefinitionIndex = 23657;

	enum class EntityVisibleReason : ::System::Int32
	{
		Task = 0,
		Skill = 1,
		Teleport = 2,
		AnimEvent = 3,
	};
}
