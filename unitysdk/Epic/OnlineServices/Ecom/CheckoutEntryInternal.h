#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Ecom { class CheckoutEntry; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRYINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C36250)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRYINTERNAL_GET_OFFERID_OFFSET UNITYSDK_OFFSET(0x3C36010)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRYINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C36240)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRYINTERNAL_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0x3C360C0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRYINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C36170)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CheckoutEntryInternal_TypeDefinitionIndex = 45989;

	struct alignas(8) CheckoutEntryInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_OfferId; // 0x18

		::System::String* get_OfferId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRYINTERNAL_GET_OFFERID_OFFSET))(this);
		}

		::System::Void set_OfferId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRYINTERNAL_SET_OFFERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CheckoutEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CheckoutEntry*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRYINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRYINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRYINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
