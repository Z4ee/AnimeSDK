#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class EmoBlendShapesConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_GET_BLENDSHAPESCONFIG_OFFSET UNITYSDK_OFFSET(0xD0135F0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xD0137C0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_GET__GETBLENDNAMES_OFFSET UNITYSDK_OFFSET(0xD013610)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD013960)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD0137E0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_SET_BLENDSHAPESCONFIG_OFFSET UNITYSDK_OFFSET(0xD013600)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xD0137D0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD0139E0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD013A00)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD0139F0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoDiscussionBlendShapeBehaviour_TypeDefinitionIndex = 46024;

	class EmoDiscussionBlendShapeBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::Client::EmoBlendShapesConfig* _BlendShapesConfig_k__BackingField; // 0x10
		::System::Boolean UseDefaultEmotion; // 0x18
		::System::String* EmotionName; // 0x20
		::System::String* _CharacterUniqueName_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPG::Client::EmoBlendShapesConfig* get_BlendShapesConfig()
		{
			return ((::RPG::Client::EmoBlendShapesConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_GET_BLENDSHAPESCONFIG_OFFSET))(this);
		}

		::System::Void set_BlendShapesConfig(::RPG::Client::EmoBlendShapesConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EmoBlendShapesConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_SET_BLENDSHAPESCONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get__GetBlendNames()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_GET__GETBLENDNAMES_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}
	};
}
