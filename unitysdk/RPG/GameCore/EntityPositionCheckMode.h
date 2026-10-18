#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityPositionCheckMode_TypeDefinitionIndex = 16282;

	enum class EntityPositionCheckMode : ::System::Int32
	{
		None = 0,
		GroundCollider = 1,
		NavMesh = 2,
	};
}
