#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class RedeemEntitlementsOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x43250)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x431D0)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONSINTERNAL_SET_ENTITLEMENTIDS_OFFSET UNITYSDK_OFFSET(0x43150)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x43090)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x431C0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int RedeemEntitlementsOptionsInternal_TypeDefinitionIndex = 43029;

	struct alignas(8) RedeemEntitlementsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::UInt32 m_EntitlementIdCount; // 0x20
		::System::IntPtr m_EntitlementIds; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_EntitlementIds(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONSINTERNAL_SET_ENTITLEMENTIDS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::RedeemEntitlementsOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::RedeemEntitlementsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
