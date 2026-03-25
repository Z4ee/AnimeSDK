#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIWeaknessCompare_TypeDefinitionIndex = 14279;

	enum class ComplexSkillAIWeaknessCompare : ::System::Int32
	{
		ActorCounterTarget = 0,
		TargetCounterActor = 1,
	};
}
