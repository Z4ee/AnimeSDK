#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole
{
	inline static constexpr unsigned int CinemaSinglePushPullParamsStruct_TypeDefinitionIndex = 69010;

	struct alignas(8) CinemaSinglePushPullParamsStruct
	{
		::UnityEngine::AnimationCurve* positionMoveCurve; // 0x10
		::UnityEngine::AnimationCurve* fovChangeCurve; // 0x18
	};
}
