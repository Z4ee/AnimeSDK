#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class CopyEntitlementByNameAndIndexOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x39DB0)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x39D40)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONSINTERNAL_SET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x39C80)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONSINTERNAL_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xBC50)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x39BC0)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x39D30)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyEntitlementByNameAndIndexOptionsInternal_TypeDefinitionIndex = 36325;

	struct alignas(8) CopyEntitlementByNameAndIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_EntitlementName; // 0x20
		::System::UInt32 m_Index; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_EntitlementName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONSINTERNAL_SET_ENTITLEMENTNAME_OFFSET))(this, value);
		}

		::System::Void set_Index(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONSINTERNAL_SET_INDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYNAMEANDINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
