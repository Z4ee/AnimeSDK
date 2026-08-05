#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class GetEntitlementsCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x960AB0)
#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x960980)
#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9607F0)
#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9608B0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int GetEntitlementsCountOptionsInternal_TypeDefinitionIndex = 36618;

	struct alignas(8) GetEntitlementsCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::GetEntitlementsCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetEntitlementsCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
