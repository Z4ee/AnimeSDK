#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class GetTransactionCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_GETTRANSACTIONCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3D400)
#define EPIC_ONLINESERVICES_ECOM_GETTRANSACTIONCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3D3F0)
#define EPIC_ONLINESERVICES_ECOM_GETTRANSACTIONCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3D260)
#define EPIC_ONLINESERVICES_ECOM_GETTRANSACTIONCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3D320)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int GetTransactionCountOptionsInternal_TypeDefinitionIndex = 36363;

	struct alignas(8) GetTransactionCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETTRANSACTIONCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::GetTransactionCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetTransactionCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETTRANSACTIONCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETTRANSACTIONCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETTRANSACTIONCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
