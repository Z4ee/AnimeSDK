#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::CrowdPhysics
{
	inline static constexpr unsigned int DitherState_EDitherState_TypeDefinitionIndex = 60841;

	enum class DitherState_EDitherState : ::System::Int32
	{
		FadeIn = 1,
		None = 0,
		FadeOut = 2,
	};
}
