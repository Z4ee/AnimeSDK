#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyUpdateReceivedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1A80B940)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1A80B900)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1A80B920)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1A80BB00)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1A80B910)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1A80B930)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1A80B950)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A80BD60)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyUpdateReceivedCallbackInfo_TypeDefinitionIndex = 34161;

	class LobbyUpdateReceivedCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::System::String* _LobbyId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO_SET_LOBBYID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYUPDATERECEIVEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
