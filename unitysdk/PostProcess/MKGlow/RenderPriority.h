#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int RenderPriority_TypeDefinitionIndex = 29641;

	enum class RenderPriority : ::System::Int32
	{
		Quality = 0,
		Balanced = 1,
		Performance = 2,
	};
}
