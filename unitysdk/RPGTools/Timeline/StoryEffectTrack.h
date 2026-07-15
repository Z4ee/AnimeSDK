#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_STORYEFFECTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x199B9140)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryEffectTrack_TypeDefinitionIndex = 46547;

	class StoryEffectTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYEFFECTTRACK__CTOR_OFFSET))(this);
		}
	};
}
