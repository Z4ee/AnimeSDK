#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesReward; }

#define RPG_CLIENT_PLANETFESBONUSEVENTREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A960C30)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesBonusEventReward_TypeDefinitionIndex = 63667;

	class PlanetFesBonusEventReward : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesReward* Reward; // 0x10
		::RPG::GameCore::PlanetFesEventType Type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBONUSEVENTREWARD__CTOR_OFFSET))(this);
		}
	};
}
