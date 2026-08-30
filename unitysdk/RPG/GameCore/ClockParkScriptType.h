#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkScriptType_TypeDefinitionIndex = 11139;

	enum class ClockParkScriptType : ::System::Int32
	{
		Normal = 1,
		Endless = 2,
	};
}
