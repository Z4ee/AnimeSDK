#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class CharacterDitherClip; }

#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xCFECD80)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFECDA0)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xCFECD90)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCFECFF0)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFED000)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterDitherBehaviour_TypeDefinitionIndex = 45248;

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

		::System::Void set_Clip(::RPGTools::Timeline::CharacterDitherClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterDitherClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
