#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class CopyOfferImageInfoByIndexOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9045E0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x904570)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_IMAGEINFOINDEX_OFFSET UNITYSDK_OFFSET(0x36CDA0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9043F0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0x9044B0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x904560)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyOfferImageInfoByIndexOptionsInternal_TypeDefinitionIndex = 36604;

	struct alignas(8) CopyOfferImageInfoByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_OfferId; // 0x20
		::System::UInt32 m_ImageInfoIndex; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_OfferId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_OFFERID_OFFSET))(this, value);
		}

		::System::Void set_ImageInfoIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_IMAGEINFOINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
