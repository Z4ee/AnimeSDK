#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class CopyItemByIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x407C0)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x40740)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONSINTERNAL_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x40680)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x405C0)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x40730)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyItemByIdOptionsInternal_TypeDefinitionIndex = 45999;

	struct alignas(8) CopyItemByIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_ItemId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_ItemId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONSINTERNAL_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CopyItemByIdOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyItemByIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
