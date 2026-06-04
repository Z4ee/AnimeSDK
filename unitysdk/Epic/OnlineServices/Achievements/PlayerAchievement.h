#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Achievements/PlayerAchievementInternal.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Achievements { class PlayerStatInfo; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0xA0BA9E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA0BAA90)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA0BAA70)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_FLAVORTEXT_OFFSET UNITYSDK_OFFSET(0xA0BAAD0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_ICONURL_OFFSET UNITYSDK_OFFSET(0xA0BAAB0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xA0BAA00)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_STATINFO_OFFSET UNITYSDK_OFFSET(0xA0BAA50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0xA0BAA20)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_1_OFFSET UNITYSDK_OFFSET(0xA0BB780)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0xA0BA9F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA0BAAA0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA0BAA80)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_FLAVORTEXT_OFFSET UNITYSDK_OFFSET(0xA0BAAE0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_ICONURL_OFFSET UNITYSDK_OFFSET(0xA0BAAC0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_OFFSET UNITYSDK_OFFSET(0xA0BAAF0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xA0BAA10)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_STATINFO_OFFSET UNITYSDK_OFFSET(0xA0BAA60)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0xA0BAA40)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA0BB8E0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int PlayerAchievement_TypeDefinitionIndex = 43436;

	class PlayerAchievement : public ::System::Object
	{
	public:
		::System::String* _FlavorText_k__BackingField; // 0x10
		::System::String* _DisplayName_k__BackingField; // 0x18
		::System::String* _AchievementId_k__BackingField; // 0x20
		::System::String* _IconURL_k__BackingField; // 0x28
		::System::String* _Description_k__BackingField; // 0x30
		::Il2CppArray<::Epic::OnlineServices::Achievements::PlayerStatInfo*>* _StatInfo_k__BackingField; // 0x38
		::System::Nullable_1<::System::DateTimeOffset> _UnlockTime_k__BackingField; // 0x40
		::System::Double _Progress_k__BackingField; // 0x58

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
