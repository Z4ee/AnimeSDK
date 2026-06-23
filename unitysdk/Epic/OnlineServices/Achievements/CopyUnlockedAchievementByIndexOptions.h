#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONS_GET_ACHIEVEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1CB851D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONS_GET_USERID_OFFSET UNITYSDK_OFFSET(0x1CB851B0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONS_SET_ACHIEVEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1CB851E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONS_SET_USERID_OFFSET UNITYSDK_OFFSET(0x1CB851C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB851F0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int CopyUnlockedAchievementByIndexOptions_TypeDefinitionIndex = 36383;

	class CopyUnlockedAchievementByIndexOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _UserId_k__BackingField; // 0x10
		::System::UInt32 _AchievementIndex_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONS_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONS_SET_USERID_OFFSET))(this, value);
		}

		::System::UInt32 get_AchievementIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONS_GET_ACHIEVEMENTINDEX_OFFSET))(this);
		}

		::System::Void set_AchievementIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONS_SET_ACHIEVEMENTINDEX_OFFSET))(this, value);
		}
	};
}
