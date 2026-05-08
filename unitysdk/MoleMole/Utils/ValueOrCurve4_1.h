#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/ValueOrCurveType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Utils
{
	inline static constexpr unsigned int ValueOrCurve4_1_TypeDefinitionIndex = 76714;

	template <typename T>
	class ValueOrCurve4_1 : public ::System::Object
	{
	public:
		::MoleMole::Utils::ValueOrCurveType valueType; // 0x0
		T value; // 0x0
		::UnityEngine::AnimationCurve* curveX; // 0x0
		::UnityEngine::AnimationCurve* curveY; // 0x0
		::UnityEngine::AnimationCurve* curveZ; // 0x0
		::UnityEngine::AnimationCurve* curveW; // 0x0
	};
}
