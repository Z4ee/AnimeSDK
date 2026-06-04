#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETUNLOCKEDACHIEVEMENTCOUNTOPTIONS_GET_USERID_OFFSET UNITYSDK_OFFSET(0xA0B7AA0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETUNLOCKEDACHIEVEMENTCOUNTOPTIONS_SET_USERID_OFFSET UNITYSDK_OFFSET(0xA0B7AB0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETUNLOCKEDACHIEVEMENTCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0B7AC0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int GetUnlockedAchievementCountOptions_TypeDefinitionIndex = 43414;

	class GetUnlockedAchievementCountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _UserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETUNLOCKEDACHIEVEMENTCOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETUNLOCKEDACHIEVEMENTCOUNTOPTIONS_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETUNLOCKEDACHIEVEMENTCOUNTOPTIONS_SET_USERID_OFFSET))(this, a1);
		}
	};
}
