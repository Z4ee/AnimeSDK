#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetingMode_TypeDefinitionIndex = 54893;

	enum class TargetingMode : ::System::Int32
	{
		MonsterTargetPlayer = 0,
		MonsterTempter = 1,
	};
}
