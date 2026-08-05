#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCUnionAnimatorManager_NPCAnimationStateParams_TypeDefinitionIndex = 61915;

	enum class NPCUnionAnimatorManager_NPCAnimationStateParams : ::System::Int32
	{
		AttractorState = 1,
		None = 0,
		UpperBodyState = 3,
		ReactionState = 2,
	};
}
