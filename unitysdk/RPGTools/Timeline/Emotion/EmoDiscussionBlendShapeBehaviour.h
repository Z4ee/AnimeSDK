#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class EmoBlendShapesConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_GET_BLENDSHAPESCONFIG_OFFSET UNITYSDK_OFFSET(0xAB5CA40)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xAB5CBE0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_GET__GETBLENDNAMES_OFFSET UNITYSDK_OFFSET(0xAB5CA60)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB5CD80)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB5CC00)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_SET_BLENDSHAPESCONFIG_OFFSET UNITYSDK_OFFSET(0xAB5CA50)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xAB5CBF0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB5CE00)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB5CE20)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB5CE10)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoDiscussionBlendShapeBehaviour_TypeDefinitionIndex = 39532;

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

		::System::Void set_BlendShapesConfig(::RPG::Client::EmoBlendShapesConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EmoBlendShapesConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_SET_BLENDSHAPESCONFIG_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::String*>* get__GetBlendNames()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_GET__GETBLENDNAMES_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
