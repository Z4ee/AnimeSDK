#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip_1.h"

namespace RPGTools::Timeline::PostProcessing { class GaussianBlurTimelineBehaviour; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_GAUSSIANBLURTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB900BF0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int GaussianBlurTimelineClip_TypeDefinitionIndex = 45286;

	class GaussianBlurTimelineClip : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip_1<::RPGTools::Timeline::PostProcessing::GaussianBlurTimelineBehaviour*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_GAUSSIANBLURTIMELINECLIP__CTOR_OFFSET))(this);
		}
	};
}
