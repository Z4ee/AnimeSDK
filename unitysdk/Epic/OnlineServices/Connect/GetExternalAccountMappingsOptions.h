#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_GET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0xB342980)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB342960)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_GET_TARGETEXTERNALUSERID_OFFSET UNITYSDK_OFFSET(0xB3429A0)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_SET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0xB342990)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB342970)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_SET_TARGETEXTERNALUSERID_OFFSET UNITYSDK_OFFSET(0xB3429B0)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB3429C0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int GetExternalAccountMappingsOptions_TypeDefinitionIndex = 46134;

	class GetExternalAccountMappingsOptions : public ::System::Object
	{
	public:
		::System::String* _TargetExternalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::ExternalAccountType _AccountIdType_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountIdType()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_GET_ACCOUNTIDTYPE_OFFSET))(this);
		}

		::System::Void set_AccountIdType(::Epic::OnlineServices::ExternalAccountType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_SET_ACCOUNTIDTYPE_OFFSET))(this, a1);
		}

		::System::String* get_TargetExternalUserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_GET_TARGETEXTERNALUSERID_OFFSET))(this);
		}

		::System::Void set_TargetExternalUserId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_SET_TARGETEXTERNALUSERID_OFFSET))(this, a1);
		}
	};
}
