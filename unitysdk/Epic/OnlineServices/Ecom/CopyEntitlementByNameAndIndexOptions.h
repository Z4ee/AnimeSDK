#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_GET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1CE6D940)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1CE6D960)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CE6D920)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_SET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1CE6D950)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1CE6D970)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CE6D930)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6D980)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyEntitlementByNameAndIndexOptions_TypeDefinitionIndex = 35932;

	class CopyEntitlementByNameAndIndexOptions : public ::System::Object
	{
	public:
		::System::String* _EntitlementName_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::System::UInt32 _Index_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_EntitlementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_GET_ENTITLEMENTNAME_OFFSET))(this);
		}

		::System::Void set_EntitlementName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_SET_ENTITLEMENTNAME_OFFSET))(this, value);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_SET_INDEX_OFFSET))(this, value);
		}
	};
}
