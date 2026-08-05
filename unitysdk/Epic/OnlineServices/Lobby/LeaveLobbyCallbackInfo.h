#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LeaveLobbyCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1E1A8D70)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1E1A8D30)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1E1A8D50)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1E1A8D10)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1E1A8F70)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1E1A8D40)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1E1A8D60)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1E1A8D90)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1E1A8D20)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A91E0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LeaveLobbyCallbackInfo_TypeDefinitionIndex = 36306;

	class LeaveLobbyCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _LobbyId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_SET_LOBBYID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
