#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITimerCounter_RollConfig_TypeDefinitionIndex = 48186;

	struct alignas(8) MonoUITimerCounter_RollConfig
	{
		::UnityEngine::AnimationCurve* rollCurve; // 0x10
	};
}
