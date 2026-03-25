#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_GET_ACCOUNTIDTYPE_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x862D880)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x862D860)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_GET_PRODUCTUSERIDS_OFFSET UNITYSDK_OFFSET(0x862D8A0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_SET_ACCOUNTIDTYPE_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x862D890)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x862D870)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_SET_PRODUCTUSERIDS_OFFSET UNITYSDK_OFFSET(0x862D8B0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x862D8C0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int QueryProductUserIdMappingsOptions_TypeDefinitionIndex = 36510;

	class QueryProductUserIdMappingsOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* _ProductUserIds_k__BackingField; // 0x18
		::Epic::OnlineServices::ExternalAccountType _AccountIdType_DEPRECATED_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountIdType_DEPRECATED()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_GET_ACCOUNTIDTYPE_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_AccountIdType_DEPRECATED(::Epic::OnlineServices::ExternalAccountType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_SET_ACCOUNTIDTYPE_DEPRECATED_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* get_ProductUserIds()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_GET_PRODUCTUSERIDS_OFFSET))(this);
		}

		::System::Void set_ProductUserIds(::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_SET_PRODUCTUSERIDS_OFFSET))(this, value);
		}
	};
}
