#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int STDetectNPCMonsterType_TypeDefinitionIndex = 19064;

	enum class STDetectNPCMonsterType : ::System::Int32
	{
		None = 0,
		CurrentPlayerLockTarget = 1,
		CurrentPlayerNearest = 2,
		OwnerNearest = 3,
	};
}
