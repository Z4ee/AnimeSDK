#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class FloorCustomBoolClip; }

#define RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE85CB80)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE85CBA0)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE85CB90)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE85CE10)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FloorCustomBoolBehaviour_TypeDefinitionIndex = 48585;

	class FloorCustomBoolBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::FloorCustomBoolClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::FloorCustomBoolClip* get_Clip()
		{
			return ((::RPGTools::Timeline::FloorCustomBoolClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::FloorCustomBoolClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::FloorCustomBoolClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
