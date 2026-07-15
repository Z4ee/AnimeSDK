#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillSubTargetType_TypeDefinitionIndex = 17476;

	enum class SkillSubTargetType : ::System::Int32
	{
		Unknow = 0,
		TargetAllTeammate = 1,
		TargetAdjoinEntity = 2,
		TargetServantOrSummoner = 3,
	};
}
