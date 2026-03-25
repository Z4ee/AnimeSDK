#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x865CFD0)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x865CFE0)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x865CFF0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int GetPermissionsCountOptions_TypeDefinitionIndex = 36234;

	class GetPermissionsCountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
