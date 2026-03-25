#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/RejectInviteCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8695F30)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8695EF0)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GET_INVITEID_OFFSET UNITYSDK_OFFSET(0x8695F10)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8695ED0)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x86963C0)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8695F00)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0x8695F20)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8695F50)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8695EE0)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x86964D0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int RejectInviteCallbackInfo_TypeDefinitionIndex = 36164;

	class RejectInviteCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::System::String* _InviteId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::String* get_InviteId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GET_INVITEID_OFFSET))(this);
		}

		::System::Void set_InviteId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_INVITEID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::RejectInviteCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::RejectInviteCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
