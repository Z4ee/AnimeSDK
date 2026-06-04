#pragma once
#include "unitysdk/unitysdk.h"

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticle_AutoScalingMode_TypeDefinitionIndex = 41533;

	enum class UIParticle_AutoScalingMode : ::System::Int32
	{
		None = 0,
		UIParticle = 1,
		Transform = 2,
	};
}
