#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterTrack.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1B0B8500)
#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B85B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PropSetSceneTVMenuTrack_TypeDefinitionIndex = 48714;

	class PropSetSceneTVMenuTrack : public ::RPGTools::Timeline::CharacterTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUTRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
