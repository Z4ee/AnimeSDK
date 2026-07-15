#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityPosAdaptionOption_TypeDefinitionIndex = 23634;

	enum class EntityPosAdaptionOption : ::System::UInt32
	{
		None = 0x0,
		RayCastCheck = 0x1,
		GroundCheck = 0x2,
		NavMeshCheck = 0x4,
		PathCheck = 0x8,
		AvoidanceCheck = 0x10,
		StepGroundCheck = 0x20,
		NavMeshEdgeAvoidance = 0x40,
		Default = 0x20,
		CharacterDefault = 0x1E,
	};
}
