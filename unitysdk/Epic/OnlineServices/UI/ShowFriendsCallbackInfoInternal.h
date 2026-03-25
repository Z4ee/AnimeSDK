#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x20C50)
#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x20D60)
#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x59D0)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int ShowFriendsCallbackInfoInternal_TypeDefinitionIndex = 35330;

	struct alignas(8) ShowFriendsCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}
	};
}
