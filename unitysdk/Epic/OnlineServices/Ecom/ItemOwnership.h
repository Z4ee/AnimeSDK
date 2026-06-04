#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/ItemOwnershipInternal.h"
#include "unitysdk/Epic/OnlineServices/Ecom/OwnershipStatus.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_GET_ID_OFFSET UNITYSDK_OFFSET(0xA2BF4E0)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_GET_OWNERSHIPSTATUS_OFFSET UNITYSDK_OFFSET(0xA2BF500)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_1_OFFSET UNITYSDK_OFFSET(0xA2BF780)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_ID_OFFSET UNITYSDK_OFFSET(0xA2BF4F0)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_OFFSET UNITYSDK_OFFSET(0xA2BF520)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_OWNERSHIPSTATUS_OFFSET UNITYSDK_OFFSET(0xA2BF510)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP__CTOR_OFFSET UNITYSDK_OFFSET(0xA2BF8A0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int ItemOwnership_TypeDefinitionIndex = 42993;

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

		::System::Void set_Id(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_ID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Ecom::OwnershipStatus get_OwnershipStatus()
		{
			return ((::Epic::OnlineServices::Ecom::OwnershipStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_GET_OWNERSHIPSTATUS_OFFSET))(this);
		}

		::System::Void set_OwnershipStatus(::Epic::OnlineServices::Ecom::OwnershipStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::OwnershipStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_OWNERSHIPSTATUS_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::ItemOwnershipInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::ItemOwnershipInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIP_SET_1_OFFSET))(this, a1);
		}
	};
}
