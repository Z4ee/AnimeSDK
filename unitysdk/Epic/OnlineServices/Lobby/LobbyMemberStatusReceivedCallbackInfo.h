#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyMemberStatus.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyMemberStatusReceivedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C718AC0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C718A40)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x1C718AA0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1C718A60)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1C718A80)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1C718DF0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C718A50)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x1C718AB0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1C718A70)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1C718AD0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1C718A90)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C718F30)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyMemberStatusReceivedCallbackInfo_TypeDefinitionIndex = 35681;

	class LobbyMemberStatusReceivedCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _LobbyId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Lobby::LobbyMemberStatus _CurrentStatus_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_LOBBYID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Lobby::LobbyMemberStatus get_CurrentStatus()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyMemberStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_GET_CURRENTSTATUS_OFFSET))(this);
		}

		::System::Void set_CurrentStatus(::Epic::OnlineServices::Lobby::LobbyMemberStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyMemberStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_CURRENTSTATUS_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
