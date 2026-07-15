#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityDestroyWaitReason_TypeDefinitionIndex = 55230;

	enum class EntityDestroyWaitReason : ::System::Int32
	{
		Kill = 0,
		DeathPerform = 1,
	};
}
