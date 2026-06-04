#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int InstanceArrayV2AnimationTimeMode_TypeDefinitionIndex = 66037;

	enum class InstanceArrayV2AnimationTimeMode : ::System::Int32
	{
		Default = 0,
		AutoPlay = 1,
		FollowMonoEffectTime = 2,
	};
}
