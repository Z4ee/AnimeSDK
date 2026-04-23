#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip_1.h"

namespace RPGTools::Timeline::PostProcessing { class LensDistortionTimelineBehaviour; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB901300)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int LensDistortionTimelineClip_TypeDefinitionIndex = 45290;

	class LensDistortionTimelineClip : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip_1<::RPGTools::Timeline::PostProcessing::LensDistortionTimelineBehaviour*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINECLIP__CTOR_OFFSET))(this);
		}
	};
}
