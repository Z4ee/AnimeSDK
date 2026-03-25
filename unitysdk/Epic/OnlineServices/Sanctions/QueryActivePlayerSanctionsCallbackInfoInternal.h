#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x70AE0)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x70C60)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFOINTERNAL_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x70BF0)

namespace Epic::OnlineServices::Sanctions
{
	inline static constexpr unsigned int QueryActivePlayerSanctionsCallbackInfoInternal_TypeDefinitionIndex = 35579;

	struct alignas(8) QueryActivePlayerSanctionsCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::System::IntPtr m_TargetUserId; // 0x20
		::System::IntPtr m_LocalUserId; // 0x28

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFOINTERNAL_GET_TARGETUSERID_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}
	};
}
