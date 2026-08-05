#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReferTargetCoordsOption_TypeDefinitionIndex = 91419;

	enum class ReferTargetCoordsOption : ::System::Int32
	{
		Camera = 4,
		PlayerJoyStick = 9,
		EntityJoystic = 10,
		Unknown = -1,
		LocalAvatar = 3,
		ReferTarget = 7,
		View = 8,
		Caster = 6,
		AimTargetPoint = 11,
		Self = 0,
		Target = 1,
		Buddy = 5,
		Relative = 2,
	};
}
