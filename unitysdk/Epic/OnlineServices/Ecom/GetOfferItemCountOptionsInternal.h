#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class GetOfferItemCountOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x41A70)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x419F0)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x41870)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0x41930)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x419E0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int GetOfferItemCountOptionsInternal_TypeDefinitionIndex = 42990;

	struct alignas(8) GetOfferItemCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_OfferId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_OfferId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_OFFERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::GetOfferItemCountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetOfferItemCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
