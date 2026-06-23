#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ProceduralAnimFixedParam_TypeDefinitionIndex = 50359;

	struct alignas(8) ProceduralAnimFixedParam
	{
		::System::Single FixedRotateSpeed; // 0x10
		::System::Boolean IsApplyCurveSpeed; // 0x14
		::UnityEngine::AnimationCurve* Curve; // 0x18
		::UnityEngine::AnimatorStateInfo StateInfo; // 0x20
		::System::Single NormalizedTime; // 0x48
		::System::Int32 LayerIndex; // 0x4C
	};
}
