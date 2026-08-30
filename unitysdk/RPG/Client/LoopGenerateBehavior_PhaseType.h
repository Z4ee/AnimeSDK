#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateBehavior_PhaseType_TypeDefinitionIndex = 70880;

	enum class LoopGenerateBehavior_PhaseType : ::System::Int32
	{
		Startup = 0,
		Loop = 1,
		Stop = 2,
	};
}
