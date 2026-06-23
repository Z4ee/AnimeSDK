#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_TargetType_TypeDefinitionIndex = 45163;

	enum class AnimatorZoneLockTarget_TargetType : ::System::Int32
	{
		CustomPosRot = 2,
		Target = 0,
		GuideTargetPosition = 1,
	};
}
