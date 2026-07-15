#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonoEffectFlag_TypeDefinitionIndex = 17565;

	enum class MonoEffectFlag : ::System::Int32
	{
		Unknow = 0,
		Resident = 1,
		Resident_MaterialEffectTarget = 2,
		Buff = 3,
		Debuff = 4,
		Field = 5,
		Hit = 6,
		AdvStage = 7,
		SphereField = 8,
		RemoveOnNextTimeline = 9,
		HideInTimeline = 10,
	};
}
