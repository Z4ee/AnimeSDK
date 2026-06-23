#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sanctions { class QueryActivePlayerSanctionsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93C890)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x93C820)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x93C750)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x93C810)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x93C690)

namespace Epic::OnlineServices::Sanctions
{
	inline static constexpr unsigned int QueryActivePlayerSanctionsOptionsInternal_TypeDefinitionIndex = 35189;

	struct alignas(8) QueryActivePlayerSanctionsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
