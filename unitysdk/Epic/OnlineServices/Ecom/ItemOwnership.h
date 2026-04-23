#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/ItemOwnershipInternal.h"
#include "unitysdk/Epic/OnlineServices/Ecom/OwnershipStatus.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_GET_ID_OFFSET UNITYSDK_OFFSET(0x8E7DCF0)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_GET_OWNERSHIPSTATUS_OFFSET UNITYSDK_OFFSET(0x8E7DD10)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_1_OFFSET UNITYSDK_OFFSET(0x8E7DF90)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_ID_OFFSET UNITYSDK_OFFSET(0x8E7DD00)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_OFFSET UNITYSDK_OFFSET(0x8E7DD30)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_OWNERSHIPSTATUS_OFFSET UNITYSDK_OFFSET(0x8E7DD20)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP__CTOR_OFFSET UNITYSDK_OFFSET(0x8E7E0A0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int ItemOwnership_TypeDefinitionIndex = 42190;

	class ItemOwnership : public ::System::Object
	{
	public:
		::System::String* _Id_k__BackingField; // 0x10
		::Epic::OnlineServices::Ecom::OwnershipStatus _OwnershipStatus_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP__CTOR_OFFSET))(this);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_ID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Ecom::OwnershipStatus get_OwnershipStatus()
		{
			return ((::Epic::OnlineServices::Ecom::OwnershipStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_GET_OWNERSHIPSTATUS_OFFSET))(this);
		}

		::System::Void set_OwnershipStatus(::Epic::OnlineServices::Ecom::OwnershipStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::OwnershipStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_OWNERSHIPSTATUS_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::ItemOwnershipInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::ItemOwnershipInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_1_OFFSET))(this, other);
		}
	};
}
