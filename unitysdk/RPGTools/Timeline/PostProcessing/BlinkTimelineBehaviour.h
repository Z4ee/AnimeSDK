#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BlinkParameter.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FA450)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BlinkTimelineBehaviour_TypeDefinitionIndex = 45254;

	class BlinkTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::PostProcessing::BlinkParameter BlinkParameter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
