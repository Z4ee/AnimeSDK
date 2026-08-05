#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/ValueOrCurveType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Utils
{
	inline static constexpr unsigned int ValueOrCurve2_1_TypeDefinitionIndex = 60419;

	template <typename T>
	class ValueOrCurve2_1 : public ::System::Object
	{
	public:
		::MoleMole::Utils::ValueOrCurveType valueType; // 0x0
		T value; // 0x0
		::UnityEngine::AnimationCurve* curveX; // 0x0
		::UnityEngine::AnimationCurve* curveY; // 0x0
	};
}
