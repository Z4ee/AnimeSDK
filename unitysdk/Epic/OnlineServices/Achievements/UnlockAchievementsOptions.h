#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONS_GET_ACHIEVEMENTIDS_OFFSET UNITYSDK_OFFSET(0x1BDB8730)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONS_GET_USERID_OFFSET UNITYSDK_OFFSET(0x1BDB8710)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONS_SET_ACHIEVEMENTIDS_OFFSET UNITYSDK_OFFSET(0x1BDB8740)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONS_SET_USERID_OFFSET UNITYSDK_OFFSET(0x1BDB8720)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDB8750)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int UnlockAchievementsOptions_TypeDefinitionIndex = 44307;

	class UnlockAchievementsOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _AchievementIds_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _UserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONS_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONS_SET_USERID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_AchievementIds()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONS_GET_ACHIEVEMENTIDS_OFFSET))(this);
		}

		::System::Void set_AchievementIds(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONS_SET_ACHIEVEMENTIDS_OFFSET))(this, a1);
		}
	};
}
