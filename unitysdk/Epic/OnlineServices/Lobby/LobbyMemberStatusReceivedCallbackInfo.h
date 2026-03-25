#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyMemberStatus.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyMemberStatusReceivedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8682C10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8682B90)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x8682BF0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x8682BB0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x8682BD0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8683240)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8682BA0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x8682C00)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x8682BC0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8682C20)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x8682BE0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERSTATUSRECEIVEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8683370)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyMemberStatusReceivedCallbackInfo_TypeDefinitionIndex = 36073;

	class LobbyMemberStatusReceivedCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::System::String* _LobbyId_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20
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
