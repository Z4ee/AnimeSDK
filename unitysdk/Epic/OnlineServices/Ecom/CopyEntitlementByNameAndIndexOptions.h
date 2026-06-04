#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_GET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0xA2B5270)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xA2B5290)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2B5250)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_SET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0xA2B5280)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xA2B52A0)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2B5260)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2B52B0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyEntitlementByNameAndIndexOptions_TypeDefinitionIndex = 42953;

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

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_EntitlementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_GET_ENTITLEMENTNAME_OFFSET))(this);
		}

		::System::Void set_EntitlementName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_SET_ENTITLEMENTNAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONS_SET_INDEX_OFFSET))(this, a1);
		}
	};
}
