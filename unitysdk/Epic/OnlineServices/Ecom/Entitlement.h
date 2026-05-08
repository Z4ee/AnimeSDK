#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/EntitlementInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_GET_CATALOGITEMID_OFFSET UNITYSDK_OFFSET(0x19A2AC00)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x19A2AC60)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_GET_ENTITLEMENTID_OFFSET UNITYSDK_OFFSET(0x19A2ABE0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_GET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x19A2ABC0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_GET_REDEEMED_OFFSET UNITYSDK_OFFSET(0x19A2AC40)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_GET_SERVERINDEX_OFFSET UNITYSDK_OFFSET(0x19A2AC20)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_1_OFFSET UNITYSDK_OFFSET(0x19A2B200)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_CATALOGITEMID_OFFSET UNITYSDK_OFFSET(0x19A2AC10)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x19A2AC70)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_ENTITLEMENTID_OFFSET UNITYSDK_OFFSET(0x19A2ABF0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x19A2ABD0)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_OFFSET UNITYSDK_OFFSET(0x19A2AC80)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_REDEEMED_OFFSET UNITYSDK_OFFSET(0x19A2AC50)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_SERVERINDEX_OFFSET UNITYSDK_OFFSET(0x19A2AC30)
#define EPIC_ONLINESERVICES_ECOM_ENTITLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19A2B350)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int Entitlement_TypeDefinitionIndex = 34391;

	class Entitlement : public ::System::Object
	{
	public:
		::System::String* _CatalogItemId_k__BackingField; // 0x10
		::System::String* _EntitlementId_k__BackingField; // 0x18
		::System::String* _EntitlementName_k__BackingField; // 0x20
		::System::Int32 _ServerIndex_k__BackingField; // 0x28
		::System::Boolean _Redeemed_k__BackingField; // 0x2C
		::System::Int64 _EndTimestamp_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EntitlementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_GET_ENTITLEMENTNAME_OFFSET))(this);
		}

		::System::Void set_EntitlementName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_ENTITLEMENTNAME_OFFSET))(this, value);
		}

		::System::String* get_EntitlementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_GET_ENTITLEMENTID_OFFSET))(this);
		}

		::System::Void set_EntitlementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_ENTITLEMENTID_OFFSET))(this, value);
		}

		::System::String* get_CatalogItemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_GET_CATALOGITEMID_OFFSET))(this);
		}

		::System::Void set_CatalogItemId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_CATALOGITEMID_OFFSET))(this, value);
		}

		::System::Int32 get_ServerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_GET_SERVERINDEX_OFFSET))(this);
		}

		::System::Void set_ServerIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_SERVERINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_Redeemed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_GET_REDEEMED_OFFSET))(this);
		}

		::System::Void set_Redeemed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_REDEEMED_OFFSET))(this, value);
		}

		::System::Int64 get_EndTimestamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimestamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_ENDTIMESTAMP_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::EntitlementInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::EntitlementInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ENTITLEMENT_SET_1_OFFSET))(this, other);
		}
	};
}
