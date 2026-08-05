#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_GET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1DF6F4B0)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF6F490)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_GET_TARGETEXTERNALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF6F4D0)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_SET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1DF6F4C0)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF6F4A0)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_SET_TARGETEXTERNALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF6F4E0)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6F4F0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int GetExternalAccountMappingsOptions_TypeDefinitionIndex = 36729;

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

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountIdType()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_GET_ACCOUNTIDTYPE_OFFSET))(this);
		}

		::System::Void set_AccountIdType(::Epic::OnlineServices::ExternalAccountType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_SET_ACCOUNTIDTYPE_OFFSET))(this, value);
		}

		::System::String* get_TargetExternalUserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_GET_TARGETEXTERNALUSERID_OFFSET))(this);
		}

		::System::Void set_TargetExternalUserId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONS_SET_TARGETEXTERNALUSERID_OFFSET))(this, value);
		}
	};
}
