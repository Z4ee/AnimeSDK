#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int AntiFlickerMode_TypeDefinitionIndex = 29638;

	enum class AntiFlickerMode : ::System::Int32
	{
		Balanced = 0,
		Strong = 1,
	};
}
