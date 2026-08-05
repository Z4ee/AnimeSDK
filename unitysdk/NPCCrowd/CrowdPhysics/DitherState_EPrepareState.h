#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::CrowdPhysics
{
	inline static constexpr unsigned int DitherState_EPrepareState_TypeDefinitionIndex = 60842;

	enum class DitherState_EPrepareState : ::System::Int32
	{
		PrepareFadeIn = 1,
		None = 0,
		PrepareFadeOut = 2,
	};
}
