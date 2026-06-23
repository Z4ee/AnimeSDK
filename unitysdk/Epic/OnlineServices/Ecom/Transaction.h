#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Ecom { class Entitlement; }
namespace Epic::OnlineServices::Ecom { class TransactionCopyEntitlementByIndexOptions; }
namespace Epic::OnlineServices::Ecom { class TransactionGetEntitlementsCountOptions; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_TRANSACTION_COPYENTITLEMENTBYINDEX_OFFSET UNITYSDK_OFFSET(0x1CB8AAF0)
#define EPIC_ONLINESERVICES_ECOM_TRANSACTION_GETENTITLEMENTSCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB8ACF0)
#define EPIC_ONLINESERVICES_ECOM_TRANSACTION_GETTRANSACTIONID_OFFSET UNITYSDK_OFFSET(0x1CB8AF10)
#define EPIC_ONLINESERVICES_ECOM_TRANSACTION_RELEASE_OFFSET UNITYSDK_OFFSET(0x1CB8B140)
#define EPIC_ONLINESERVICES_ECOM_TRANSACTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB8AAE0)
#define EPIC_ONLINESERVICES_ECOM_TRANSACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8AAD0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int Transaction_TypeDefinitionIndex = 36009;

	class Transaction : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 TransactionCopyentitlementbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 TransactionGetentitlementscountApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTION__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result CopyEntitlementByIndex(::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions* options, ::Epic::OnlineServices::Ecom::Entitlement*& outEntitlement)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions*, ::Epic::OnlineServices::Ecom::Entitlement*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTION_COPYENTITLEMENTBYINDEX_OFFSET))(this, options, outEntitlement);
		}

		::System::UInt32 GetEntitlementsCount(::Epic::OnlineServices::Ecom::TransactionGetEntitlementsCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Ecom::TransactionGetEntitlementsCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTION_GETENTITLEMENTSCOUNT_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result GetTransactionId(::System::String*& outBuffer)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTION_GETTRANSACTIONID_OFFSET))(this, outBuffer);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTION_RELEASE_OFFSET))(this);
		}
	};
}
