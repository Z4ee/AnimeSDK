#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion
{
	inline static constexpr unsigned int Baker_Mode_TypeDefinitionIndex = 38996;

	enum class Baker_Mode : ::System::Int32
	{
		Realtime = 3,
		PlayableDirector = 2,
		AnimationClips = 0,
		AnimationStates = 1,
	};
}
