#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ECOM_TRANSACTIONCOPYENTITLEMENTBYINDEXOPTIONS_GET_ENTITLEMENTINDEX_OFFSET UNITYSDK_OFFSET(0xB3684F0)
#define EPIC_ONLINESERVICES_ECOM_TRANSACTIONCOPYENTITLEMENTBYINDEXOPTIONS_SET_ENTITLEMENTINDEX_OFFSET UNITYSDK_OFFSET(0xB368500)
#define EPIC_ONLINESERVICES_ECOM_TRANSACTIONCOPYENTITLEMENTBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB368510)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int TransactionCopyEntitlementByIndexOptions_TypeDefinitionIndex = 46074;

	class TransactionCopyEntitlementByIndexOptions : public ::System::Object
	{
	public:
		::System::UInt32 _EntitlementIndex_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTIONCOPYENTITLEMENTBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EntitlementIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTIONCOPYENTITLEMENTBYINDEXOPTIONS_GET_ENTITLEMENTINDEX_OFFSET))(this);
		}

		::System::Void set_EntitlementIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTIONCOPYENTITLEMENTBYINDEXOPTIONS_SET_ENTITLEMENTINDEX_OFFSET))(this, a1);
		}
	};
}
