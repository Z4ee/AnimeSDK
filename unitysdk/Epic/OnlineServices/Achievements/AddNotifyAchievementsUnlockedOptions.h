#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ADDNOTIFYACHIEVEMENTSUNLOCKEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC515E0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int AddNotifyAchievementsUnlockedOptions_TypeDefinitionIndex = 36365;

	class AddNotifyAchievementsUnlockedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ADDNOTIFYACHIEVEMENTSUNLOCKEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
