#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/Sessions/SessionInviteReceivedCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA0E8360)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA0E82E0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_GET_INVITEID_OFFSET UNITYSDK_OFFSET(0xA0E8340)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA0E8300)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA0E8320)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA0E8A70)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA0E82F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0xA0E8350)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA0E8310)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA0E8370)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA0E8330)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E8BA0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionInviteReceivedCallbackInfo_TypeDefinitionIndex = 42144;

	class SessionInviteReceivedCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::System::String* _InviteId_k__BackingField; // 0x20
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::String* get_InviteId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_GET_INVITEID_OFFSET))(this);
		}

		::System::Void set_InviteId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_SET_INVITEID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionInviteReceivedCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionInviteReceivedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONINVITERECEIVEDCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
