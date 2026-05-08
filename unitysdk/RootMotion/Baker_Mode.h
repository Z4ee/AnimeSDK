#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion
{
	inline static constexpr unsigned int Baker_Mode_TypeDefinitionIndex = 36506;

	enum class Baker_Mode : ::System::Int32
	{
		AnimationClips = 0,
		AnimationStates = 1,
		PlayableDirector = 2,
		Realtime = 3,
	};
}
