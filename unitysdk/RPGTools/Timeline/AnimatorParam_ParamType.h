#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorParam_ParamType_TypeDefinitionIndex = 46348;

	enum class AnimatorParam_ParamType : ::System::Int32
	{
		Float = 0,
		Int = 1,
		Bool = 2,
		Trigger = 3,
	};
}
