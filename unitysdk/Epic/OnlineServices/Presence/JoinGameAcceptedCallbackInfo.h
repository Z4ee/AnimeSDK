#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/JoinGameAcceptedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA32EB80)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA32EAE0)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_JOININFO_OFFSET UNITYSDK_OFFSET(0xA32EB00)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA32EB20)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA32EB40)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0xA32EB60)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA32F300)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA32EAF0)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_JOININFO_OFFSET UNITYSDK_OFFSET(0xA32EB10)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA32EB30)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA32EB90)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA32EB50)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0xA32EB70)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA32F430)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int JoinGameAcceptedCallbackInfo_TypeDefinitionIndex = 42395;

	class JoinGameAcceptedCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20
		::System::String* _JoinInfo_k__BackingField; // 0x28
		::System::UInt64 _UiEventId_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::String* get_JoinInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_JOININFO_OFFSET))(this);
		}

		::System::Void set_JoinInfo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_JOININFO_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::UInt64 get_UiEventId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GET_UIEVENTID_OFFSET))(this);
		}

		::System::Void set_UiEventId(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_UIEVENTID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
