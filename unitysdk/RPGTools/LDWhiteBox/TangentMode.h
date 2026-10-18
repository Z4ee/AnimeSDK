#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int TangentMode_TypeDefinitionIndex = 48953;

	enum class TangentMode : ::System::Int32
	{
		Auto = 0,
		Mirrored = 1,
		Free = 2,
	};
}
