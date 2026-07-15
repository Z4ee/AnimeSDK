#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C1A7390)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_GET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x1C1A73B0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C1A73A0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_SET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x1C1A73C0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A73D0)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int SetCustomInviteOptions_TypeDefinitionIndex = 43917;

	class SetCustomInviteOptions : public ::System::Object
	{
	public:
		::System::String* _Payload_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_Payload()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_GET_PAYLOAD_OFFSET))(this);
		}

		::System::Void set_Payload(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_SET_PAYLOAD_OFFSET))(this, a1);
		}
	};
}
