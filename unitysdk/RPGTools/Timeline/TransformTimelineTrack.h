#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD064FD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TransformTimelineTrack_TypeDefinitionIndex = 45793;

	class TransformTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
