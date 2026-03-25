#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharaEyeAutoBlinkClip_BlinkType.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class CharaEyeAutoBlink; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xAB32BC0)
#define RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR_GET_EYEBLINKTYPE_OFFSET UNITYSDK_OFFSET(0xAB32BE0)
#define RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB32DA0)
#define RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB32C00)
#define RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xAB32BD0)
#define RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR_SET_EYEBLINKTYPE_OFFSET UNITYSDK_OFFSET(0xAB32BF0)
#define RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB32E40)
#define RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB32E60)
#define RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB32E50)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharaEyeAutoBlinkBehaviour_TypeDefinitionIndex = 38784;

	class CharaEyeAutoBlinkBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* _CharacterUniqueName_k__BackingField; // 0x10
		::RPGTools::Timeline::CharaEyeAutoBlinkClip_BlinkType _EyeBlinkType_k__BackingField; // 0x18
		::RPG::Client::CharaEyeAutoBlink* _MonoAutoBlink; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET))(this, value);
		}

		::RPGTools::Timeline::CharaEyeAutoBlinkClip_BlinkType get_EyeBlinkType()
		{
			return ((::RPGTools::Timeline::CharaEyeAutoBlinkClip_BlinkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR_GET_EYEBLINKTYPE_OFFSET))(this);
		}

		::System::Void set_EyeBlinkType(::RPGTools::Timeline::CharaEyeAutoBlinkClip_BlinkType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharaEyeAutoBlinkClip_BlinkType))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR_SET_EYEBLINKTYPE_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
