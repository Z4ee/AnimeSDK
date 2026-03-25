#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip_1.h"

namespace RPGTools::Timeline::PostProcessing { class MotionBlurTimelineBehaviour; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_MOTIONBLURTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB8D4A0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int MotionBlurTimelineClip_TypeDefinitionIndex = 39389;

	class MotionBlurTimelineClip : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip_1<::RPGTools::Timeline::PostProcessing::MotionBlurTimelineBehaviour*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_MOTIONBLURTIMELINECLIP__CTOR_OFFSET))(this);
		}
	};
}
