#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Ecom { class Entitlement; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x40B80)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_CATALOGITEMID_OFFSET UNITYSDK_OFFSET(0x40820)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x25CF0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_ENTITLEMENTID_OFFSET UNITYSDK_OFFSET(0x406C0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x40560)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_REDEEMED_OFFSET UNITYSDK_OFFSET(0x40980)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_SERVERINDEX_OFFSET UNITYSDK_OFFSET(0x1D280)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x40B00)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_CATALOGITEMID_OFFSET UNITYSDK_OFFSET(0x408D0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x40AE0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_ENTITLEMENTID_OFFSET UNITYSDK_OFFSET(0x40770)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x40610)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x40AF0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_REDEEMED_OFFSET UNITYSDK_OFFSET(0x40A30)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_SERVERINDEX_OFFSET UNITYSDK_OFFSET(0xB440)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int EntitlementInternal_TypeDefinitionIndex = 42976;

	struct alignas(8) EntitlementInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_EntitlementName; // 0x18
		::System::IntPtr m_EntitlementId; // 0x20
		::System::IntPtr m_CatalogItemId; // 0x28
		::System::Int32 m_ServerIndex; // 0x30
		::System::Int32 m_Redeemed; // 0x34
		::System::Int64 m_EndTimestamp; // 0x38

		::System::String* get_EntitlementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_ENTITLEMENTNAME_OFFSET))(this);
		}

		::System::Void set_EntitlementName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_ENTITLEMENTNAME_OFFSET))(this, a1);
		}

		::System::String* get_EntitlementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_ENTITLEMENTID_OFFSET))(this);
		}

		::System::Void set_EntitlementId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_ENTITLEMENTID_OFFSET))(this, a1);
		}

		::System::String* get_CatalogItemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_CATALOGITEMID_OFFSET))(this);
		}

		::System::Void set_CatalogItemId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_CATALOGITEMID_OFFSET))(this, a1);
		}

		::System::Int32 get_ServerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_SERVERINDEX_OFFSET))(this);
		}

		::System::Void set_ServerIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_SERVERINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_Redeemed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_REDEEMED_OFFSET))(this);
		}

		::System::Void set_Redeemed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_REDEEMED_OFFSET))(this, a1);
		}

		::System::Int64 get_EndTimestamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimestamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_ENDTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::Entitlement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::Entitlement*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
