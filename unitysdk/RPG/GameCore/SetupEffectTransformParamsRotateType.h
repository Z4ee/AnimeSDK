#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupEffectTransformParamsRotateType_TypeDefinitionIndex = 24333;

	enum class SetupEffectTransformParamsRotateType : ::System::Int32
	{
		RotateAroundAxis = 0,
		Wobbly = 1,
		Swing = 2,
	};
}
