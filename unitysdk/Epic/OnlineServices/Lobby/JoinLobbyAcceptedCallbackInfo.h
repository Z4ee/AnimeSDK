#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/JoinLobbyAcceptedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8676120)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86760C0)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86760E0)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_GET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x8676100)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8676570)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86760D0)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86760F0)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8676130)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_SET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x8676110)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8676680)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int JoinLobbyAcceptedCallbackInfo_TypeDefinitionIndex = 36029;

	class JoinLobbyAcceptedCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::UInt64 _UiEventId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::UInt64 get_UiEventId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_GET_UIEVENTID_OFFSET))(this);
		}

		::System::Void set_UiEventId(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_SET_UIEVENTID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::JoinLobbyAcceptedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::JoinLobbyAcceptedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYACCEPTEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
