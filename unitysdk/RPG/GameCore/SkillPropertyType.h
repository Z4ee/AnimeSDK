#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillPropertyType_TypeDefinitionIndex = 10062;

	enum class SkillPropertyType : ::System::Int32
	{
		Unknown = 0,
		SPAdd = 1,
		SPBase = 2,
		SPNeed = 3,
		SPMultipleRatio = 4,
		BPNeed = 5,
		BPAdd = 6,
		DelayRatio = 7,
		SkillIndex = 8,
		Count = 9,
	};
}
