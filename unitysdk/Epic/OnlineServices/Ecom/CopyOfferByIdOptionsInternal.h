#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class CopyOfferByIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AA30)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A9C0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3A840)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONSINTERNAL_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0x3A900)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A9B0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyOfferByIdOptionsInternal_TypeDefinitionIndex = 36333;

	struct alignas(8) CopyOfferByIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_OfferId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_OfferId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONSINTERNAL_SET_OFFERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CopyOfferByIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyOfferByIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
