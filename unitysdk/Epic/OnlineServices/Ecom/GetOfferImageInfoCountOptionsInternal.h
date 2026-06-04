#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class GetOfferImageInfoCountOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_GETOFFERIMAGEINFOCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x41860)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERIMAGEINFOCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x417E0)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERIMAGEINFOCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x41660)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERIMAGEINFOCOUNTOPTIONSINTERNAL_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0x41720)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERIMAGEINFOCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x417D0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int GetOfferImageInfoCountOptionsInternal_TypeDefinitionIndex = 42988;

	struct alignas(8) GetOfferImageInfoCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_OfferId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERIMAGEINFOCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_OfferId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERIMAGEINFOCOUNTOPTIONSINTERNAL_SET_OFFERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERIMAGEINFOCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERIMAGEINFOCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERIMAGEINFOCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
