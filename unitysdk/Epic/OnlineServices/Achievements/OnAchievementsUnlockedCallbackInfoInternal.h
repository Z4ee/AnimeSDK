#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFOINTERNAL_GET_ACHIEVEMENTIDS_OFFSET UNITYSDK_OFFSET(0x5BE0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5B60)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x5A50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFOINTERNAL_GET_USERID_OFFSET UNITYSDK_OFFSET(0x5B70)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int OnAchievementsUnlockedCallbackInfoInternal_TypeDefinitionIndex = 43419;

	struct alignas(8) OnAchievementsUnlockedCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_UserId; // 0x18
		::System::UInt32 m_AchievementsCount; // 0x20
		::System::IntPtr m_AchievementIds; // 0x28

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFOINTERNAL_GET_USERID_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_AchievementIds()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACKINFOINTERNAL_GET_ACHIEVEMENTIDS_OFFSET))(this);
		}
	};
}
