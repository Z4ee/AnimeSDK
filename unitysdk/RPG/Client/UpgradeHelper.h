#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CFB31C413D16E14_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_UPGRADEHELPER_CHECKLINEUPNEEDSSHOWUPGRADE_OFFSET UNITYSDK_OFFSET(0xE40B2F0)
#define RPG_CLIENT_UPGRADEHELPER_GETUPGRADEAVAILABLEAVATAR_OFFSET UNITYSDK_OFFSET(0xE40B340)

namespace RPG::Client
{
	inline static constexpr unsigned int UpgradeHelper_TypeDefinitionIndex = 62653;

	class UpgradeHelper : public ::System::Object
	{
	public:
		static ::System::Boolean CheckLineupNeedsShowUpgrade(::Enum_3_7CFB31C413D16E14_1 a1)
		{
			return ((::System::Boolean(*)(::Enum_3_7CFB31C413D16E14_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEHELPER_CHECKLINEUPNEEDSSHOWUPGRADE_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetUpgradeAvailableAvatar(::Enum_3_7CFB31C413D16E14_1 a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::Enum_3_7CFB31C413D16E14_1, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEHELPER_GETUPGRADEAVAILABLEAVATAR_OFFSET))(a1, a2);
		}
	};
}
