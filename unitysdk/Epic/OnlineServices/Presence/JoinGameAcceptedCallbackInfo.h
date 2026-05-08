#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/JoinGameAcceptedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1ADED030)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1ADECF90)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_JOININFO_OFFSET UNITYSDK_OFFSET(0x1ADECFB0)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1ADECFD0)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1ADECFF0)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x1ADED010)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1ADED460)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1ADECFA0)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_JOININFO_OFFSET UNITYSDK_OFFSET(0x1ADECFC0)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1ADECFE0)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1ADED040)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1ADED000)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x1ADED020)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADED5A0)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int JoinGameAcceptedCallbackInfo_TypeDefinitionIndex = 33811;

	class JoinGameAcceptedCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::System::String* _JoinInfo_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x28
		::System::UInt64 _UiEventId_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::String* get_JoinInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_JOININFO_OFFSET))(this);
		}

		::System::Void set_JoinInfo(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_JOININFO_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::UInt64 get_UiEventId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_UIEVENTID_OFFSET))(this);
		}

		::System::Void set_UiEventId(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_UIEVENTID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
