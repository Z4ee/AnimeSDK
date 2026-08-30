#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/CheckoutEntryInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_GET_OFFERID_OFFSET UNITYSDK_OFFSET(0xB356940)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_SET_1_OFFSET UNITYSDK_OFFSET(0xB356B50)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0xB356950)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_SET_OFFSET UNITYSDK_OFFSET(0xB356960)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xB356D60)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CheckoutEntry_TypeDefinitionIndex = 45988;

	class CheckoutEntry : public ::System::Object
	{
	public:
		::System::String* _OfferId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY__CTOR_OFFSET))(this);
		}

		::System::String* get_OfferId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_GET_OFFERID_OFFSET))(this);
		}

		::System::Void set_OfferId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_SET_OFFERID_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::CheckoutEntryInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::CheckoutEntryInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_SET_1_OFFSET))(this, a1);
		}
	};
}
