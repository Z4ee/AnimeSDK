#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_DANMUTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A36540)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int DanmuTrack_TypeDefinitionIndex = 46289;

	class DanmuTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DANMUTRACK__CTOR_OFFSET))(this);
		}
	};
}
