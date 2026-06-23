#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_ZoneSteerType_TypeDefinitionIndex = 45161;

	enum class AnimatorZoneLockTarget_ZoneSteerType : ::System::Int32
	{
		Clamp = 1,
		Instant = 0,
		Fixed = 2,
		None = 3,
	};
}
