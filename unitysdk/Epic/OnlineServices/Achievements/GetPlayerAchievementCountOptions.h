#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNTOPTIONS_GET_USERID_OFFSET UNITYSDK_OFFSET(0x1D9319D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNTOPTIONS_SET_USERID_OFFSET UNITYSDK_OFFSET(0x1D9319E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9319F0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int GetPlayerAchievementCountOptions_TypeDefinitionIndex = 37050;

	class GetPlayerAchievementCountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _UserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNTOPTIONS_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNTOPTIONS_SET_USERID_OFFSET))(this, value);
		}
	};
}
