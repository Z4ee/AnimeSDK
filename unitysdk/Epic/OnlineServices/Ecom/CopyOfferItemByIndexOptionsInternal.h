#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class CopyOfferItemByIndexOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3BCD0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3BC60)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONSINTERNAL_SET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0xBC50)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3BAE0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONSINTERNAL_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0x3BBA0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3BC50)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyOfferItemByIndexOptionsInternal_TypeDefinitionIndex = 42165;

	struct alignas(8) CopyOfferItemByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_OfferId; // 0x20
		::System::UInt32 m_ItemIndex; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_OfferId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONSINTERNAL_SET_OFFERID_OFFSET))(this, value);
		}

		::System::Void set_ItemIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONSINTERNAL_SET_ITEMINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CopyOfferItemByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyOfferItemByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
