#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Achievements { class PlayerAchievement; }
namespace Epic::OnlineServices::Achievements { class PlayerStatInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA05B40)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0xA051F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA056A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA05540)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_FLAVORTEXT_OFFSET UNITYSDK_OFFSET(0xA05960)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_ICONURL_OFFSET UNITYSDK_OFFSET(0xA05800)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x451CF0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_STATINFO_OFFSET UNITYSDK_OFFSET(0xA05460)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0xA05350)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xA05AD0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0xA052A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA05750)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA055F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_FLAVORTEXT_OFFSET UNITYSDK_OFFSET(0xA05A10)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_ICONURL_OFFSET UNITYSDK_OFFSET(0xA058B0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xA05AC0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x669700)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_STATINFO_OFFSET UNITYSDK_OFFSET(0xA054D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENTINTERNAL_SET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0xA053D0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int PlayerAchievementInternal_TypeDefinitionIndex = 37075;

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
