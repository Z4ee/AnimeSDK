#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip_1.h"

namespace RPGTools::Timeline::PostProcessing { class PolaroidTimelineBehaviour; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_POLAROIDTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B0280)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int PolaroidTimelineClip_TypeDefinitionIndex = 49049;

	class PolaroidTimelineClip : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip_1<::RPGTools::Timeline::PostProcessing::PolaroidTimelineBehaviour*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_POLAROIDTIMELINECLIP__CTOR_OFFSET))(this);
		}
	};
}
