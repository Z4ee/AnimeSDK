#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleEffectType_TypeDefinitionIndex = 15475;

	enum class MarbleEffectType : ::System::Int32
	{
		Effect = 0,
		TimeSlow = 1,
		CameraShake = 2,
		RemoveEffect = 3,
	};
}
