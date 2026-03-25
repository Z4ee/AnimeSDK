#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyMemberUpdateReceivedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8683400)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86833A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x86833C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x86833E0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x86839C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86833B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x86833D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8683410)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x86833F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8683AD0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyMemberUpdateReceivedCallbackInfo_TypeDefinitionIndex = 36075;

	class LobbyMemberUpdateReceivedCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _LobbyId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_LOBBYID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
