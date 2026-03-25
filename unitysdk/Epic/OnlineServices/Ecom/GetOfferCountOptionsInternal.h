#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class GetOfferCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3CDB0)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3CDA0)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3CC10)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3CCD0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int GetOfferCountOptionsInternal_TypeDefinitionIndex = 36357;

	struct alignas(8) GetOfferCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::GetOfferCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetOfferCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
