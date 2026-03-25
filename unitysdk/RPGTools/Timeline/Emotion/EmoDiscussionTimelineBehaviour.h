#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINEBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xAB5E4C0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB5E640)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB5E4E0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINEBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xAB5E4D0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB5E6C0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB5E6E0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB5E6D0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoDiscussionTimelineBehaviour_TypeDefinitionIndex = 39542;

	class EmoDiscussionTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean UseDefaultEmotion; // 0x10
		::System::String* TalkEmotionName; // 0x18
		::System::String* _CharacterUniqueName_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINEBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINEBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
