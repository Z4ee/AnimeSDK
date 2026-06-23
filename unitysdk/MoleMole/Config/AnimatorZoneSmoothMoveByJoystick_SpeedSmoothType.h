#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSmoothMoveByJoystick_SpeedSmoothType_TypeDefinitionIndex = 85816;

	enum class AnimatorZoneSmoothMoveByJoystick_SpeedSmoothType : ::System::Int32
	{
		SpringDamp = 4,
		None = 0,
		Lerp = 3,
		Instant = 1,
		Fixed = 2,
	};
}
