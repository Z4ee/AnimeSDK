#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFOINTERNAL_GET_AGEOFCONSENT_OFFSET UNITYSDK_OFFSET(0x2C1260)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x9AA760)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFOINTERNAL_GET_COUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x9AA870)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x2B68B0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int QueryAgeGateCallbackInfoInternal_TypeDefinitionIndex = 35863;

	struct alignas(8) QueryAgeGateCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::System::IntPtr m_CountryCode; // 0x20
		::System::UInt32 m_AgeOfConsent; // 0x28

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::System::String* get_CountryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFOINTERNAL_GET_COUNTRYCODE_OFFSET))(this);
		}

		::System::UInt32 get_AgeOfConsent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFOINTERNAL_GET_AGEOFCONSENT_OFFSET))(this);
		}
	};
}
