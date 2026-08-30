#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class FloorCustomFloatClip; }

#define RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B58BC00)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B58BC20)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B58BC10)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B58BF50)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FloorCustomFloatBehaviour_TypeDefinitionIndex = 48587;

	class FloorCustomFloatBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::FloorCustomFloatClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::FloorCustomFloatClip* get_Clip()
		{
			return ((::RPGTools::Timeline::FloorCustomFloatClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::FloorCustomFloatClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::FloorCustomFloatClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
