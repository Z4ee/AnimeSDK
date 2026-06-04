#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip_1.h"

namespace RPGTools::Timeline::PostProcessing { class BloomTimelineBehaviour; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD03D620)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BloomTimelineClip_TypeDefinitionIndex = 45820;

	class BloomTimelineClip : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip_1<::RPGTools::Timeline::PostProcessing::BloomTimelineBehaviour*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMTIMELINECLIP__CTOR_OFFSET))(this);
		}
	};
}
