#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xAB5DB60)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB5DC80)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB5DB80)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB5DD30)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xAB5DB70)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB5DDC0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB5DDE0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB5DDD0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB5DDF0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoDiscussionMouthBehaviour_TypeDefinitionIndex = 39538;

	class EmoDiscussionMouthBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x10
		::System::String* _CharacterUniqueName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONMOUTHBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
