#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKV2INFOINTERNAL_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x58A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKV2INFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5580)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKV2INFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x5720)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKV2INFOINTERNAL_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x5950)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKV2INFOINTERNAL_GET_USERID_OFFSET UNITYSDK_OFFSET(0x5830)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int OnAchievementsUnlockedCallbackV2InfoInternal_TypeDefinitionIndex = 36794;

	struct alignas(8) OnAchievementsUnlockedCallbackV2InfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_UserId; // 0x18
		::System::IntPtr m_AchievementId; // 0x20
		::System::Int64 m_UnlockTime; // 0x28

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKV2INFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKV2INFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKV2INFOINTERNAL_GET_USERID_OFFSET))(this);
		}

		::System::String* get_AchievementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKV2INFOINTERNAL_GET_ACHIEVEMENTID_OFFSET))(this);
		}

		/*
		::System::Nullable_1<::System::DateTimeOffset> get_UnlockTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKV2INFOINTERNAL_GET_UNLOCKTIME_OFFSET))(this);
		}
		*/
	};
}
