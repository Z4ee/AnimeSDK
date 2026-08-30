#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_PhaseType.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateBehavior_PhaseConfig_TypeDefinitionIndex = 70881;

	struct alignas(8) LoopGenerateBehavior_PhaseConfig
	{
		::RPG::Client::LoopGenerateBehavior_PhaseType Type; // 0x10
		::System::Int32 ConfigIndexStart; // 0x14
		::System::Int32 ConfigIndexEnd; // 0x18
		::System::Single Duration; // 0x1C
		::UnityEngine::AnimationCurve* SpeedCurve; // 0x20
	};
}
