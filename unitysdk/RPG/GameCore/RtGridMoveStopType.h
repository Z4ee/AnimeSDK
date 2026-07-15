#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtGridMoveStopType_TypeDefinitionIndex = 23934;

	enum class RtGridMoveStopType : ::System::Int32
	{
		FixedDistance = 0,
		SkillCastDistance = 1,
	};
}
