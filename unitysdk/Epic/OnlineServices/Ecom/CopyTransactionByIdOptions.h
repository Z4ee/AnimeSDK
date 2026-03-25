#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8640C90)
#define EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS_GET_TRANSACTIONID_OFFSET UNITYSDK_OFFSET(0x8640CB0)
#define EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8640CA0)
#define EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS_SET_TRANSACTIONID_OFFSET UNITYSDK_OFFSET(0x8640CC0)
#define EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8640CD0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyTransactionByIdOptions_TypeDefinitionIndex = 36340;

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

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_TransactionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS_GET_TRANSACTIONID_OFFSET))(this);
		}

		::System::Void set_TransactionId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYTRANSACTIONBYIDOPTIONS_SET_TRANSACTIONID_OFFSET))(this, value);
		}
	};
}
