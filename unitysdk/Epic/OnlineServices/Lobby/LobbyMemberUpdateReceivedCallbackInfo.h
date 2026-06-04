#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyMemberUpdateReceivedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2F2380)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2F2320)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xA2F2340)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2F2360)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA2F2940)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2F2330)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xA2F2350)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA2F2390)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2F2370)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA2F2A60)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyMemberUpdateReceivedCallbackInfo_TypeDefinitionIndex = 42704;

	class LobbyMemberUpdateReceivedCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::System::String* _LobbyId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_LOBBYID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMEMBERUPDATERECEIVEDCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
