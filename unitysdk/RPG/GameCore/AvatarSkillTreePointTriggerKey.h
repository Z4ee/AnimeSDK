#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillTreePointTriggerKey_TypeDefinitionIndex = 10052;

	enum class AvatarSkillTreePointTriggerKey : ::System::Int32
	{
		Undefine = 0,
		PointNormal = 1,
		PointBPSkill = 2,
		PointUltra = 3,
		PointPassive = 4,
		PointMaze = 5,
		PointB1 = 6,
		PointB2 = 7,
		PointB3 = 8,
		PointS1 = 9,
		PointS2 = 10,
		PointS3 = 11,
		PointS4 = 12,
		PointS5 = 13,
		PointS6 = 14,
		PointS7 = 15,
		PointS8 = 16,
		PointS9 = 17,
		PointS10 = 18,
		PointServant1 = 19,
		PointServant2 = 20,
		PointSpecial1 = 21,
		PointElation = 22,
	};
}
