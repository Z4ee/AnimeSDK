#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_SAMPLEANIMATIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE8DDE30)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SampleAnimationTrack_TypeDefinitionIndex = 48318;

	class SampleAnimationTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SAMPLEANIMATIONTRACK__CTOR_OFFSET))(this);
		}
	};
}
