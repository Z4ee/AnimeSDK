#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESceneUnitType_TypeDefinitionIndex = 15449;

	enum class ESceneUnitType : ::System::Int16
	{
		Npc = 0,
		Player = 1,
		Avatar = 2,
		Buddy = 3,
	};
}
