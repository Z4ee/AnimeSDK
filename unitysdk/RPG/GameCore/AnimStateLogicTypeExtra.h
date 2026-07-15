#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimStateLogicTypeExtra_TypeDefinitionIndex = 53413;

	enum class AnimStateLogicTypeExtra : ::System::Int32
	{
		Unknow = 0,
		BreakExtendOccur = 1,
		FakeHitMotionRecover = 2,
		FakeBreakRecover = 3,
		HitMotionRecover = 4,
		HitFly = 5,
		SkillFinishRecover = 6,
		OnBeingHitBack = 7,
	};
}
