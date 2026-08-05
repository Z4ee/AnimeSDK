#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x259D70)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x9C2C40)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9C2D50)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFOINTERNAL_GET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x3C9DA0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int JoinSessionAcceptedCallbackInfoInternal_TypeDefinitionIndex = 35715;

	struct alignas(8) JoinSessionAcceptedCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::UInt64 m_UiEventId; // 0x20

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::UInt64 get_UiEventId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONACCEPTEDCALLBACKINFOINTERNAL_GET_UIEVENTID_OFFSET))(this);
		}
	};
}
