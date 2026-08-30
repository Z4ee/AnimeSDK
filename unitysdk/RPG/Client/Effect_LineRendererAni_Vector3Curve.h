#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_LineRendererAni_Vector3Curve_TypeDefinitionIndex = 70464;

	struct alignas(8) Effect_LineRendererAni_Vector3Curve
	{
		::UnityEngine::AnimationCurve* X; // 0x10
		::UnityEngine::AnimationCurve* Y; // 0x18
	};
}
