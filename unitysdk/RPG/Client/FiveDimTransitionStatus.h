#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimTransitionStatus_TypeDefinitionIndex = 64280;

	enum class FiveDimTransitionStatus : ::System::Int32
	{
		None = 0,
		Opening = 1,
		FadeIn = 2,
		AfterFadeIn = 3,
		Closing = 4,
	};
}
