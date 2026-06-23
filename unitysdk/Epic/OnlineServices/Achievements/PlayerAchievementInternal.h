#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Achievements { class PlayerAchievement; }
namespace Epic::OnlineServices::Achievements { class PlayerStatInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BD010)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x9BC6C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9BCB70)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9BCA10)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_FLAVORTEXT_OFFSET UNITYSDK_OFFSET(0x9BCE30)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_ICONURL_OFFSET UNITYSDK_OFFSET(0x9BCCD0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x41A770)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_STATINFO_OFFSET UNITYSDK_OFFSET(0x9BC930)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x9BC820)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9BCFA0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x9BC770)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9BCC20)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9BCAC0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_FLAVORTEXT_OFFSET UNITYSDK_OFFSET(0x9BCEE0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_ICONURL_OFFSET UNITYSDK_OFFSET(0x9BCD80)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9BCF90)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x5CD290)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_STATINFO_OFFSET UNITYSDK_OFFSET(0x9BC9A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x9BC8A0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int PlayerAchievementInternal_TypeDefinitionIndex = 36416;

	struct alignas(8) PlayerAchievementInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_AchievementId; // 0x18
		::System::Double m_Progress; // 0x20
		::System::Int64 m_UnlockTime; // 0x28
		::System::Int32 m_StatInfoCount; // 0x30
		::System::IntPtr m_StatInfo; // 0x38
		::System::IntPtr m_DisplayName; // 0x40
		::System::IntPtr m_Description; // 0x48
		::System::IntPtr m_IconURL; // 0x50
		::System::IntPtr m_FlavorText; // 0x58

		::System::String* get_AchievementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_ACHIEVEMENTID_OFFSET))(this);
		}

		::System::Void set_AchievementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_ACHIEVEMENTID_OFFSET))(this, value);
		}

		::System::Double get_Progress()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_PROGRESS_OFFSET))(this, value);
		}

		/*
		::System::Nullable_1<::System::DateTimeOffset> get_UnlockTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_UNLOCKTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_UnlockTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_UNLOCKTIME_OFFSET))(this, value);
		}
		*/

		::Il2CppArray<::Epic::OnlineServices::Achievements::PlayerStatInfo*>* get_StatInfo()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Achievements::PlayerStatInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_STATINFO_OFFSET))(this);
		}

		::System::Void set_StatInfo(::Il2CppArray<::Epic::OnlineServices::Achievements::PlayerStatInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Achievements::PlayerStatInfo*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_STATINFO_OFFSET))(this, value);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_DESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_IconURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_ICONURL_OFFSET))(this);
		}

		::System::Void set_IconURL(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_ICONURL_OFFSET))(this, value);
		}

		::System::String* get_FlavorText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_FLAVORTEXT_OFFSET))(this);
		}

		::System::Void set_FlavorText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_FLAVORTEXT_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::PlayerAchievement* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::PlayerAchievement*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
