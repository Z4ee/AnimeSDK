#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/OwnershipStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Ecom { class ItemOwnership; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A470E0)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_GET_ID_OFFSET UNITYSDK_OFFSET(0x3A46EF0)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_GET_OWNERSHIPSTATUS_OFFSET UNITYSDK_OFFSET(0x691EF0)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A47060)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_ID_OFFSET UNITYSDK_OFFSET(0x3A46FA0)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A47050)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_OWNERSHIPSTATUS_OFFSET UNITYSDK_OFFSET(0x38C6D30)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int ItemOwnershipInternal_TypeDefinitionIndex = 43855;

	struct alignas(8) ItemOwnershipInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Id; // 0x18
		::Epic::OnlineServices::Ecom::OwnershipStatus m_OwnershipStatus; // 0x20

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_ID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Ecom::OwnershipStatus get_OwnershipStatus()
		{
			return ((::Epic::OnlineServices::Ecom::OwnershipStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_GET_OWNERSHIPSTATUS_OFFSET))(this);
		}

		::System::Void set_OwnershipStatus(::Epic::OnlineServices::Ecom::OwnershipStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::OwnershipStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_OWNERSHIPSTATUS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::ItemOwnership* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::ItemOwnership*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
