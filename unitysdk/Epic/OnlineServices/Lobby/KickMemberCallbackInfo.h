#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/KickMemberCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8677590)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8677550)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x8677570)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8677530)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8677A20)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8677560)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x8677580)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x86775B0)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8677540)
#define EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8677B30)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int KickMemberCallbackInfo_TypeDefinitionIndex = 36035;

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

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_LOBBYID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::KickMemberCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::KickMemberCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_KICKMEMBERCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
