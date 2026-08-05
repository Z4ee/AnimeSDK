#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyInviteAcceptedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF59EB0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF59E10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_GET_INVITEID_OFFSET UNITYSDK_OFFSET(0x1DF59E30)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1DF59E90)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF59E50)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DF59E70)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF5A3A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF59E20)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0x1DF59E40)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1DF59EA0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF59E60)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DF59EC0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DF59E80)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5A4E0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyInviteAcceptedCallbackInfo_TypeDefinitionIndex = 36335;

	class LobbyInviteAcceptedCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _LobbyId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x20
		::System::Object* _ClientData_k__BackingField; // 0x28
		::System::String* _InviteId_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::String* get_InviteId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_GET_INVITEID_OFFSET))(this);
		}

		::System::Void set_InviteId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_SET_INVITEID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_SET_LOBBYID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINVITEACCEPTEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
