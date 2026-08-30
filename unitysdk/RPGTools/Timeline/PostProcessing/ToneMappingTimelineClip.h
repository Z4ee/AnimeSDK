#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip_1.h"

namespace RPGTools::Timeline::PostProcessing { class ToneMappingTimelineBehaviour; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_TONEMAPPINGTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B43F0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ToneMappingTimelineClip_TypeDefinitionIndex = 49076;

	class ToneMappingTimelineClip : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip_1<::RPGTools::Timeline::PostProcessing::ToneMappingTimelineBehaviour*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TONEMAPPINGTIMELINECLIP__CTOR_OFFSET))(this);
		}
	};
}
