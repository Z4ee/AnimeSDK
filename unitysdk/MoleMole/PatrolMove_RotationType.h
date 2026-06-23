#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PatrolMove_RotationType_TypeDefinitionIndex = 65061;

	enum class PatrolMove_RotationType : ::System::Int32
	{
		Instant = 0,
		UseRotationSpeed = 1,
	};
}
