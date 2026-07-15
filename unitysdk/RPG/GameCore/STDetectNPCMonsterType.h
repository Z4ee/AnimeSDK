#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int STDetectNPCMonsterType_TypeDefinitionIndex = 23614;

	enum class STDetectNPCMonsterType : ::System::Int32
	{
		None = 0,
		CurrentPlayerLockTarget = 1,
		CurrentPlayerNearest = 2,
		OwnerNearest = 3,
	};
}
