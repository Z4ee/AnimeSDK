#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int RenderPriority_TypeDefinitionIndex = 27566;

	enum class RenderPriority : ::System::Int32
	{
		Balanced = 1,
		Quality = 0,
		Performance = 2,
	};
}
