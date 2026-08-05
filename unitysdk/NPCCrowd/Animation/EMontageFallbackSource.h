#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int EMontageFallbackSource_TypeDefinitionIndex = 42575;

	enum class EMontageFallbackSource : ::System::Int32
	{
		TraitAction = 20,
		ExplicitRuntime = 40,
		TraitMontage = 30,
		DefaultState = 10,
	};
}
