#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_TIMESCALEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x19F53AE0)
#define RPGTOOLS_TIMELINE_TIMESCALEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19F53C80)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TimeScaleBehaviour_TypeDefinitionIndex = 46723;

	class TimeScaleBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Single timeScale; // 0x10
		::System::Single duration; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMESCALEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMESCALEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
