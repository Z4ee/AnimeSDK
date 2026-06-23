#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/OwnershipStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Ecom { class ItemOwnership; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x94A520)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_GET_ID_OFFSET UNITYSDK_OFFSET(0x94A340)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_GET_OWNERSHIPSTATUS_OFFSET UNITYSDK_OFFSET(0x2B7CC0)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x94A4B0)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_ID_OFFSET UNITYSDK_OFFSET(0x94A3F0)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x94A4A0)
#define EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_OWNERSHIPSTATUS_OFFSET UNITYSDK_OFFSET(0x48E3B0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int ItemOwnershipInternal_TypeDefinitionIndex = 35973;

	struct alignas(8) ItemOwnershipInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Id; // 0x18
		::Epic::OnlineServices::Ecom::OwnershipStatus m_OwnershipStatus; // 0x20

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_ID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Ecom::OwnershipStatus get_OwnershipStatus()
		{
			return ((::Epic::OnlineServices::Ecom::OwnershipStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_GET_OWNERSHIPSTATUS_OFFSET))(this);
		}

		::System::Void set_OwnershipStatus(::Epic::OnlineServices::Ecom::OwnershipStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::OwnershipStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_OWNERSHIPSTATUS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::ItemOwnership* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::ItemOwnership*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ITEMOWNERSHIPINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
