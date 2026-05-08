#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReferTargetCoordsOption_TypeDefinitionIndex = 45978;

	enum class ReferTargetCoordsOption : ::System::Int32
	{
		LocalAvatar = 3,
		EntityJoystic = 10,
		Caster = 6,
		Unknown = -1,
		PlayerJoyStick = 9,
		ReferTarget = 7,
		AimTargetPoint = 11,
		Relative = 2,
		Self = 0,
		View = 8,
		Buddy = 5,
		Target = 1,
		Camera = 4,
	};
}
