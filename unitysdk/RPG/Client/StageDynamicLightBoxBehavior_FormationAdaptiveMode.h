#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int StageDynamicLightBoxBehavior_FormationAdaptiveMode_TypeDefinitionIndex = 67753;

	enum class StageDynamicLightBoxBehavior_FormationAdaptiveMode : ::System::Int32
	{
		None = 0,
		Head = 1,
		Tril = 2,
		Center = 3,
		Uniform = 4,
	};
}
