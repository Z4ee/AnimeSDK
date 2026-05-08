#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Achievements/UnlockedAchievementInternal.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENT_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x1AA6D7D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENT_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x1AA6D7F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENT_SET_1_OFFSET UNITYSDK_OFFSET(0x1AA6DA50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENT_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x1AA6D7E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENT_SET_OFFSET UNITYSDK_OFFSET(0x1AA6D820)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENT_SET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x1AA6D810)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA6DD20)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int UnlockedAchievement_TypeDefinitionIndex = 34864;

	class UnlockedAchievement : public ::System::Object
	{
	public:
		::System::String* _AchievementId_k__BackingField; // 0x10
		::System::Nullable_1<::System::DateTimeOffset> _UnlockTime_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENT__CTOR_OFFSET))(this);
		}

		::System::String* get_AchievementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENT_GET_ACHIEVEMENTID_OFFSET))(this);
		}

		::System::Void set_AchievementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENT_SET_ACHIEVEMENTID_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_UnlockTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENT_GET_UNLOCKTIME_OFFSET))(this);
		}

		::System::Void set_UnlockTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENT_SET_UNLOCKTIME_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Achievements::UnlockedAchievementInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Achievements::UnlockedAchievementInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENT_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_UNLOCKEDACHIEVEMENT_SET_1_OFFSET))(this, other);
		}
	};
}
