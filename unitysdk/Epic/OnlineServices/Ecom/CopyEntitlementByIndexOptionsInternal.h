#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class CopyEntitlementByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x39B10)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x39B00)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONSINTERNAL_SET_ENTITLEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x26F0)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x39960)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x39A20)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyEntitlementByIndexOptionsInternal_TypeDefinitionIndex = 36323;

	struct alignas(8) CopyEntitlementByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::UInt32 m_EntitlementIndex; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_EntitlementIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONSINTERNAL_SET_ENTITLEMENTINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CopyEntitlementByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyEntitlementByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
