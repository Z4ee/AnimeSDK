#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EAvatarLightChangeType_TypeDefinitionIndex = 85778;

	enum class EAvatarLightChangeType : ::System::Int32
	{
		ByCurve = 3,
		Instant = 0,
		Lerp = 1,
		Linear = 2,
	};
}
