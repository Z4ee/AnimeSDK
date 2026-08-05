#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AimIKLockTargetType_TypeDefinitionIndex = 41947;

	enum class AimIKLockTargetType : ::System::Int32
	{
		Target = 0,
		Self = 2,
		CustomPosRot = 1,
		CrossHair = 3,
	};
}
