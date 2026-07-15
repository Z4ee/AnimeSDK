#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AimTargetType_TypeDefinitionIndex = 23928;

	enum class AimTargetType : ::System::UInt16
	{
		MainTarget = 0x1,
		SubTarget = 0x2,
		All = 0x3,
	};
}
