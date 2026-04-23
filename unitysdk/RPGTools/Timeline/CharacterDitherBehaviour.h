#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class CharacterDitherClip; }

#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8A9490)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8A94B0)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8A94A0)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8A9700)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8A9710)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterDitherBehaviour_TypeDefinitionIndex = 44701;

	class CharacterDitherBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterDitherClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::CharacterDitherClip* get_Clip()
		{
			return ((::RPGTools::Timeline::CharacterDitherClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::CharacterDitherClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterDitherClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
