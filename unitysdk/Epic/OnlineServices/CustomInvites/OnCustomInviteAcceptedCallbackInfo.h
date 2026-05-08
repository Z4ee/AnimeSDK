#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/CustomInvites/OnCustomInviteAcceptedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1A9D2860)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1A9D27C0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_GET_CUSTOMINVITEID_OFFSET UNITYSDK_OFFSET(0x1A9D2820)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A9D2800)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_GET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x1A9D2840)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1A9D27E0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1A9D2D50)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1A9D27D0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_SET_CUSTOMINVITEID_OFFSET UNITYSDK_OFFSET(0x1A9D2830)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A9D2810)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1A9D2870)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_SET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x1A9D2850)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1A9D27F0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9D2E90)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int OnCustomInviteAcceptedCallbackInfo_TypeDefinitionIndex = 34460;

	class OnCustomInviteAcceptedCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::String* _CustomInviteId_k__BackingField; // 0x20
		::System::Object* _ClientData_k__BackingField; // 0x28
		::System::String* _Payload_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_CustomInviteId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_GET_CUSTOMINVITEID_OFFSET))(this);
		}

		::System::Void set_CustomInviteId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_SET_CUSTOMINVITEID_OFFSET))(this, value);
		}

		::System::String* get_Payload()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_GET_PAYLOAD_OFFSET))(this);
		}

		::System::Void set_Payload(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_SET_PAYLOAD_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONCUSTOMINVITEACCEPTEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
