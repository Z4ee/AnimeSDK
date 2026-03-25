#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class AnimatorControlTimelineClip_BoolEntry; }
namespace RPGTools::Timeline { class AnimatorControlTimelineClip_FloatEntry; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xAB1E2F0)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB1E520)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAB1E4D0)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB1E1A0)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB1E5A0)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB1E5D0)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAB1E5C0)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB1E5B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorControlTimelineBehaviour_TypeDefinitionIndex = 38670;

	class AnimatorControlTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean UseFloatParam; // 0x10
		::Il2CppArray<::RPGTools::Timeline::AnimatorControlTimelineClip_FloatEntry*>* FloatParams; // 0x18
		::System::Boolean UseBoolParam; // 0x20
		::Il2CppArray<::RPGTools::Timeline::AnimatorControlTimelineClip_BoolEntry*>* BoolParams; // 0x28
		::System::Boolean UseTriggerParam; // 0x30
		::System::String* TriggerParam; // 0x38
		::System::String* ToState; // 0x40
		::UnityEngine::Animator* _animator; // 0x48
		::System::Boolean _firstFrameHappened; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
