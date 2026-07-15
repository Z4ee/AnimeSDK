#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B340B70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorControlTimelineTrack_TypeDefinitionIndex = 46038;

	class AnimatorControlTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
