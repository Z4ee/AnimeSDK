#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::CrowdPhysics
{
	inline static constexpr unsigned int DitherState_EDitherState_TypeDefinitionIndex = 51701;

	enum class DitherState_EDitherState : ::System::Int32
	{
		FadeIn = 1,
		FadeOut = 2,
		None = 0,
	};
}
