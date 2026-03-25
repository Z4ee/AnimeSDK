#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNTOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x8622890)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNTOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x86228A0)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x86228B0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int GetProductUserExternalAccountCountOptions_TypeDefinitionIndex = 36464;

	class GetProductUserExternalAccountCountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNTOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNTOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}
	};
}
