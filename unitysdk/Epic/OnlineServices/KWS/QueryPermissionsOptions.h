#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1AE2D140)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1AE2D150)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE2D160)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int QueryPermissionsOptions_TypeDefinitionIndex = 34305;

	class QueryPermissionsOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
