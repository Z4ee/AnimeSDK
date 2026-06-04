#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/PromoteMemberCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2FB0D0)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2FB090)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xA2FB0B0)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2FB070)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA2FB560)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2FB0A0)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xA2FB0C0)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA2FB0F0)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2FB080)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA2FB680)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int PromoteMemberCallbackInfo_TypeDefinitionIndex = 42783;

	class PromoteMemberCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::System::String* _LobbyId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_LOBBYID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::PromoteMemberCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::PromoteMemberCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
