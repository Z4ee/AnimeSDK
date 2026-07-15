#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int InControlUpdateMode_TypeDefinitionIndex = 38658;

	enum class InControlUpdateMode : ::System::Int32
	{
		Default = 0,
		FixedUpdate = 1,
		Manual = 2,
	};
}
