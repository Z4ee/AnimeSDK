#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xA29BB10)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA29BAF0)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xA29BB20)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA29BB00)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA29BB30)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CopyProductUserExternalAccountByAccountIdOptions_TypeDefinitionIndex = 43067;

	class CopyProductUserExternalAccountByAccountIdOptions : public ::System::Object
	{
	public:
		::System::String* _AccountId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::String* get_AccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTIDOPTIONS_SET_ACCOUNTID_OFFSET))(this, a1);
		}
	};
}
