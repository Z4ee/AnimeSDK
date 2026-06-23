#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityFlushTransformSubSystem_ExternalObstacleOperationType_TypeDefinitionIndex = 48631;

	enum class NPCAbilityFlushTransformSubSystem_ExternalObstacleOperationType : ::System::Byte
	{
		Upsert = 0x0,
		Remove = 0x1,
	};
}
