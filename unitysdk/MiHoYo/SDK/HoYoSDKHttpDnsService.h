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

#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_CHECKUSEEXPIREDCACHE_OFFSET UNITYSDK_OFFSET(0xA16CC40)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_DOHTTPGET_OFFSET UNITYSDK_OFFSET(0xA16BF20)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_FINDINCACHE_OFFSET UNITYSDK_OFFSET(0xA16B040)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_GETNOWTIMESTAMPMILLISEC_OFFSET UNITYSDK_OFFSET(0xA16D5C0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_GETNOWTIMESTAMPSEC_OFFSET UNITYSDK_OFFSET(0xA16C370)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA16D790)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_ISNEEDREFRESHDNS_OFFSET UNITYSDK_OFFSET(0xA16D210)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_PACKDNSURL_OFFSET UNITYSDK_OFFSET(0xA16B890)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_PERSISTENTREFRESHEDDNS_1_OFFSET UNITYSDK_OFFSET(0xA16CCE0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_PERSISTENTREFRESHEDDNS_OFFSET UNITYSDK_OFFSET(0xA16C500)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_REQUESTHOSTADDR_1_OFFSET UNITYSDK_OFFSET(0xA16ADD0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_REQUESTHOSTADDR_OFFSET UNITYSDK_OFFSET(0xA16AC70)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_SETCACHEEXPIREDTIME_OFFSET UNITYSDK_OFFSET(0xA16AC50)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA16D840)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_TECHNICALREPORTEASY_OFFSET UNITYSDK_OFFSET(0xA16BE30)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_TECHNICALREPORTHTTPDNSFAILED_OFFSET UNITYSDK_OFFSET(0xA16DA30)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_TECHNICALREPORT_OFFSET UNITYSDK_OFFSET(0xA16D850)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_UPDATEHTTDNSIP_OFFSET UNITYSDK_OFFSET(0xA16AC60)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xA16D740)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKHttpDnsService_TypeDefinitionIndex = 43502;

	class HoYoSDKHttpDnsService : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoSDKHttpDnsService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::HoYoSDKHttpDnsService**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKHttpDnsService_TypeDefinitionIndex)->GetStaticField(0xD2F0);
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

		::System::Void SetCacheExpiredTime(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_SETCACHEEXPIREDTIME_OFFSET))(this, a1);
		}

		::System::Void UpdateHttDnsIp(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_UPDATEHTTDNSIP_OFFSET))(this, a1);
		}

		::System::Void RequestHostAddr(::System::String* a1, ::System::Action_1<::System::Collections::Generic::List_1<::System::String*>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_REQUESTHOSTADDR_OFFSET))(this, a1, a2);
		}

		::System::Void RequestHostAddr_1(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_REQUESTHOSTADDR_1_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::HoYoSDKHttpDnsService_HttpResult* DoHttpGet(::System::String* a1, ::System::Single a2)
		{
			return ((::MiHoYo::SDK::HoYoSDKHttpDnsService_HttpResult*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_DOHTTPGET_OFFSET))(this, a1, a2);
		}

		::System::String* PackDnsUrl(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_PACKDNSURL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* FindInCache(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*& a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*& a3)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*&, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_FINDINCACHE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PersistentRefreshedDns(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_PERSISTENTREFRESHEDDNS_OFFSET))(this, a1);
		}

		::System::Void CheckUseExpiredCache(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_CHECKUSEEXPIREDCACHE_OFFSET))(this, a1, a2);
		}

		::System::Void PersistentRefreshedDns_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_PERSISTENTREFRESHEDDNS_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsNeedRefreshDns(::System::String* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_ISNEEDREFRESHDNS_OFFSET))(this, a1, a2);
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

		static ::System::Void set_Instance(::MiHoYo::SDK::HoYoSDKHttpDnsService* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoSDKHttpDnsService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void TechnicalReportEasy(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::HoYoSDKHttpDnsService_LogLevel a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::HoYoSDKHttpDnsService_LogLevel, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_TECHNICALREPORTEASY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void TechnicalReportHttpDnsFailed(::System::String* a1, ::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_TECHNICALREPORTHTTPDNSFAILED_OFFSET))(this, a1, a2);
		}

		::System::Void TechnicalReport(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::HoYoSDKHttpDnsService_LogLevel a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::HoYoSDKHttpDnsService_LogLevel, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_TECHNICALREPORT_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
