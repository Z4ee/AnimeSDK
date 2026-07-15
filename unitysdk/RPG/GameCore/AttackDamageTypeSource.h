#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttackDamageTypeSource_TypeDefinitionIndex = 23815;

	enum class AttackDamageTypeSource : ::System::Int32
	{
		Specify = 0,
		DamageData = 1,
		ReadTargetType = 2,
		Random = 3,
		ReadTargetGather = 4,
	};
}
