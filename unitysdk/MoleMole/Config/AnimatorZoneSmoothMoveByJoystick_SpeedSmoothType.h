#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSmoothMoveByJoystick_SpeedSmoothType_TypeDefinitionIndex = 76221;

	enum class AnimatorZoneSmoothMoveByJoystick_SpeedSmoothType : ::System::Int32
	{
		Lerp = 3,
		Instant = 1,
		Fixed = 2,
		None = 0,
		SpringDamp = 4,
	};
}
