#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_SESSIONS_QUERYINVITESOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DCB2750)
#define EPIC_ONLINESERVICES_SESSIONS_QUERYINVITESOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DCB2760)
#define EPIC_ONLINESERVICES_SESSIONS_QUERYINVITESOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB2770)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int QueryInvitesOptions_TypeDefinitionIndex = 35750;

	class QueryInvitesOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_QUERYINVITESOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_QUERYINVITESOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_QUERYINVITESOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
