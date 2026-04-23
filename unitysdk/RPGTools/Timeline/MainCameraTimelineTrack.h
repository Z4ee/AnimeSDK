#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB8EC280)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MainCameraTimelineTrack_TypeDefinitionIndex = 45172;

	class MainCameraTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
