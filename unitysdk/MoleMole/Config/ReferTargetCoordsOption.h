#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReferTargetCoordsOption_TypeDefinitionIndex = 79341;

	enum class ReferTargetCoordsOption : ::System::Int32
	{
		Unknown = -1,
		AimTargetPoint = 11,
		Relative = 2,
		EntityJoystic = 10,
		Target = 1,
		PlayerJoyStick = 9,
		Self = 0,
		View = 8,
		LocalAvatar = 3,
		Caster = 6,
		Buddy = 5,
		Camera = 4,
		ReferTarget = 7,
	};
}
