#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class GetOfferItemCountOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x962040)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x961FD0)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x961E50)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0x961F10)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x961FC0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int GetOfferItemCountOptionsInternal_TypeDefinitionIndex = 35969;

	struct alignas(8) GetOfferItemCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_OfferId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_OfferId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_OFFERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::GetOfferItemCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetOfferItemCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
