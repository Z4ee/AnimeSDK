#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole
{
	inline static constexpr unsigned int CinemaDistanceRatioRotationStruct_TypeDefinitionIndex = 71559;

	struct alignas(8) CinemaDistanceRatioRotationStruct
	{
		::UnityEngine::AnimationCurve* rotationYCurve; // 0x10
	};
}
