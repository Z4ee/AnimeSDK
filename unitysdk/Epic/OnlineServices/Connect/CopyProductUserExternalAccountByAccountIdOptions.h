#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1D381750)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1D381730)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1D381760)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1D381740)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D381770)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CopyProductUserExternalAccountByAccountIdOptions_TypeDefinitionIndex = 36705;

	class CopyProductUserExternalAccountByAccountIdOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::System::String* _AccountId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::String* get_AccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_SET_ACCOUNTID_OFFSET))(this, value);
		}
	};
}
