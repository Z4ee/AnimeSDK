#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESceneUnitType_TypeDefinitionIndex = 11576;

	enum class ESceneUnitType : ::System::Int16
	{
		Avatar = 2,
		Player = 1,
		Buddy = 3,
		Npc = 0,
	};
}
