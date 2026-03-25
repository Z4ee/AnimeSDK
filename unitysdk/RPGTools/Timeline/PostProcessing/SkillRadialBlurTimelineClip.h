#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip_1.h"

namespace RPGTools::Timeline::PostProcessing { class SkillRadialBlurTimelineBehaviour; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_SKILLRADIALBLURTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB90DB0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int SkillRadialBlurTimelineClip_TypeDefinitionIndex = 39416;

	class SkillRadialBlurTimelineClip : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip_1<::RPGTools::Timeline::PostProcessing::SkillRadialBlurTimelineBehaviour*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_SKILLRADIALBLURTIMELINECLIP__CTOR_OFFSET))(this);
		}
	};
}
