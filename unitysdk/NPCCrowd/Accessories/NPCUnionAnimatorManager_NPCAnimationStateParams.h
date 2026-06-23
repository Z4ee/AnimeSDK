#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCUnionAnimatorManager_NPCAnimationStateParams_TypeDefinitionIndex = 84740;

	enum class NPCUnionAnimatorManager_NPCAnimationStateParams : ::System::Int32
	{
		AttractorState = 1,
		ReactionState = 2,
		None = 0,
		UpperBodyState = 3,
	};
}
