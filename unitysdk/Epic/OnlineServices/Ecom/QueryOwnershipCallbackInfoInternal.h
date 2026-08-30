#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class ItemOwnership; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x6020)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x44D40)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFOINTERNAL_GET_ITEMOWNERSHIP_OFFSET UNITYSDK_OFFSET(0x44DC0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x44D50)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x5F00)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryOwnershipCallbackInfoInternal_TypeDefinitionIndex = 46062;

	struct alignas(8) QueryOwnershipCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::System::IntPtr m_ItemOwnership; // 0x28
		::System::UInt32 m_ItemOwnershipCount; // 0x30

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::Il2CppArray<::Epic::OnlineServices::Ecom::ItemOwnership*>* get_ItemOwnership()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Ecom::ItemOwnership*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPCALLBACKINFOINTERNAL_GET_ITEMOWNERSHIP_OFFSET))(this);
		}
	};
}
