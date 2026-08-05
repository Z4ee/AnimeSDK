#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int EMontagePriorityLayer_TypeDefinitionIndex = 90283;

	enum class EMontagePriorityLayer : ::System::Int32
	{
		BaseAnim = 0,
		BlendShape = 2,
		Count = 4,
		Eyes = 3,
		BangbooFrameKey = 1,
	};
}
