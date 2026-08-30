#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB35AC70)
#define EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS_GET_TRANSACTIONID_OFFSET UNITYSDK_OFFSET(0xB35AC90)
#define EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB35AC80)
#define EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS_SET_TRANSACTIONID_OFFSET UNITYSDK_OFFSET(0xB35ACA0)
#define EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB35ACB0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyTransactionByIdOptions_TypeDefinitionIndex = 46012;

	class CopyTransactionByIdOptions : public ::System::Object
	{
	public:
		::System::String* _TransactionId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_TransactionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS_GET_TRANSACTIONID_OFFSET))(this);
		}

		::System::Void set_TransactionId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS_SET_TRANSACTIONID_OFFSET))(this, a1);
		}
	};
}
