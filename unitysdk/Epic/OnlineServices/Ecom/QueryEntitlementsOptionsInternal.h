#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class QueryEntitlementsOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x425D0)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x42550)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_ENTITLEMENTNAMES_OFFSET UNITYSDK_OFFSET(0x42420)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_INCLUDEREDEEMED_OFFSET UNITYSDK_OFFSET(0x42490)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x42360)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x42540)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryEntitlementsOptionsInternal_TypeDefinitionIndex = 43013;

	struct alignas(8) QueryEntitlementsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_EntitlementNames; // 0x20
		::System::UInt32 m_EntitlementNameCount; // 0x28
		::System::Int32 m_IncludeRedeemed; // 0x2C

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_EntitlementNames(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_ENTITLEMENTNAMES_OFFSET))(this, a1);
		}

		::System::Void set_IncludeRedeemed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_INCLUDEREDEEMED_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::QueryEntitlementsOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryEntitlementsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
