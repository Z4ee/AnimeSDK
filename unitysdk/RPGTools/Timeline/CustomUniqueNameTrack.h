#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_CUSTOMUNIQUENAMETRACK_GET_USEUNIQUECHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xCFFD600)
#define RPGTOOLS_TIMELINE_CUSTOMUNIQUENAMETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF9280)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CustomUniqueNameTrack_TypeDefinitionIndex = 45173;

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
