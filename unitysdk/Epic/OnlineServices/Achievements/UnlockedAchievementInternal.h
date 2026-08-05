#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Achievements { class UnlockedAchievement; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENTINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F2270)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENTINTERNAL_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x9F1F80)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENTINTERNAL_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x9F20E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENTINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9F2200)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENTINTERNAL_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x9F2030)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENTINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9F21F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENTINTERNAL_SET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x9F2160)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int UnlockedAchievementInternal_TypeDefinitionIndex = 37087;

	struct alignas(8) UnlockedAchievementInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_AchievementId; // 0x18
		::System::Int64 m_UnlockTime; // 0x20

		::System::String* get_AchievementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENTINTERNAL_GET_ACHIEVEMENTID_OFFSET))(this);
		}

		::System::Void set_AchievementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENTINTERNAL_SET_ACHIEVEMENTID_OFFSET))(this, value);
		}

		/*
		::System::Nullable_1<::System::DateTimeOffset> get_UnlockTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENTINTERNAL_GET_UNLOCKTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_UnlockTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENTINTERNAL_SET_UNLOCKTIME_OFFSET))(this, value);
		}
		*/

		::System::Void Set(::Epic::OnlineServices::Achievements::UnlockedAchievement* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::UnlockedAchievement*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENTINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENTINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENTINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
