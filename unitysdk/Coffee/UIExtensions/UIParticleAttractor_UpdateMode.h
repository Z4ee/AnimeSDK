#pragma once
#include "unitysdk/unitysdk.h"

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleAttractor_UpdateMode_TypeDefinitionIndex = 42355;

	enum class UIParticleAttractor_UpdateMode : ::System::Int32
	{
		Normal = 0,
		UnscaledTime = 1,
	};
}
