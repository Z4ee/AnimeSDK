#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EAvatarLightChangeType_TypeDefinitionIndex = 53548;

	enum class EAvatarLightChangeType : ::System::Int32
	{
		Lerp = 1,
		Instant = 0,
		ByCurve = 3,
		Linear = 2,
	};
}
