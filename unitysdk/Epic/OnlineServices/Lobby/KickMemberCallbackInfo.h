#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/KickMemberCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2E60E0)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2E60A0)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xA2E60C0)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2E6080)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA2E6570)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2E60B0)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xA2E60D0)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA2E6100)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2E6090)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA2E6690)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int KickMemberCallbackInfo_TypeDefinitionIndex = 42664;

	class KickMemberCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::System::String* _LobbyId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_LOBBYID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::KickMemberCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::KickMemberCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
