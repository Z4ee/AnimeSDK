#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillPropertyType_TypeDefinitionIndex = 16952;

	enum class RtSkillPropertyType : ::System::Int32
	{
		None = 0,
		CDBase = 1,
		CDAddRatio = 2,
		CDDelta = 3,
		CD = 4,
		CastDistance = 5,
		CDLeft = 6,
		Count = 7,
	};
}
