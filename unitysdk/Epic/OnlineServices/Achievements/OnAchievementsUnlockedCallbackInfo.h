#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Achievements/OnAchievementsUnlockedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8375070)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_GET_ACHIEVEMENTIDS_OFFSET UNITYSDK_OFFSET(0x8375050)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8375010)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_GET_USERID_OFFSET UNITYSDK_OFFSET(0x8375030)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x83756E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_SET_ACHIEVEMENTIDS_OFFSET UNITYSDK_OFFSET(0x8375060)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8375020)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8375080)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_SET_USERID_OFFSET UNITYSDK_OFFSET(0x8375040)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8375810)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int OnAchievementsUnlockedCallbackInfo_TypeDefinitionIndex = 36789;

	class OnAchievementsUnlockedCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Il2CppArray<::System::String*>* _AchievementIds_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _UserId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_SET_USERID_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_AchievementIds()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_GET_ACHIEVEMENTIDS_OFFSET))(this);
		}

		::System::Void set_AchievementIds(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_SET_ACHIEVEMENTIDS_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
