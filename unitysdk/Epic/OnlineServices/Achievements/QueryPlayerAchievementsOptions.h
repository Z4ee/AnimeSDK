#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x837AF40)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x837AF20)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x837AF50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x837AF30)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x837AF60)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int QueryPlayerAchievementsOptions_TypeDefinitionIndex = 36813;

	class QueryPlayerAchievementsOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
