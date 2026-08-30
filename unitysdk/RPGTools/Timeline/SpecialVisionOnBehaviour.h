#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class SpecialVisionOnClip; }

#define RPGTOOLS_TIMELINE_SPECIALVISIONONBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8E6700)
#define RPGTOOLS_TIMELINE_SPECIALVISIONONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8E6720)
#define RPGTOOLS_TIMELINE_SPECIALVISIONONBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8E6710)
#define RPGTOOLS_TIMELINE_SPECIALVISIONONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE8E68E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SpecialVisionOnBehaviour_TypeDefinitionIndex = 48773;

	class SpecialVisionOnBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::SpecialVisionOnClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SPECIALVISIONONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::SpecialVisionOnClip* get_Clip()
		{
			return ((::RPGTools::Timeline::SpecialVisionOnClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SPECIALVISIONONBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::SpecialVisionOnClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::SpecialVisionOnClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SPECIALVISIONONBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SPECIALVISIONONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
