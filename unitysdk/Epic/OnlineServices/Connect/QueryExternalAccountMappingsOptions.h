#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_GET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0xA2A4FF0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_GET_EXTERNALACCOUNTIDS_OFFSET UNITYSDK_OFFSET(0xA2A5010)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2A4FD0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_SET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0xA2A5000)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_SET_EXTERNALACCOUNTIDS_OFFSET UNITYSDK_OFFSET(0xA2A5020)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2A4FE0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5030)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int QueryExternalAccountMappingsOptions_TypeDefinitionIndex = 43135;

	class QueryExternalAccountMappingsOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _ExternalAccountIds_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::ExternalAccountType _AccountIdType_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountIdType()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_GET_ACCOUNTIDTYPE_OFFSET))(this);
		}

		::System::Void set_AccountIdType(::Epic::OnlineServices::ExternalAccountType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_SET_ACCOUNTIDTYPE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_ExternalAccountIds()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_GET_EXTERNALACCOUNTIDS_OFFSET))(this);
		}

		::System::Void set_ExternalAccountIds(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONS_SET_EXTERNALACCOUNTIDS_OFFSET))(this, a1);
		}
	};
}
