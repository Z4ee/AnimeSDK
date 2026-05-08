#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class GetItemReleaseCountOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x900660)
#define EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9005F0)
#define EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONSINTERNAL_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x900530)
#define EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x900470)
#define EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9005E0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int GetItemReleaseCountOptionsInternal_TypeDefinitionIndex = 34400;

	struct alignas(8) GetItemReleaseCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_ItemId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_ItemId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONSINTERNAL_SET_ITEMID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::GetItemReleaseCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetItemReleaseCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
