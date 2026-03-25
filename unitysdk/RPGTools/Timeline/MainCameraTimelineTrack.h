#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xAB77A20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MainCameraTimelineTrack_TypeDefinitionIndex = 39263;

	class MainCameraTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
