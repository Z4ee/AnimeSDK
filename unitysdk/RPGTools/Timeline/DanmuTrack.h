#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_DANMUTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE8CD9E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int DanmuTrack_TypeDefinitionIndex = 48063;

	class DanmuTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DANMUTRACK__CTOR_OFFSET))(this);
		}
	};
}
