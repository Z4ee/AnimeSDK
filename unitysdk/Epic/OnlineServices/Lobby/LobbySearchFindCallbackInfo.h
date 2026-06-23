#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbySearchFindCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1BFACCB0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1BFACC90)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1BFACC70)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1BFACD60)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1BFACCA0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1BFACCD0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1BFACC80)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFACEC0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchFindCallbackInfo_TypeDefinitionIndex = 35706;

	class LobbySearchFindCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
