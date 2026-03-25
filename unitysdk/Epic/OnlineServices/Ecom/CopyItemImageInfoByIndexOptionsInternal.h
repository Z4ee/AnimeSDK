#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class CopyItemImageInfoByIndexOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYITEMIMAGEINFOBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A3F0)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A380)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_IMAGEINFOINDEX_OFFSET UNITYSDK_OFFSET(0xBC50)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x3A2C0)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3A200)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A370)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyItemImageInfoByIndexOptionsInternal_TypeDefinitionIndex = 36329;

	struct alignas(8) CopyItemImageInfoByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_ItemId; // 0x20
		::System::UInt32 m_ImageInfoIndex; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_ItemId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_ITEMID_OFFSET))(this, value);
		}

		::System::Void set_ImageInfoIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_IMAGEINFOINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CopyItemImageInfoByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyItemImageInfoByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMIMAGEINFOBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMIMAGEINFOBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
