#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip_1.h"

namespace RPGTools::Timeline::PostProcessing { class BloomAnimateTimelineBehaviour; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATETIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD03D2C0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BloomAnimateTimelineClip_TypeDefinitionIndex = 45817;

	class BloomAnimateTimelineClip : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip_1<::RPGTools::Timeline::PostProcessing::BloomAnimateTimelineBehaviour*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATETIMELINECLIP__CTOR_OFFSET))(this);
		}
	};
}
