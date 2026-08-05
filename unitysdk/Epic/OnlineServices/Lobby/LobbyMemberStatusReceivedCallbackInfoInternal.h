#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyMemberStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x259D70)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x9B6150)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFOINTERNAL_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x352810)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFOINTERNAL_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x9B6260)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFOINTERNAL_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x9B6310)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyMemberStatusReceivedCallbackInfoInternal_TypeDefinitionIndex = 36341;

	struct alignas(8) LobbyMemberStatusReceivedCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_LobbyId; // 0x18
		::System::IntPtr m_TargetUserId; // 0x20
		::Epic::OnlineServices::Lobby::LobbyMemberStatus m_CurrentStatus; // 0x28

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFOINTERNAL_GET_LOBBYID_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFOINTERNAL_GET_TARGETUSERID_OFFSET))(this);
		}

		::Epic::OnlineServices::Lobby::LobbyMemberStatus get_CurrentStatus()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyMemberStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFOINTERNAL_GET_CURRENTSTATUS_OFFSET))(this);
		}
	};
}
