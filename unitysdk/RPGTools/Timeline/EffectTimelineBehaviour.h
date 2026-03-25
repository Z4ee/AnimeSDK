#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB4B200)
#define RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB4B180)
#define RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAB4B540)
#define RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB4B280)
#define RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB4B590)
#define RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB4B5B0)
#define RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB4B5A0)
#define RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAB4B5D0)
#define RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB4B5C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EffectTimelineBehaviour_TypeDefinitionIndex = 39235;

	class EffectTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* EffectName; // 0x10
		::System::String* AttachPoint; // 0x18
		::System::Boolean _firstFrameHappened; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
		}
	};
}
