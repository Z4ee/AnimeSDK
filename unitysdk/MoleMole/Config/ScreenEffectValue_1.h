#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectValue_1_TypeDefinitionIndex = 56192;

	template <typename T>
	class ScreenEffectValue_1 : public ::System::Object
	{
	public:
		::System::Boolean EnableFade; // 0x0
		::System::Boolean EnableOverrideDefaultValue; // 0x0
		T OverrideDefaultValue; // 0x0
		::System::Boolean UseCurve; // 0x0
		T FixedValue; // 0x0
		::UnityEngine::AnimationCurve* Curve; // 0x0
	};
}
