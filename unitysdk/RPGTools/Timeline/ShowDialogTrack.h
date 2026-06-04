#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_SHOWDIALOGTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xD0542E0)
#define RPGTOOLS_TIMELINE_SHOWDIALOGTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD054350)
#define RPGTOOLS_TIMELINE_SHOWDIALOGTRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xD054430)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowDialogTrack_TypeDefinitionIndex = 45573;

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

		::System::Void __iFixBaseProxy_OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWDIALOGTRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
