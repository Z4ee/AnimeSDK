#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AnimStatic_TagGroup_TypeDefinitionIndex = 86263;

	enum class AnimStatic_TagGroup : ::System::Int32
	{
		Movement = 5,
		Stable = 4,
		MuteSkill = 1,
		AttackOrSkill = 3,
		MuteSteer = 2,
		MuteMove = 0,
	};
}
