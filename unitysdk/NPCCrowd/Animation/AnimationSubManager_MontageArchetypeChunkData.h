#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_MontageArchetypeChunkData_TypeDefinitionIndex = 70491;

	enum class AnimationSubManager_MontageArchetypeChunkData : ::System::Int32
	{
		Max = 5,
		BlendingRequest = 3,
		EntityId = 2,
		MontageData = 4,
		TickData = 0,
		ClipData = 1,
	};
}
