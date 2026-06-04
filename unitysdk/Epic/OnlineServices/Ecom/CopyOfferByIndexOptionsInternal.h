#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class CopyOfferByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3EF60)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3EF50)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3EDB0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONSINTERNAL_SET_OFFERINDEX_OFFSET UNITYSDK_OFFSET(0x2A90)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3EE70)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyOfferByIndexOptionsInternal_TypeDefinitionIndex = 42964;

	struct alignas(8) CopyOfferByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::UInt32 m_OfferIndex; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_OfferIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONSINTERNAL_SET_OFFERINDEX_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CopyOfferByIndexOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyOfferByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
