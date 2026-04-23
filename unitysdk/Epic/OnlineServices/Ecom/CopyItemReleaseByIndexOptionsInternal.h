#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class CopyItemReleaseByIndexOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3B110)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3B0A0)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONSINTERNAL_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x3AFE0)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3AF20)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3B090)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONSINTERNAL_SET_RELEASEINDEX_OFFSET UNITYSDK_OFFSET(0xBC50)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyItemReleaseByIndexOptionsInternal_TypeDefinitionIndex = 42157;

	struct alignas(8) CopyItemReleaseByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_ItemId; // 0x20
		::System::UInt32 m_ReleaseIndex; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_ItemId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONSINTERNAL_SET_ITEMID_OFFSET))(this, value);
		}

		::System::Void set_ReleaseIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONSINTERNAL_SET_RELEASEINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
