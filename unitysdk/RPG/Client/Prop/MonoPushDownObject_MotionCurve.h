#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int MonoPushDownObject_MotionCurve_TypeDefinitionIndex = 73206;

	struct alignas(8) MonoPushDownObject_MotionCurve
	{
		::UnityEngine::AnimationCurve* curve; // 0x10
		::System::Single duration; // 0x18
		::System::Single value; // 0x1C
	};
}
