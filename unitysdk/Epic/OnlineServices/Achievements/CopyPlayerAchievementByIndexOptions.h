#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONS_GET_ACHIEVEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1AE25DD0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1AE25DF0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1AE25DB0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONS_SET_ACHIEVEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1AE25DE0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1AE25E00)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1AE25DC0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE25E10)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int CopyPlayerAchievementByIndexOptions_TypeDefinitionIndex = 34816;

	class CopyPlayerAchievementByIndexOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::UInt32 _AchievementIndex_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::UInt32 get_AchievementIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONS_GET_ACHIEVEMENTINDEX_OFFSET))(this);
		}

		::System::Void set_AchievementIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONS_SET_ACHIEVEMENTINDEX_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
