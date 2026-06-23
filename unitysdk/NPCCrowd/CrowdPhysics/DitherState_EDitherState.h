#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::CrowdPhysics
{
	inline static constexpr unsigned int DitherState_EDitherState_TypeDefinitionIndex = 76659;

	enum class DitherState_EDitherState : ::System::Int32
	{
		FadeOut = 2,
		FadeIn = 1,
		None = 0,
	};
}
