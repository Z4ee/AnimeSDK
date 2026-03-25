#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_CAMERASHAKETRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xAB31BF0)
#define RPGTOOLS_TIMELINE_CAMERASHAKETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xAB31CF0)
#define RPGTOOLS_TIMELINE_CAMERASHAKETRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xAB31DD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CameraShakeTrack_TypeDefinitionIndex = 38682;

	class CameraShakeTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKETRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKETRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnCreateClip(::UnityEngine::Timeline::TimelineClip* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKETRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET))(this, P0);
		}
	};
}
