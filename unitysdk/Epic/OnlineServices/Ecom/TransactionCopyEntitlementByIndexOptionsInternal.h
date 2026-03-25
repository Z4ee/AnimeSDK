#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Ecom { class TransactionCopyEntitlementByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_TRANSACTIONCOPYENTITLEMENTBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_ECOM_TRANSACTIONCOPYENTITLEMENTBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3E9D0)
#define EPIC_ONLINESERVICES_ECOM_TRANSACTIONCOPYENTITLEMENTBYINDEXOPTIONSINTERNAL_SET_ENTITLEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1D50)
#define EPIC_ONLINESERVICES_ECOM_TRANSACTIONCOPYENTITLEMENTBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1D60)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int TransactionCopyEntitlementByIndexOptionsInternal_TypeDefinitionIndex = 36403;

	struct alignas(4) TransactionCopyEntitlementByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_EntitlementIndex; // 0x14

		::System::Void set_EntitlementIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTIONCOPYENTITLEMENTBYINDEXOPTIONSINTERNAL_SET_ENTITLEMENTINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTIONCOPYENTITLEMENTBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTIONCOPYENTITLEMENTBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTIONCOPYENTITLEMENTBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
