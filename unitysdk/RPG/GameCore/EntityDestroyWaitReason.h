#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityDestroyWaitReason_TypeDefinitionIndex = 46607;

	enum class EntityDestroyWaitReason : ::System::Int32
	{
		Kill = 0,
		DeathPerform = 1,
	};
}
