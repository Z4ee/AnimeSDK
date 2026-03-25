#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class CopyEntitlementByIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x39830)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x397C0)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_ENTITLEMENTID_OFFSET UNITYSDK_OFFSET(0x39700)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x39640)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x397B0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyEntitlementByIdOptionsInternal_TypeDefinitionIndex = 36321;

	struct alignas(8) CopyEntitlementByIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_EntitlementId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_EntitlementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_ENTITLEMENTID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CopyEntitlementByIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyEntitlementByIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
