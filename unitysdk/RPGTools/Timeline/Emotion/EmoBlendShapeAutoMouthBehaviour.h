#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace RPGTools::Timeline::Emotion { class EmoBlendShapeAutoMouthConfig; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB58E10)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB58B50)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAB58F20)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB58F70)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB59090)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB590B0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB590A0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAB590C0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB590D0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoBlendShapeAutoMouthBehaviour_TypeDefinitionIndex = 39509;

	class EmoBlendShapeAutoMouthBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Double Start; // 0x10
		::System::Double End; // 0x18
		::RPG::Client::MonoEmoBlendShapesController* Controller; // 0x20
		::RPGTools::Timeline::Emotion::EmoBlendShapeAutoMouthConfig* config; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
