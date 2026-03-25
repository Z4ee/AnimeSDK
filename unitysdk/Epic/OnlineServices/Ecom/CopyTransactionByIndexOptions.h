#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86411B0)
#define EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYINDEXOPTIONS_GET_TRANSACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x86411D0)
#define EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86411C0)
#define EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYINDEXOPTIONS_SET_TRANSACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x86411E0)
#define EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x86411F0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyTransactionByIndexOptions_TypeDefinitionIndex = 36342;

	class CopyTransactionByIndexOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::UInt32 _TransactionIndex_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::UInt32 get_TransactionIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYINDEXOPTIONS_GET_TRANSACTIONINDEX_OFFSET))(this);
		}

		::System::Void set_TransactionIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYINDEXOPTIONS_SET_TRANSACTIONINDEX_OFFSET))(this, value);
		}
	};
}
