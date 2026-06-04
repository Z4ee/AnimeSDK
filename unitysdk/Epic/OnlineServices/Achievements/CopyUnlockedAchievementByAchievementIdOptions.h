#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONS_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0xA0B1750)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONS_GET_USERID_OFFSET UNITYSDK_OFFSET(0xA0B1730)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONS_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0xA0B1760)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONS_SET_USERID_OFFSET UNITYSDK_OFFSET(0xA0B1740)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0B1770)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int CopyUnlockedAchievementByAchievementIdOptions_TypeDefinitionIndex = 43402;

	class CopyUnlockedAchievementByAchievementIdOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _UserId_k__BackingField; // 0x10
		::System::String* _AchievementId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONS_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONS_SET_USERID_OFFSET))(this, a1);
		}

		::System::String* get_AchievementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONS_GET_ACHIEVEMENTID_OFFSET))(this);
		}

		::System::Void set_AchievementId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONS_SET_ACHIEVEMENTID_OFFSET))(this, a1);
		}
	};
}
