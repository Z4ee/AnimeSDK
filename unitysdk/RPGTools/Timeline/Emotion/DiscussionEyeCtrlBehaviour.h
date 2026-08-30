#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class EmoEyeCtrl; }
namespace RPGTools::Timeline { class EmoEyeCtrlOffsetData; }
namespace RPGTools::Timeline::Emotion { class DiscussionEyeCtrlClip; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B579370)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_METHOD_2_5329A39CC7215E7B_OFFSET UNITYSDK_OFFSET(0x1B5797E0)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x1B5798D0)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B579BF0)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B579390)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B579AD0)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B579380)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B579C90)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int DiscussionEyeCtrlBehaviour_TypeDefinitionIndex = 49177;

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

		::System::Void set_Clip(::RPGTools::Timeline::Emotion::DiscussionEyeCtrlClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emotion::DiscussionEyeCtrlClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
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
	};
}
