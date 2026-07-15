#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesReward; }

#define RPG_CLIENT_PLANETFESAVATARLEVELREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A95AFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarLevelReward_TypeDefinitionIndex = 63668;

	class PlanetFesAvatarLevelReward : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesReward* Reward; // 0x10
		::System::UInt32 RewardLevel; // 0x18
		::System::UInt32 AvatarID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARLEVELREWARD__CTOR_OFFSET))(this);
		}
	};
}
