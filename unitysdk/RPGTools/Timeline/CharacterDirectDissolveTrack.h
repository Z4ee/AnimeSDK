#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D13BA60)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterDirectDissolveTrack_TypeDefinitionIndex = 48410;

	class CharacterDirectDissolveTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Boolean AutoReset; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVETRACK__CTOR_OFFSET))(this);
		}
	};
}
