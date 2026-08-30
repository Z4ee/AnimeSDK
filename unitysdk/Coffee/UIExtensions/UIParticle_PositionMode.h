#pragma once
#include "unitysdk/unitysdk.h"

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticle_PositionMode_TypeDefinitionIndex = 43961;

	enum class UIParticle_PositionMode : ::System::Int32
	{
		Relative = 0,
		Absolute = 1,
	};
}
