#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Ecom { class TransactionGetEntitlementsCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_TRANSACTIONGETENTITLEMENTSCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define EPIC_ONLINESERVICES_ECOM_TRANSACTIONGETENTITLEMENTSCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8DE0E0)
#define EPIC_ONLINESERVICES_ECOM_TRANSACTIONGETENTITLEMENTSCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8167E0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int TransactionGetEntitlementsCountOptionsInternal_TypeDefinitionIndex = 34450;

	struct alignas(4) TransactionGetEntitlementsCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Ecom::TransactionGetEntitlementsCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::TransactionGetEntitlementsCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTIONGETENTITLEMENTSCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTIONGETENTITLEMENTSCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTIONGETENTITLEMENTSCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
