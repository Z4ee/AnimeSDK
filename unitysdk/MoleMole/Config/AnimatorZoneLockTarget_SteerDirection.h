#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_SteerDirection_TypeDefinitionIndex = 60616;

	enum class AnimatorZoneLockTarget_SteerDirection : ::System::Int32
	{
		Auto = 0,
		AntiClockwise = 2,
		Clockwise = 1,
	};
}
