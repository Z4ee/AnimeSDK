#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Achievements { class CopyUnlockedAchievementByAchievementIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2B60)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x2AF0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x2A30)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2AE0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x2970)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int CopyUnlockedAchievementByAchievementIdOptionsInternal_TypeDefinitionIndex = 36774;

	struct alignas(8) CopyUnlockedAchievementByAchievementIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_UserId; // 0x18
		::System::IntPtr m_AchievementId; // 0x20

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_USERID_OFFSET))(this, value);
		}

		::System::Void set_AchievementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_ACHIEVEMENTID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
