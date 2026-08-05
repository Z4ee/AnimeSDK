#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int BlendModeType_TypeDefinitionIndex = 76008;

	enum class BlendModeType : ::System::Int32
	{
		Absolue = 0,
		Alpha = 1,
	};
}
