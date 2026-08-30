#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Achievements/PlayerAchievementInternal.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Achievements { class PlayerStatInfo; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x1DB71B90)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1DB71C40)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1DB71C20)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_FLAVORTEXT_OFFSET UNITYSDK_OFFSET(0x1DB71C80)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_ICONURL_OFFSET UNITYSDK_OFFSET(0x1DB71C60)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1DB71BB0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_STATINFO_OFFSET UNITYSDK_OFFSET(0x1DB71C00)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x1DB71BD0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_1_OFFSET UNITYSDK_OFFSET(0x1DB72930)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x1DB71BA0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1DB71C50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1DB71C30)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_FLAVORTEXT_OFFSET UNITYSDK_OFFSET(0x1DB71C90)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_ICONURL_OFFSET UNITYSDK_OFFSET(0x1DB71C70)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_OFFSET UNITYSDK_OFFSET(0x1DB71CA0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1DB71BC0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_STATINFO_OFFSET UNITYSDK_OFFSET(0x1DB71C10)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x1DB71BF0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB72A90)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int PlayerAchievement_TypeDefinitionIndex = 46479;

	class PlayerAchievement : public ::System::Object
	{
	public:
		::Il2CppArray<::Epic::OnlineServices::Achievements::PlayerStatInfo*>* _StatInfo_k__BackingField; // 0x10
		::System::String* _DisplayName_k__BackingField; // 0x18
		::System::String* _IconURL_k__BackingField; // 0x20
		::System::String* _FlavorText_k__BackingField; // 0x28
		::System::String* _Description_k__BackingField; // 0x30
		::System::String* _AchievementId_k__BackingField; // 0x38
		::System::Double _Progress_k__BackingField; // 0x40
		::System::Nullable_1<::System::DateTimeOffset> _UnlockTime_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT__CTOR_OFFSET))(this);
		}

		::System::String* get_AchievementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_ACHIEVEMENTID_OFFSET))(this);
		}

		::System::Void set_AchievementId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_ACHIEVEMENTID_OFFSET))(this, a1);
		}

		::System::Double get_Progress()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_PROGRESS_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_UnlockTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_UNLOCKTIME_OFFSET))(this);
		}

		::System::Void set_UnlockTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_UNLOCKTIME_OFFSET))(this, a1);
		}

		::Il2CppArray<::Epic::OnlineServices::Achievements::PlayerStatInfo*>* get_StatInfo()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Achievements::PlayerStatInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_STATINFO_OFFSET))(this);
		}

		::System::Void set_StatInfo(::Il2CppArray<::Epic::OnlineServices::Achievements::PlayerStatInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Achievements::PlayerStatInfo*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_STATINFO_OFFSET))(this, a1);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_DISPLAYNAME_OFFSET))(this, a1);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_DESCRIPTION_OFFSET))(this, a1);
		}

		::System::String* get_IconURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_ICONURL_OFFSET))(this);
		}

		::System::Void set_IconURL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_ICONURL_OFFSET))(this, a1);
		}

		::System::String* get_FlavorText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_FLAVORTEXT_OFFSET))(this);
		}

		::System::Void set_FlavorText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_FLAVORTEXT_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerAchievementInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerAchievementInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_1_OFFSET))(this, a1);
		}
	};
}
