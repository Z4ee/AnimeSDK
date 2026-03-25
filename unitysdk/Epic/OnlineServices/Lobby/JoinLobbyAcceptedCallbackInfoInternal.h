#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5580)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x492F0)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x49400)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFOINTERNAL_GET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x13C40)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int JoinLobbyAcceptedCallbackInfoInternal_TypeDefinitionIndex = 36030;

	struct alignas(8) JoinLobbyAcceptedCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::UInt64 m_UiEventId; // 0x20

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::UInt64 get_UiEventId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFOINTERNAL_GET_UIEVENTID_OFFSET))(this);
		}
	};
}
