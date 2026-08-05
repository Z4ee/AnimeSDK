#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x259D70)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x961470)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFOINTERNAL_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x961580)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyUpdateReceivedCallbackInfoInternal_TypeDefinitionIndex = 36384;

	struct alignas(8) LobbyUpdateReceivedCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_LobbyId; // 0x18

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFOINTERNAL_GET_LOBBYID_OFFSET))(this);
		}
	};
}
