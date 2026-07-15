#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int EProbeRenderMode_TypeDefinitionIndex = 36306;

	enum class EProbeRenderMode : ::System::Int32
	{
		ProbePreBlend = 0,
		None = 1,
		DeferProbeBlend = 2,
	};
}
