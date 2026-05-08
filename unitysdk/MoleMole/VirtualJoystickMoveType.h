#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int VirtualJoystickMoveType_TypeDefinitionIndex = 40667;

	enum class VirtualJoystickMoveType : ::System::Int32
	{
		Classic = 0,
		Modern = 1,
	};
}
