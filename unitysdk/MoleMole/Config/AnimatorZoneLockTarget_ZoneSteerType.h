#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_ZoneSteerType_TypeDefinitionIndex = 72639;

	enum class AnimatorZoneLockTarget_ZoneSteerType : ::System::Int32
	{
		Fixed = 2,
		None = 3,
		Instant = 0,
		Clamp = 1,
	};
}
