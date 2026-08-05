#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LoopStyle.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITimerCounter_RandomConfig_TypeDefinitionIndex = 79332;

	struct alignas(8) MonoUITimerCounter_RandomConfig
	{
		::System::Single randomInterval; // 0x10
		::UnityEngine::AnimationCurve* randomIntervalCurve; // 0x18
		::System::Int32 min; // 0x20
		::System::Int32 max; // 0x24
		::MoleMole::LoopStyle randomLoopStyle; // 0x28
	};
}
