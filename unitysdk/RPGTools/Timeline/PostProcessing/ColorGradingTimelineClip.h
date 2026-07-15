#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip_1.h"

namespace RPGTools::Timeline::PostProcessing { class ColorGradingTimelineBehaviour; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1999C0E0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ColorGradingTimelineClip_TypeDefinitionIndex = 46767;

	class ColorGradingTimelineClip : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip_1<::RPGTools::Timeline::PostProcessing::ColorGradingTimelineBehaviour*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINECLIP__CTOR_OFFSET))(this);
		}
	};
}
