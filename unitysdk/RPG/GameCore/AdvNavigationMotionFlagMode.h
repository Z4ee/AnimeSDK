#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNavigationMotionFlagMode_TypeDefinitionIndex = 10092;

	enum class AdvNavigationMotionFlagMode : ::System::Int32
	{
		Default = 0,
		AdjustByTargetDistance = 1,
	};
}
