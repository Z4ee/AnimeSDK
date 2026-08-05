#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EAvatarLightChangeType_TypeDefinitionIndex = 64361;

	enum class EAvatarLightChangeType : ::System::Int32
	{
		Instant = 0,
		Linear = 2,
		ByCurve = 3,
		Lerp = 1,
	};
}
