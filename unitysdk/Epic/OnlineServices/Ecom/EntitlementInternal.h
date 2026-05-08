#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Ecom { class Entitlement; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BC6C0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_CATALOGITEMID_OFFSET UNITYSDK_OFFSET(0x8BC380)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x3B3B50)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_ENTITLEMENTID_OFFSET UNITYSDK_OFFSET(0x8BC220)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x8BC0C0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_REDEEMED_OFFSET UNITYSDK_OFFSET(0x8BC4E0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_GET_SERVERINDEX_OFFSET UNITYSDK_OFFSET(0x367EB0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8BC650)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_CATALOGITEMID_OFFSET UNITYSDK_OFFSET(0x8BC430)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x7163E0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_ENTITLEMENTID_OFFSET UNITYSDK_OFFSET(0x8BC2D0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x8BC170)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8BC640)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_REDEEMED_OFFSET UNITYSDK_OFFSET(0x8BC590)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENTINTERNAL_SET_SERVERINDEX_OFFSET UNITYSDK_OFFSET(0x6FDE10)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int EntitlementInternal_TypeDefinitionIndex = 34392;

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
