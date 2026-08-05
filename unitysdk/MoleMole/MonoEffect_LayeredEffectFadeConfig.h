#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOEFFECT_LAYEREDEFFECTFADECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DCEED0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffect_LayeredEffectFadeConfig_TypeDefinitionIndex = 50328;

	class MonoEffect_LayeredEffectFadeConfig : public ::System::Object
	{
	public:
		::System::Single FadeInTime; // 0x10
		::UnityEngine::AnimationCurve* FadeInCurve; // 0x18
		::System::Single FadeOutTime; // 0x20
		::UnityEngine::AnimationCurve* FadeOutCurve; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_LAYEREDEFFECTFADECONFIG__CTOR_OFFSET))(this);
		}
	};
}
