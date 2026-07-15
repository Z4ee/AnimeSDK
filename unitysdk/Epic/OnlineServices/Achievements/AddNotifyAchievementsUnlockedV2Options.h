#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ADDNOTIFYACHIEVEMENTSUNLOCKEDV2OPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDAA570)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int AddNotifyAchievementsUnlockedV2Options_TypeDefinitionIndex = 44249;

	class AddNotifyAchievementsUnlockedV2Options : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ADDNOTIFYACHIEVEMENTSUNLOCKEDV2OPTIONS__CTOR_OFFSET))(this);
		}
	};
}
