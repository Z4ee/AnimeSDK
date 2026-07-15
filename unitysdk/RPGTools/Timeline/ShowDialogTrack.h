#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_SHOWDIALOGTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x199B50E0)
#define RPGTOOLS_TIMELINE_SHOWDIALOGTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x199B5150)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowDialogTrack_TypeDefinitionIndex = 46507;

	class ShowDialogTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWDIALOGTRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWDIALOGTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
