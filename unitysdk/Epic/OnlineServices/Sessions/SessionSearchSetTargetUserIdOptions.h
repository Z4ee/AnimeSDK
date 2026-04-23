#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETTARGETUSERIDOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x8BDBAF0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETTARGETUSERIDOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x8BDBB00)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETTARGETUSERIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8BDBB10)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchSetTargetUserIdOptions_TypeDefinitionIndex = 41379;

	class SessionSearchSetTargetUserIdOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETTARGETUSERIDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETTARGETUSERIDOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETTARGETUSERIDOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}
	};
}
