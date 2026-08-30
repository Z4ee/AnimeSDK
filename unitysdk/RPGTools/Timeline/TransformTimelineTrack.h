#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE8F77B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TransformTimelineTrack_TypeDefinitionIndex = 48978;

	class TransformTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
