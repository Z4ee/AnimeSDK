#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class CopyEntitlementByIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C369D0)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C36950)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_ENTITLEMENTID_OFFSET UNITYSDK_OFFSET(0x3C36890)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3C367D0)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C36940)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyEntitlementByIdOptionsInternal_TypeDefinitionIndex = 45993;

	struct alignas(8) CopyEntitlementByIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_EntitlementId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_EntitlementId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_ENTITLEMENTID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CopyEntitlementByIdOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyEntitlementByIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
