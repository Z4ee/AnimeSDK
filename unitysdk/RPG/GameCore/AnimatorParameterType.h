#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorParameterType_TypeDefinitionIndex = 15646;

	enum class AnimatorParameterType : ::System::Int32
	{
		Float = 0,
		Int = 1,
		Bool = 2,
		Trigger = 3,
	};
}
