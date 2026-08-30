#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip_1.h"

namespace RPGTools::Timeline::PostProcessing { class BloomAnimateTimelineBehaviour; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATETIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE8C7F00)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BloomAnimateTimelineClip_TypeDefinitionIndex = 49002;

	class BloomAnimateTimelineClip : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip_1<::RPGTools::Timeline::PostProcessing::BloomAnimateTimelineBehaviour*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATETIMELINECLIP__CTOR_OFFSET))(this);
		}
	};
}
