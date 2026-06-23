#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::CrowdPhysics
{
	inline static constexpr unsigned int DitherState_EPrepareState_TypeDefinitionIndex = 76658;

	enum class DitherState_EPrepareState : ::System::Int32
	{
		PrepareFadeOut = 2,
		None = 0,
		PrepareFadeIn = 1,
	};
}
