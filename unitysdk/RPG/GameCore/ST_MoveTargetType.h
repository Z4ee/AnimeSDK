#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_MoveTargetType_TypeDefinitionIndex = 23605;

	enum class ST_MoveTargetType : ::System::Int32
	{
		LocalPlayer = 0,
		LocalTarget = 1,
		AwardTarget = 2,
		NotifyTarget = 3,
		Instigator = 4,
		DetectedNPCMonster = 5,
	};
}
