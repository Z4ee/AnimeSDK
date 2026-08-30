#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/OverrideTransformMixer.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLMIXER_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE810C60)
#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8109C0)
#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xE810D00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorEnableControlMixer_TypeDefinitionIndex = 48659;

	class AnimatorEnableControlMixer : public ::RPGTools::Timeline::OverrideTransformMixer
	{
	public:
		::UnityEngine::Animator* _Animator; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLMIXER__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLMIXER_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}
	};
}
