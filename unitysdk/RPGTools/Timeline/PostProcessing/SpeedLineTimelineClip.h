#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip_1.h"

namespace RPGTools::Timeline::PostProcessing { class SpeedLineTimelineBehaviour; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_SPEEDLINETIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE8D5860)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int SpeedLineTimelineClip_TypeDefinitionIndex = 49071;

	class SpeedLineTimelineClip : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip_1<::RPGTools::Timeline::PostProcessing::SpeedLineTimelineBehaviour*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_SPEEDLINETIMELINECLIP__CTOR_OFFSET))(this);
		}
	};
}
