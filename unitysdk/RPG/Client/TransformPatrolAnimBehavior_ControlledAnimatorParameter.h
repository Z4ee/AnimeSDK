#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TransformPatrolAnimBehavior_ControlledAnimatorParameter_TypeDefinitionIndex = 67186;

	enum class TransformPatrolAnimBehavior_ControlledAnimatorParameter : ::System::Int32
	{
		None = 0,
		CurrentPatrolPoint = 1,
		SpeedRatio = 2,
		Stay = 4,
	};
}
