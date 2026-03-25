#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_Transform_RotateType_TypeDefinitionIndex = 57796;

	enum class Effect_Transform_RotateType : ::System::Int32
	{
		RotateAroundAxis = 0,
		Wobbly = 1,
		Swing = 2,
	};
}
