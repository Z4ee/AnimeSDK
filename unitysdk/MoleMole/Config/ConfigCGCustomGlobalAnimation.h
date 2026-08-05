#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCGCustomGlobalAnimation_TypeDefinitionIndex = 53165;

	struct alignas(8) ConfigCGCustomGlobalAnimation
	{
		::System::Single OpenDuration; // 0x10
		::UnityEngine::AnimationCurve* OpenCurve; // 0x18
		::System::Single CloseDuration; // 0x20
		::UnityEngine::AnimationCurve* CloseCurve; // 0x28
	};
}
