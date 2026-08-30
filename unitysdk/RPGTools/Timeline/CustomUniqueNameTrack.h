#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_CUSTOMUNIQUENAMETRACK_GET_USEUNIQUECHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xE839460)
#define RPGTOOLS_TIMELINE_CUSTOMUNIQUENAMETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE835520)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CustomUniqueNameTrack_TypeDefinitionIndex = 48329;

	class CustomUniqueNameTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUSTOMUNIQUENAMETRACK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseUniqueCharacterName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUSTOMUNIQUENAMETRACK_GET_USEUNIQUECHARACTERNAME_OFFSET))(this);
		}
	};
}
