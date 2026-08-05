#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPEOPTIONS_GET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1E51C270)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPEOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1E51C250)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPEOPTIONS_SET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1E51C280)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPEOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1E51C260)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E51C290)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CopyProductUserExternalAccountByAccountTypeOptions_TypeDefinitionIndex = 36707;

	class CopyProductUserExternalAccountByAccountTypeOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ExternalAccountType _AccountIdType_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPEOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPEOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountIdType()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPEOPTIONS_GET_ACCOUNTIDTYPE_OFFSET))(this);
		}

		::System::Void set_AccountIdType(::Epic::OnlineServices::ExternalAccountType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPEOPTIONS_SET_ACCOUNTIDTYPE_OFFSET))(this, value);
		}
	};
}
