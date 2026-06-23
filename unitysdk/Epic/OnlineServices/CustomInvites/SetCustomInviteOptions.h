#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1B609D80)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_GET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x1B609DA0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1B609D90)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_SET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x1B609DB0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B609DC0)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int SetCustomInviteOptions_TypeDefinitionIndex = 36035;

	class SetCustomInviteOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _Payload_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_Payload()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_GET_PAYLOAD_OFFSET))(this);
		}

		::System::Void set_Payload(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONS_SET_PAYLOAD_OFFSET))(this, value);
		}
	};
}
