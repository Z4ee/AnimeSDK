#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class GetOfferCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3BD92C0)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3BD92B0)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3BD9120)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3BD91E0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int GetOfferCountOptionsInternal_TypeDefinitionIndex = 46029;

	struct alignas(8) GetOfferCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::GetOfferCountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetOfferCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
