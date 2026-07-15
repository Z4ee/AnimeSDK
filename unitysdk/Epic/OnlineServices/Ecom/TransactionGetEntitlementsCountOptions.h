#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ECOM_TRANSACTIONGETENTITLEMENTSCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAAAEE0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int TransactionGetEntitlementsCountOptions_TypeDefinitionIndex = 43894;

	class TransactionGetEntitlementsCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTIONGETENTITLEMENTSCOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
