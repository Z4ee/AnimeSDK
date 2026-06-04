#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA0BD610)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA0BD5F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA0BD620)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA0BD600)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0BD630)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int QueryPlayerAchievementsOptions_TypeDefinitionIndex = 43442;

	class QueryPlayerAchievementsOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
