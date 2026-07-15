#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAdvCharacterMovementMode_TypeDefinitionIndex = 10122;

	enum class EAdvCharacterMovementMode : ::System::Int32
	{
		Default = 0,
		NavWalking = 1,
	};
}
