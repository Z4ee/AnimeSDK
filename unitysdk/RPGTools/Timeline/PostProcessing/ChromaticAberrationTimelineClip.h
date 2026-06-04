#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip_1.h"

namespace RPGTools::Timeline::PostProcessing { class ChromaticAberrationTimelineBehaviour; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD03D990)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ChromaticAberrationTimelineClip_TypeDefinitionIndex = 45824;

	class ChromaticAberrationTimelineClip : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip_1<::RPGTools::Timeline::PostProcessing::ChromaticAberrationTimelineBehaviour*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINECLIP__CTOR_OFFSET))(this);
		}
	};
}
