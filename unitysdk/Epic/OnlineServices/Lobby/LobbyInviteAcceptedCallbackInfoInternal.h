#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x259D70)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x9972E0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFOINTERNAL_GET_INVITEID_OFFSET UNITYSDK_OFFSET(0x9972F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFOINTERNAL_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x997480)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9973A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFOINTERNAL_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x997410)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyInviteAcceptedCallbackInfoInternal_TypeDefinitionIndex = 36336;

	struct alignas(8) LobbyInviteAcceptedCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_InviteId; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::System::IntPtr m_TargetUserId; // 0x28
		::System::IntPtr m_LobbyId; // 0x30

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::System::String* get_InviteId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFOINTERNAL_GET_INVITEID_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFOINTERNAL_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFOINTERNAL_GET_LOBBYID_OFFSET))(this);
		}
	};
}
