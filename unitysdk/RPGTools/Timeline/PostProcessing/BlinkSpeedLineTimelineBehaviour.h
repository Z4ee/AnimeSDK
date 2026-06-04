#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BlinkSpeedLineParameter.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD03AD50)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BlinkSpeedLineTimelineBehaviour_TypeDefinitionIndex = 45806;

	class BlinkSpeedLineTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::PostProcessing::BlinkSpeedLineParameter BlinkSpeedLineParameter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
