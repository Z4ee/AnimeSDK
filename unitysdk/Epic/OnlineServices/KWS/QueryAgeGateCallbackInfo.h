#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/KWS/QueryAgeGateCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xB3758D0)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_AGEOFCONSENT_OFFSET UNITYSDK_OFFSET(0xB3758B0)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xB375870)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_COUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xB375890)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xB375850)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xB375D00)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_AGEOFCONSENT_OFFSET UNITYSDK_OFFSET(0xB3758C0)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xB375880)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_COUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xB3758A0)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xB3758F0)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xB375860)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB375E30)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int QueryAgeGateCallbackInfo_TypeDefinitionIndex = 45926;

	class QueryAgeGateCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::System::String* _CountryCode_k__BackingField; // 0x18
		::System::UInt32 _AgeOfConsent_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::String* get_CountryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_COUNTRYCODE_OFFSET))(this);
		}

		::System::Void set_CountryCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_COUNTRYCODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AgeOfConsent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_AGEOFCONSENT_OFFSET))(this);
		}

		::System::Void set_AgeOfConsent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_AGEOFCONSENT_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
