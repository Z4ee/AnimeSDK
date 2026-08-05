#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAttractorInteractState_TypeDefinitionIndex = 40306;

	enum class NPCAttractorInteractState : ::System::Int32
	{
		None = 0,
		Claim = 2,
		Using = 3,
		Query = 1,
		Exiting = 4,
	};
}
