#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_GET_ACCOUNTIDTYPE_DEPRECATED_OFFSET UNITYSDK_OFFSET(0xA2A5BC0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2A5BA0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_GET_PRODUCTUSERIDS_OFFSET UNITYSDK_OFFSET(0xA2A5BE0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_SET_ACCOUNTIDTYPE_DEPRECATED_OFFSET UNITYSDK_OFFSET(0xA2A5BD0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2A5BB0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_SET_PRODUCTUSERIDS_OFFSET UNITYSDK_OFFSET(0xA2A5BF0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5C00)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int QueryProductUserIdMappingsOptions_TypeDefinitionIndex = 43139;

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

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountIdType_DEPRECATED()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_GET_ACCOUNTIDTYPE_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_AccountIdType_DEPRECATED(::Epic::OnlineServices::ExternalAccountType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_SET_ACCOUNTIDTYPE_DEPRECATED_OFFSET))(this, a1);
		}

		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* get_ProductUserIds()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_GET_PRODUCTUSERIDS_OFFSET))(this);
		}

		::System::Void set_ProductUserIds(::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONS_SET_PRODUCTUSERIDS_OFFSET))(this, a1);
		}
	};
}
