#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AimIKLockTargetType_TypeDefinitionIndex = 47433;

	enum class AimIKLockTargetType : ::System::Int32
	{
		CrossHair = 3,
		Self = 2,
		Target = 0,
		CustomPosRot = 1,
	};
}
