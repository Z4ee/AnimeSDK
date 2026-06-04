#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleMoveStopType_TypeDefinitionIndex = 23442;

	enum class RtBattleMoveStopType : ::System::Int32
	{
		FixedDistance = 0,
		SkillCastDistance = 1,
	};
}
