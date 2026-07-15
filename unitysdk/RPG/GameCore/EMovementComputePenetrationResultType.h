#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EMovementComputePenetrationResultType_TypeDefinitionIndex = 54544;

	enum class EMovementComputePenetrationResultType : ::System::Int32
	{
		None = 0,
		Scene = 1,
		Other = 2,
		SceneAndOther = 3,
	};
}
