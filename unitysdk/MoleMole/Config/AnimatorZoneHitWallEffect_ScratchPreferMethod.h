#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneHitWallEffect_ScratchPreferMethod_TypeDefinitionIndex = 75553;

	enum class AnimatorZoneHitWallEffect_ScratchPreferMethod : ::System::Int32
	{
		PREFER_LATER_AS_HEAD = 1,
		PREFER_EARLY_AS_HEAD = 0,
	};
}
