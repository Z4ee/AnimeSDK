#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class CharaEyeLight; }
namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1B353830)
#define RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B353850)
#define RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B3539A0)
#define RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1B353840)
#define RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B353AC0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharaEyeLightBehaviour_TypeDefinitionIndex = 46156;

	class CharaEyeLightBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Single EyeIntensity; // 0x10
		::System::String* _CharacterUniqueName_k__BackingField; // 0x18
		::RPG::Client::CharaEyeLight* _MonoEyeLight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
