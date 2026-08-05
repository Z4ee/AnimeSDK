#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA30920)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFOINTERNAL_GET_DATEOFBIRTH_OFFSET UNITYSDK_OFFSET(0xA30B50)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFOINTERNAL_GET_ISMINOR_OFFSET UNITYSDK_OFFSET(0xA30C00)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFOINTERNAL_GET_KWSUSERID_OFFSET UNITYSDK_OFFSET(0xA30AA0)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA30A30)
#define EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x325570)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int QueryPermissionsCallbackInfoInternal_TypeDefinitionIndex = 36526;

	struct alignas(8) QueryPermissionsCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::System::IntPtr m_KWSUserId; // 0x28
		::System::IntPtr m_DateOfBirth; // 0x30
		::System::Int32 m_IsMinor; // 0x38

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::String* get_KWSUserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFOINTERNAL_GET_KWSUSERID_OFFSET))(this);
		}

		::System::String* get_DateOfBirth()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFOINTERNAL_GET_DATEOFBIRTH_OFFSET))(this);
		}

		::System::Boolean get_IsMinor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYPERMISSIONSCALLBACKINFOINTERNAL_GET_ISMINOR_OFFSET))(this);
		}
	};
}
