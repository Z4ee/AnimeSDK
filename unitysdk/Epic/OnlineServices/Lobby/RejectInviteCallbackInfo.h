#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/RejectInviteCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2FD1C0)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2FD180)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GET_INVITEID_OFFSET UNITYSDK_OFFSET(0xA2FD1A0)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2FD160)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA2FD650)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2FD190)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0xA2FD1B0)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA2FD1E0)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2FD170)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA2FD770)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int RejectInviteCallbackInfo_TypeDefinitionIndex = 42793;

	class RejectInviteCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _InviteId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::String* get_InviteId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GET_INVITEID_OFFSET))(this);
		}

		::System::Void set_InviteId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_INVITEID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::RejectInviteCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::RejectInviteCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
