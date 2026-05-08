#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Friends/FriendsStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8AFD00)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFOINTERNAL_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x367F30)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8AFD10)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFOINTERNAL_GET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0x319030)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFOINTERNAL_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x8AFD80)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int OnFriendsUpdateInfoInternal_TypeDefinitionIndex = 34334;

	struct alignas(8) OnFriendsUpdateInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_TargetUserId; // 0x20
		::Epic::OnlineServices::Friends::FriendsStatus m_PreviousStatus; // 0x28
		::Epic::OnlineServices::Friends::FriendsStatus m_CurrentStatus; // 0x2C

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFOINTERNAL_GET_TARGETUSERID_OFFSET))(this);
		}

		::Epic::OnlineServices::Friends::FriendsStatus get_PreviousStatus()
		{
			return ((::Epic::OnlineServices::Friends::FriendsStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFOINTERNAL_GET_PREVIOUSSTATUS_OFFSET))(this);
		}

		::Epic::OnlineServices::Friends::FriendsStatus get_CurrentStatus()
		{
			return ((::Epic::OnlineServices::Friends::FriendsStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFOINTERNAL_GET_CURRENTSTATUS_OFFSET))(this);
		}
	};
}
