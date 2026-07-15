#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForbidAdvCableReason_TypeDefinitionIndex = 54771;

	enum class ForbidAdvCableReason : ::System::Int32
	{
		Default = 1,
		Confine = 2,
		EraState = 4,
	};
}
