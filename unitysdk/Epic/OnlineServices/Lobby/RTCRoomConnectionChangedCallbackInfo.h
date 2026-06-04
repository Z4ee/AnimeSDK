#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/RTCRoomConnectionChangedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2FC800)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2FC760)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_DISCONNECTREASON_OFFSET UNITYSDK_OFFSET(0xA2FC7E0)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0xA2FC7C0)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xA2FC780)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2FC7A0)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA2FD000)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2FC770)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_DISCONNECTREASON_OFFSET UNITYSDK_OFFSET(0xA2FC7F0)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0xA2FC7D0)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xA2FC790)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2FC7B0)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA2FC810)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA2FD130)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int RTCRoomConnectionChangedCallbackInfo_TypeDefinitionIndex = 42791;

	class RTCRoomConnectionChangedCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _LobbyId_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _DisconnectReason_k__BackingField; // 0x28
		::System::Boolean _IsConnected_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_LOBBYID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_ISCONNECTED_OFFSET))(this);
		}

		::System::Void set_IsConnected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_ISCONNECTED_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result get_DisconnectReason()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_DISCONNECTREASON_OFFSET))(this);
		}

		::System::Void set_DisconnectReason(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_DISCONNECTREASON_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
