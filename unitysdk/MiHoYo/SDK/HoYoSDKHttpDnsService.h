#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoSDKHttpDnsService_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKHttpDnsService_HttpResult; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HttpResponse; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_CHECKUSEEXPIREDCACHE_OFFSET UNITYSDK_OFFSET(0x8D14F90)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_DOHTTPGET_OFFSET UNITYSDK_OFFSET(0x8D142A0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_FINDINCACHE_OFFSET UNITYSDK_OFFSET(0x8D133D0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_GETNOWTIMESTAMPMILLISEC_OFFSET UNITYSDK_OFFSET(0x8D15930)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_GETNOWTIMESTAMPSEC_OFFSET UNITYSDK_OFFSET(0x8D14730)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8D15B00)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_ISNEEDREFRESHDNS_OFFSET UNITYSDK_OFFSET(0x8D15550)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_PACKDNSURL_OFFSET UNITYSDK_OFFSET(0x8D13BA0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_PERSISTENTREFRESHEDDNS_1_OFFSET UNITYSDK_OFFSET(0x8D15030)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_PERSISTENTREFRESHEDDNS_OFFSET UNITYSDK_OFFSET(0x8D148D0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_REQUESTHOSTADDR_1_OFFSET UNITYSDK_OFFSET(0x8D131D0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_REQUESTHOSTADDR_OFFSET UNITYSDK_OFFSET(0x8D130E0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_SETCACHEEXPIREDTIME_OFFSET UNITYSDK_OFFSET(0x8D130C0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8D15BB0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_TECHNICALREPORTEASY_OFFSET UNITYSDK_OFFSET(0x8D141B0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_TECHNICALREPORTHTTPDNSFAILED_OFFSET UNITYSDK_OFFSET(0x8D15DA0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_TECHNICALREPORT_OFFSET UNITYSDK_OFFSET(0x8D15BC0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_UPDATEHTTDNSIP_OFFSET UNITYSDK_OFFSET(0x8D130D0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x8D15AB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKHttpDnsService_TypeDefinitionIndex = 42699;

	class HoYoSDKHttpDnsService : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoSDKHttpDnsService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::HoYoSDKHttpDnsService**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKHttpDnsService_TypeDefinitionIndex)->GetStaticField(0x49B60);
		}
		// static const ::System::String* DNS_ACCOUNT_ID; // 0x0
		// static const ::System::String* DNS_IP; // 0x0
		// static const ::System::String* DNS_SECRET_KEY; // 0x0
		// static const ::System::String* DNS_HOST_SPLITTER; // 0x0
		// static const ::System::String* DNS_SIGN_SPLITTER; // 0x0
		// static const ::System::Int32 SIGN_MAX_INTERVAL = 0x258; // 0x0
		// static const ::System::Single DNS_TIMEOUT; // 0x0
		// static const ::System::String* DNS_RESOLVE_PERSISTENT_KEY; // 0x0
		::System::String* m_strDnsBatchUrl; // 0x10
		::System::String* m_strCustomDnsUrl; // 0x18
		::System::Int64 m_nCacheExpiredInterval; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void SetCacheExpiredTime(::System::Int32 nExpiredTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_SETCACHEEXPIREDTIME_OFFSET))(this, nExpiredTime);
		}

		::System::Void UpdateHttDnsIp(::System::String* strHttpDnsIp)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_UPDATEHTTDNSIP_OFFSET))(this, strHttpDnsIp);
		}

		::System::Void RequestHostAddr(::System::String* strHost, ::System::Action_1<::System::Collections::Generic::List_1<::System::String*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_REQUESTHOSTADDR_OFFSET))(this, strHost, callback);
		}

		::System::Void RequestHostAddr_1(::System::Collections::Generic::List_1<::System::String*>* lstHosts, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>* externalCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_REQUESTHOSTADDR_1_OFFSET))(this, lstHosts, externalCallback);
		}

		::MiHoYo::SDK::HoYoSDKHttpDnsService_HttpResult* DoHttpGet(::System::String* strUrl, ::System::Single fTimeout)
		{
			return ((::MiHoYo::SDK::HoYoSDKHttpDnsService_HttpResult*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_DOHTTPGET_OFFSET))(this, strUrl, fTimeout);
		}

		::System::String* PackDnsUrl(::System::Collections::Generic::List_1<::System::String*>* lstHosts)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_PACKDNSURL_OFFSET))(this, lstHosts);
		}

		::System::Collections::Generic::List_1<::System::String*>* FindInCache(::System::Collections::Generic::List_1<::System::String*>* lstHosts, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*& dicInCache, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*& dicExpiredCache)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*&, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_FINDINCACHE_OFFSET))(this, lstHosts, dicInCache, dicExpiredCache);
		}

		::System::Void PersistentRefreshedDns(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* dicDnss)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_PERSISTENTREFRESHEDDNS_OFFSET))(this, dicDnss);
		}

		::System::Void CheckUseExpiredCache(::System::String* strHost, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* dicExpiredCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_CHECKUSEEXPIREDCACHE_OFFSET))(this, strHost, dicExpiredCache);
		}

		::System::Void PersistentRefreshedDns_1(::System::String* strHost, ::System::String* strIp)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_PERSISTENTREFRESHEDDNS_1_OFFSET))(this, strHost, strIp);
		}

		::System::Boolean IsNeedRefreshDns(::System::String* strHost, ::System::String*& strIp)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_ISNEEDREFRESHDNS_OFFSET))(this, strHost, strIp);
		}

		::System::Int64 GetNowTimestampSec()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_GETNOWTIMESTAMPSEC_OFFSET))(this);
		}

		::System::Int64 GetNowTimestampMilliSec()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_GETNOWTIMESTAMPMILLISEC_OFFSET))(this);
		}

		static ::MiHoYo::SDK::HoYoSDKHttpDnsService* get_Instance()
		{
			return ((::MiHoYo::SDK::HoYoSDKHttpDnsService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::HoYoSDKHttpDnsService* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoSDKHttpDnsService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void TechnicalReportEasy(::System::String* strEventName, ::System::String* strHostName, ::MiHoYo::SDK::HoYoSDKHttpDnsService_LogLevel eLogLevel, ::System::Int32 nErrCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::HoYoSDKHttpDnsService_LogLevel, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_TECHNICALREPORTEASY_OFFSET))(this, strEventName, strHostName, eLogLevel, nErrCode);
		}

		::System::Void TechnicalReportHttpDnsFailed(::System::String* strHostName, ::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_TECHNICALREPORTHTTPDNSFAILED_OFFSET))(this, strHostName, result);
		}

		::System::Void TechnicalReport(::System::String* strEventName, ::System::String* strMsg, ::MiHoYo::SDK::HoYoSDKHttpDnsService_LogLevel eLogLevel, ::System::Int32 nErrCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::HoYoSDKHttpDnsService_LogLevel, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_TECHNICALREPORT_OFFSET))(this, strEventName, strMsg, eLogLevel, nErrCode);
		}
	};
}
