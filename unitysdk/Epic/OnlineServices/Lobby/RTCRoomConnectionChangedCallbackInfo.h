#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/RTCRoomConnectionChangedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1A2BEF40)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1A2BEEA0)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_DISCONNECTREASON_OFFSET UNITYSDK_OFFSET(0x1A2BEF20)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A2BEF00)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1A2BEEC0)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A2BEEE0)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1A2BF3A0)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1A2BEEB0)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_DISCONNECTREASON_OFFSET UNITYSDK_OFFSET(0x1A2BEF30)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A2BEF10)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1A2BEED0)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A2BEEF0)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1A2BEF50)
#define EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2BF4E0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int RTCRoomConnectionChangedCallbackInfo_TypeDefinitionIndex = 34207;

	class RTCRoomConnectionChangedCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::String* _LobbyId_k__BackingField; // 0x20
		::System::Boolean _IsConnected_k__BackingField; // 0x28
		::Epic::OnlineServices::Result _DisconnectReason_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_LOBBYID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_ISCONNECTED_OFFSET))(this);
		}

		::System::Void set_IsConnected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_ISCONNECTED_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Result get_DisconnectReason()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GET_DISCONNECTREASON_OFFSET))(this);
		}

		::System::Void set_DisconnectReason(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_DISCONNECTREASON_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_RTCROOMCONNECTIONCHANGEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
