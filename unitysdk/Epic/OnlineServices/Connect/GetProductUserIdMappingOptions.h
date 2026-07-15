#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONS_GET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1C19A600)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C19A5E0)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONS_GET_TARGETPRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x1C19A620)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONS_SET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1C19A610)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C19A5F0)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONS_SET_TARGETPRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x1C19A630)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C19A640)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int GetProductUserIdMappingOptions_TypeDefinitionIndex = 43956;

	class GetProductUserIdMappingOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetProductUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::ExternalAccountType _AccountIdType_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountIdType()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONS_GET_ACCOUNTIDTYPE_OFFSET))(this);
		}

		::System::Void set_AccountIdType(::Epic::OnlineServices::ExternalAccountType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONS_SET_ACCOUNTIDTYPE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetProductUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONS_GET_TARGETPRODUCTUSERID_OFFSET))(this);
		}

		::System::Void set_TargetProductUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONS_SET_TARGETPRODUCTUSERID_OFFSET))(this, a1);
		}
	};
}
