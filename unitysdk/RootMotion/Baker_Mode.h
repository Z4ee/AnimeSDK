#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion
{
	inline static constexpr unsigned int Baker_Mode_TypeDefinitionIndex = 38346;

	enum class Baker_Mode : ::System::Int32
	{
		AnimationClips = 0,
		PlayableDirector = 2,
		AnimationStates = 1,
		Realtime = 3,
	};
}
