#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class GetEntitlementsByNameCountOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3CFB0)
#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3CF40)
#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONSINTERNAL_SET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x3CE80)
#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3CDC0)
#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3CF30)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int GetEntitlementsByNameCountOptionsInternal_TypeDefinitionIndex = 42175;

	struct alignas(8) GetEntitlementsByNameCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_EntitlementName; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_EntitlementName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONSINTERNAL_SET_ENTITLEMENTNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
