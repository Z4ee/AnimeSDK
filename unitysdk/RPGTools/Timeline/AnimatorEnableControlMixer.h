#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/OverrideTransformMixer.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLMIXER_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB1F150)
#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB1EEB0)
#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xAB1F1F0)
#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLMIXER___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB1F250)
#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB1F200)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorEnableControlMixer_TypeDefinitionIndex = 39039;

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

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLMIXER___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
