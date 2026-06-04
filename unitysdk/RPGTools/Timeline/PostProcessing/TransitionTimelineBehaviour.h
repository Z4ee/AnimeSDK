#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/TransitionParameter.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD047E70)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int TransitionTimelineBehaviour_TypeDefinitionIndex = 45894;

	class TransitionTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::PostProcessing::TransitionParameter TransitionParameter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
