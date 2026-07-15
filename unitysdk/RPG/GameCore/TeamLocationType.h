#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamLocationType_TypeDefinitionIndex = 17480;

	enum class TeamLocationType : ::System::Int32
	{
		Unknow = 0,
		Last = 1,
		First = 2,
		BeforeCaster = 3,
		AfterCaster = 4,
		AroundCaster = 5,
		AroundCasterOnEdge = 6,
		Middle = 7,
		LastDie = 8,
		FormationRecord = 9,
		KeepOnLast = 10,
		KeepOnFirst = 11,
		KeepOnEdge = 13,
	};
}
