#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/IEvaluateCurve_1.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int EvaluateAnimationCurve_1_TypeDefinitionIndex = 45216;

	template <typename T>
	class EvaluateAnimationCurve_1 : public ::MoleMole::EffectSimulate::IEvaluateCurve_1<T>
	{
	public:
		// static const ::System::Single CURVE_ITEM_WIDTH; // 0x0
		::System::Single _1to2TanIn; // 0x0
		::System::Single _1to2TanOut; // 0x0
		::System::Single _1to2Val; // 0x0
		::System::Single _2to3TanIn; // 0x0
		::System::Single _2to3TanOut; // 0x0
		::System::Single _2to3Val; // 0x0
		::System::Single _keyCnt; // 0x0
	};
}
