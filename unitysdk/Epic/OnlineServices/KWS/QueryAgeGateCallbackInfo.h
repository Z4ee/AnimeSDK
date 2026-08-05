#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/KWS/QueryAgeGateCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF515C0)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_AGEOFCONSENT_OFFSET UNITYSDK_OFFSET(0x1DF515A0)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF51560)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_COUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x1DF51580)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF51540)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF51830)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_AGEOFCONSENT_OFFSET UNITYSDK_OFFSET(0x1DF515B0)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF51570)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_COUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x1DF51590)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DF515E0)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF51550)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF51970)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int QueryAgeGateCallbackInfo_TypeDefinitionIndex = 36521;

	class QueryAgeGateCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::System::String* _CountryCode_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20
		::System::UInt32 _AgeOfConsent_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::String* get_CountryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_COUNTRYCODE_OFFSET))(this);
		}

		::System::Void set_CountryCode(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_COUNTRYCODE_OFFSET))(this, value);
		}

		::System::UInt32 get_AgeOfConsent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GET_AGEOFCONSENT_OFFSET))(this);
		}

		::System::Void set_AgeOfConsent(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_AGEOFCONSENT_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
