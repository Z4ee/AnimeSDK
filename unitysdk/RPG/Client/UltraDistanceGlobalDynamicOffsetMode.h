#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UltraDistanceGlobalDynamicOffsetMode_TypeDefinitionIndex = 66590;

	enum class UltraDistanceGlobalDynamicOffsetMode : ::System::Int32
	{
		None = 0,
		LerpFromStart = 1,
		RestrictByStart = 2,
	};
}
