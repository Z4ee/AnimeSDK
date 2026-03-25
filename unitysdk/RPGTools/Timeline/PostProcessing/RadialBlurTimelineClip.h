#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip_1.h"

namespace RPGTools::Timeline::PostProcessing { class RadialBlurTimelineBehaviour; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB8F380)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int RadialBlurTimelineClip_TypeDefinitionIndex = 39404;

	class RadialBlurTimelineClip : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip_1<::RPGTools::Timeline::PostProcessing::RadialBlurTimelineBehaviour*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURTIMELINECLIP__CTOR_OFFSET))(this);
		}
	};
}
