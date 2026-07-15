#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_SteerTargetType_TypeDefinitionIndex = 23607;

	enum class ST_SteerTargetType : ::System::Int32
	{
		AITarget = 0,
		LocalPlayer = 1,
	};
}
