#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Achievements { class UnlockAchievementsOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7810)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x77A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONSINTERNAL_SET_ACHIEVEMENTIDS_OFFSET UNITYSDK_OFFSET(0x7670)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x7790)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONSINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x75B0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int UnlockAchievementsOptionsInternal_TypeDefinitionIndex = 36818;

	struct alignas(8) UnlockAchievementsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_UserId; // 0x18
		::System::IntPtr m_AchievementIds; // 0x20
		::System::UInt32 m_AchievementsCount; // 0x28

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONSINTERNAL_SET_USERID_OFFSET))(this, value);
		}

		::System::Void set_AchievementIds(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONSINTERNAL_SET_ACHIEVEMENTIDS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::UnlockAchievementsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::UnlockAchievementsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKACHIEVEMENTSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
