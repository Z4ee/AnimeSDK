#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_GET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1D3831D0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_GET_EXTERNALACCOUNTIDS_OFFSET UNITYSDK_OFFSET(0x1D3831F0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D3831B0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_SET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1D3831E0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_SET_EXTERNALACCOUNTIDS_OFFSET UNITYSDK_OFFSET(0x1D383200)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D3831C0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D383210)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int QueryExternalAccountMappingsOptions_TypeDefinitionIndex = 36773;

	class QueryExternalAccountMappingsOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::Il2CppArray<::System::String*>* _ExternalAccountIds_k__BackingField; // 0x18
		::Epic::OnlineServices::ExternalAccountType _AccountIdType_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountIdType()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_GET_ACCOUNTIDTYPE_OFFSET))(this);
		}

		::System::Void set_AccountIdType(::Epic::OnlineServices::ExternalAccountType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_SET_ACCOUNTIDTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_ExternalAccountIds()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_GET_EXTERNALACCOUNTIDS_OFFSET))(this);
		}

		::System::Void set_ExternalAccountIds(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_SET_EXTERNALACCOUNTIDS_OFFSET))(this, value);
		}
	};
}
