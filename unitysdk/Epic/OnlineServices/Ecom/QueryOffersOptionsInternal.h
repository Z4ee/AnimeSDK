#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class QueryOffersOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3EA00)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3E990)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3E810)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3E980)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONSINTERNAL_SET_OVERRIDECATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x3E8D0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryOffersOptionsInternal_TypeDefinitionIndex = 42214;

	struct alignas(8) QueryOffersOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_OverrideCatalogNamespace; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_OverrideCatalogNamespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONSINTERNAL_SET_OVERRIDECATALOGNAMESPACE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::QueryOffersOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryOffersOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
