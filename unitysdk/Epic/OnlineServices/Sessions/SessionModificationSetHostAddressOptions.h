#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONS_GET_HOSTADDRESS_OFFSET UNITYSDK_OFFSET(0x1C8296B0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONS_SET_HOSTADDRESS_OFFSET UNITYSDK_OFFSET(0x1C8296C0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8296D0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationSetHostAddressOptions_TypeDefinitionIndex = 35132;

	class SessionModificationSetHostAddressOptions : public ::System::Object
	{
	public:
		::System::String* _HostAddress_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_HostAddress()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONS_GET_HOSTADDRESS_OFFSET))(this);
		}

		::System::Void set_HostAddress(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONS_SET_HOSTADDRESS_OFFSET))(this, value);
		}
	};
}
