#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x9ABD20)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFOINTERNAL_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x9ABE30)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x325570)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int PromoteMemberCallbackInfoInternal_TypeDefinitionIndex = 36422;

	struct alignas(8) PromoteMemberCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::System::IntPtr m_LobbyId; // 0x20

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFOINTERNAL_GET_LOBBYID_OFFSET))(this);
		}
	};
}
