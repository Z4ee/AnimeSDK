#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONS_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1C1AFAE0)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C1AFAC0)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONS_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1C1AFAF0)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C1AFAD0)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1AFB00)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyItemByIdOptions_TypeDefinitionIndex = 43816;

	class CopyItemByIdOptions : public ::System::Object
	{
	public:
		::System::String* _ItemId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_ItemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONS_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMBYIDOPTIONS_SET_ITEMID_OFFSET))(this, a1);
		}
	};
}
