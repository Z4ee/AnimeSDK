#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class QueryEntitlementsOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93A9C0)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x93A950)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_ENTITLEMENTNAMES_OFFSET UNITYSDK_OFFSET(0x93A820)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_INCLUDEREDEEMED_OFFSET UNITYSDK_OFFSET(0x93A890)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x93A760)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x93A940)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryEntitlementsOptionsInternal_TypeDefinitionIndex = 35992;

	struct alignas(8) QueryEntitlementsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_EntitlementNames; // 0x20
		::System::UInt32 m_EntitlementNameCount; // 0x28
		::System::Int32 m_IncludeRedeemed; // 0x2C

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_EntitlementNames(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_ENTITLEMENTNAMES_OFFSET))(this, value);
		}

		::System::Void set_IncludeRedeemed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_INCLUDEREDEEMED_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::QueryEntitlementsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryEntitlementsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
