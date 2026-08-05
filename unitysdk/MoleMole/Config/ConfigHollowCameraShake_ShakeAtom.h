#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraShake_ShakeAtom_TypeDefinitionIndex = 43562;

	struct alignas(8) ConfigHollowCameraShake_ShakeAtom
	{
		::UnityEngine::AnimationCurve* ShakeCurve; // 0x10
		::UnityEngine::AnimationCurve* DecayCurve; // 0x18
		::System::Single LoopOnceDuration; // 0x20
		::System::Single Duration; // 0x24
		::UnityEngine::Vector2 FactorRange; // 0x28
	};
}
