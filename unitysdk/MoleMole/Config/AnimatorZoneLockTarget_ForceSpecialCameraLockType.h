#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_ForceSpecialCameraLockType_TypeDefinitionIndex = 72638;

	enum class AnimatorZoneLockTarget_ForceSpecialCameraLockType : ::System::Int32
	{
		None = 0,
		ForceNormal = 1,
		ForceBoss = 2,
	};
}
