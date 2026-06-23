#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESceneUnitType_TypeDefinitionIndex = 9801;

	enum class ESceneUnitType : ::System::Int16
	{
		Avatar = 2,
		Buddy = 3,
		Player = 1,
		Npc = 0,
	};
}
