#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimStateLogicType_TypeDefinitionIndex = 15643;

	enum class AnimStateLogicType : ::System::Int32
	{
		Unknow = 0,
		Idle = 1,
		SkillReady = 2,
		SkillUse = 3,
		OnHit = 4,
		Die = 5,
		Limbo = 7,
		Revive = 8,
	};
}
