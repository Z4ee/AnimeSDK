#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AimIKLockTargetType_TypeDefinitionIndex = 54652;

	enum class AimIKLockTargetType : ::System::Int32
	{
		CrossHair = 3,
		CustomPosRot = 1,
		Target = 0,
		Self = 2,
	};
}
