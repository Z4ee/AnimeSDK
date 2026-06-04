#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_UPGRADEHELPER_CHECKLINEUPNEEDSSHOWUPGRADE_OFFSET UNITYSDK_OFFSET(0xCBA7810)
#define RPG_CLIENT_UPGRADEHELPER_GETUPGRADEAVAILABLEAVATAR_OFFSET UNITYSDK_OFFSET(0xCBA7860)

namespace RPG::Client
{
	inline static constexpr unsigned int UpgradeHelper_TypeDefinitionIndex = 58618;

	class UpgradeHelper : public ::System::Object
	{
	public:
		static ::System::Boolean CheckLineupNeedsShowUpgrade(::Enum_3_63C076C405BE0674_2 a1)
		{
			return ((::System::Boolean(*)(::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEHELPER_CHECKLINEUPNEEDSSHOWUPGRADE_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetUpgradeAvailableAvatar(::Enum_3_63C076C405BE0674_2 a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::Enum_3_63C076C405BE0674_2, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEHELPER_GETUPGRADEAVAILABLEAVATAR_OFFSET))(a1, a2);
		}
	};
}
