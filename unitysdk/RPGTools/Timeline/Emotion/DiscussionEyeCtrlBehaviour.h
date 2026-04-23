#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class EmoEyeCtrl; }
namespace RPGTools::Timeline { class EmoEyeCtrlOffsetData; }
namespace RPGTools::Timeline::Emotion { class DiscussionEyeCtrlClip; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8CBA30)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_METHOD_2_5329A39CC7215E7B_OFFSET UNITYSDK_OFFSET(0xB8CBEA0)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xB8CBFA0)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8CC2C0)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8CBA50)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8CC1A0)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8CBA40)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8CC360)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8CC390)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8CC370)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8CC380)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int DiscussionEyeCtrlBehaviour_TypeDefinitionIndex = 45409;

	class DiscussionEyeCtrlBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::Emotion::DiscussionEyeCtrlClip* _Clip_k__BackingField; // 0x10
		::RPG::Client::EmoEyeCtrl* _EyeCtrl; // 0x18
		::RPGTools::Timeline::EmoEyeCtrlOffsetData* _TmpOffsetData; // 0x20
		::RPGTools::Timeline::EmoEyeCtrlOffsetData* _ClipOffsetData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Emotion::DiscussionEyeCtrlClip* get_Clip()
		{
			return ((::RPGTools::Timeline::Emotion::DiscussionEyeCtrlClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::Emotion::DiscussionEyeCtrlClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emotion::DiscussionEyeCtrlClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::EmoEyeCtrl* Method_2_5329A39CC7215E7B()
		{
			return ((::RPG::Client::EmoEyeCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_METHOD_2_5329A39CC7215E7B_OFFSET))(this);
		}

		::System::Void Method_2_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_METHOD_2_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
