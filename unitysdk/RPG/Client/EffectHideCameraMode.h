#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EffectHideCameraMode_TypeDefinitionIndex = 66896;

	enum class EffectHideCameraMode : ::System::Int32
	{
		None = 0,
		Perspective = 1,
		Orthographic = 2,
	};
}
