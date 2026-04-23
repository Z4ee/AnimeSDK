#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_NOTIFYFADEOUTANIMATION_GET_FADEOUTDURATION_OFFSET UNITYSDK_OFFSET(0xABD7650)
#define RPG_CLIENT_NOTIFYFADEOUTANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xABD76B0)

namespace RPG::Client
{
	inline static constexpr unsigned int NotifyFadeOutAnimation_TypeDefinitionIndex = 66610;

	class NotifyFadeOutAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationClip* FadeOutAnimationClip; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYFADEOUTANIMATION__CTOR_OFFSET))(this);
		}

		::System::Single get_FadeOutDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYFADEOUTANIMATION_GET_FADEOUTDURATION_OFFSET))(this);
		}
	};
}
