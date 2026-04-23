#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Ecom { class Entitlement; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3CDB0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_CATALOGITEMID_OFFSET UNITYSDK_OFFSET(0x3CA60)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x24F70)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_ENTITLEMENTID_OFFSET UNITYSDK_OFFSET(0x3C900)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x3C7A0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_REDEEMED_OFFSET UNITYSDK_OFFSET(0x3CBC0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_SERVERINDEX_OFFSET UNITYSDK_OFFSET(0x1CCB0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3CD40)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_CATALOGITEMID_OFFSET UNITYSDK_OFFSET(0x3CB10)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x3CD20)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_ENTITLEMENTID_OFFSET UNITYSDK_OFFSET(0x3C9B0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x3C850)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3CD30)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_REDEEMED_OFFSET UNITYSDK_OFFSET(0x3CC70)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_SERVERINDEX_OFFSET UNITYSDK_OFFSET(0xAC20)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int EntitlementInternal_TypeDefinitionIndex = 42173;

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

		::System::Void set_EntitlementName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_ENTITLEMENTNAME_OFFSET))(this, value);
		}

		::System::String* get_EntitlementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_ENTITLEMENTID_OFFSET))(this);
		}

		::System::Void set_EntitlementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_ENTITLEMENTID_OFFSET))(this, value);
		}

		::System::String* get_CatalogItemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_CATALOGITEMID_OFFSET))(this);
		}

		::System::Void set_CatalogItemId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_CATALOGITEMID_OFFSET))(this, value);
		}

		::System::Int32 get_ServerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_SERVERINDEX_OFFSET))(this);
		}

		::System::Void set_ServerIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_SERVERINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_Redeemed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_REDEEMED_OFFSET))(this);
		}

		::System::Void set_Redeemed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_REDEEMED_OFFSET))(this, value);
		}

		::System::Int64 get_EndTimestamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimestamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_ENDTIMESTAMP_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::Entitlement* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::Entitlement*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
