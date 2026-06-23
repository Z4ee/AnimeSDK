#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/Sessions/SessionInviteAcceptedCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1CB9C280)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1CB9C1E0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_GET_INVITEID_OFFSET UNITYSDK_OFFSET(0x1CB9C260)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CB9C220)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1CB9C200)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1CB9C240)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1CB9C770)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1CB9C1F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0x1CB9C270)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CB9C230)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1CB9C290)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1CB9C210)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1CB9C250)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB9C8B0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionInviteAcceptedCallbackInfo_TypeDefinitionIndex = 35121;

	class SessionInviteAcceptedCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20
		::System::String* _InviteId_k__BackingField; // 0x28
		::System::String* _SessionId_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::String* get_SessionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_GET_SESSIONID_OFFSET))(this);
		}

		::System::Void set_SessionId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_SET_SESSIONID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::String* get_InviteId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_GET_INVITEID_OFFSET))(this);
		}

		::System::Void set_InviteId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_SET_INVITEID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITEACCEPTEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
