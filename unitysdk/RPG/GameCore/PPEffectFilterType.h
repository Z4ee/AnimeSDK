#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PPEffectFilterType_TypeDefinitionIndex = 23953;

	enum class PPEffectFilterType : ::System::Int32
	{
		Stack = 0,
		RadialBlur = 1,
		ColorGrading = 2,
		Vignette = 3,
		ChromaticAberration = 4,
		GaussianBlur = 5,
		PPPattern = 6,
		Blink = 7,
	};
}
