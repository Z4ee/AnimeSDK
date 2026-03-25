#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x83A9D90)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITEOPTIONS_GET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x83A9D70)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITEOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x83A9DB0)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x83A9DA0)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITEOPTIONS_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x83A9D80)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITEOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x83A9DC0)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x83A9DD0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SendInviteOptions_TypeDefinitionIndex = 35495;

	class SendInviteOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::String* _SessionName_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_SessionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITEOPTIONS_GET_SESSIONNAME_OFFSET))(this);
		}

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITEOPTIONS_SET_SESSIONNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITEOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITEOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}
	};
}
