#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class EnableStandByBreakClip; }

#define RPGTOOLS_TIMELINE_ENABLESTANDBYBREAKBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B582040)
#define RPGTOOLS_TIMELINE_ENABLESTANDBYBREAKBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B582060)
#define RPGTOOLS_TIMELINE_ENABLESTANDBYBREAKBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B582050)
#define RPGTOOLS_TIMELINE_ENABLESTANDBYBREAKBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B582190)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EnableStandByBreakBehaviour_TypeDefinitionIndex = 48563;

	class EnableStandByBreakBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::EnableStandByBreakClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENABLESTANDBYBREAKBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::EnableStandByBreakClip* get_Clip()
		{
			return ((::RPGTools::Timeline::EnableStandByBreakClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENABLESTANDBYBREAKBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::EnableStandByBreakClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EnableStandByBreakClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENABLESTANDBYBREAKBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENABLESTANDBYBREAKBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
