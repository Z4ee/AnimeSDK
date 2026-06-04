#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_PERMISSIONSUPDATERECEIVEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5B60)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSUPDATERECEIVEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x46B30)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSUPDATERECEIVEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x46B40)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int PermissionsUpdateReceivedCallbackInfoInternal_TypeDefinitionIndex = 42882;

	struct alignas(8) PermissionsUpdateReceivedCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSUPDATERECEIVEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSUPDATERECEIVEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSUPDATERECEIVEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}
	};
}
