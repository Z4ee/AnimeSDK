#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_MontageArchetypeChunkData_TypeDefinitionIndex = 88236;

	enum class AnimationSubManager_MontageArchetypeChunkData : ::System::Int32
	{
		TickData = 0,
		ClipData = 1,
		EntityId = 2,
		Max = 5,
		BlendingRequest = 3,
		MontageData = 4,
	};
}
