#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimelineControlGameCharacterConfigAsset.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TIMELINECONTROLGAMEPLAYERCONFIGASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x178A2D80)

namespace RPG::Client
{
	inline static constexpr unsigned int TimelineControlGamePlayerConfigAsset_TypeDefinitionIndex = 57716;

	class TimelineControlGamePlayerConfigAsset : public ::RPG::Client::TimelineControlGameCharacterConfigAsset
	{
	public:
		::UnityEngine::Transform* virtualPrefab; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPLAYERCONFIGASSET__CTOR_OFFSET))(this);
		}
	};
}
