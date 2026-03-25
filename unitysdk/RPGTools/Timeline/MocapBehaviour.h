#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class MocapClip; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB78150)
#define RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB78320)
#define RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB78170)
#define RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB783A0)
#define RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB78160)
#define RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB78430)
#define RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB78450)
#define RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB78440)
#define RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB78460)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MocapBehaviour_TypeDefinitionIndex = 39029;

	class MocapBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::MocapClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::MocapClip* get_Clip()
		{
			return ((::RPGTools::Timeline::MocapClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::MocapClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::MocapClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
