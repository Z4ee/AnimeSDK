#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkInterface_CustomHttpRequestHandler; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CHECKHTTPDNSPLUSENABLE_OFFSET UNITYSDK_OFFSET(0x8D18760)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_DICTIONARY2JSON_OFFSET UNITYSDK_OFFSET(0x8D18B70)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8D183C0)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_OFFSET UNITYSDK_OFFSET(0x8D18510)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPREQUESTBYHTTPDNSPLUS_OFFSET UNITYSDK_OFFSET(0x8D18800)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPREQUESTBYTHTTPDNS_OFFSET UNITYSDK_OFFSET(0x8D184A0)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_INITENV_OFFSET UNITYSDK_OFFSET(0x8D18410)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_ISHTTPDNSPLUSCONFIGVALID_OFFSET UNITYSDK_OFFSET(0x8D18690)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8D18400)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x8D183B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkInterface_TypeDefinitionIndex = 42711;

	class HoYoSDKNetworkInterface : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoSDKNetworkInterface** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::HoYoSDKNetworkInterface**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKNetworkInterface_TypeDefinitionIndex)->GetStaticField(0x49D80);
		}
		// static const ::System::Int32 TIMEOUT_ERROR_CODE = 0x1C; // 0x0
		// static const ::System::String* INTERNAL_ENV; // 0x0
		::System::Boolean m_bIsInit; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::HoYoSDKNetworkInterface* get_Instance()
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkInterface*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::HoYoSDKNetworkInterface* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoSDKNetworkInterface*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void InitEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_INITENV_OFFSET))(this);
		}

		::System::Void HttpRequestBytHttpDns(::System::String* strMethod, ::System::String* strUrl, ::Il2CppArray<::System::Byte>* arraBody, ::System::Int32 nRecvTimeout, ::System::Action_1<::System::String*>* completeCallback, ::System::Action* timeoutExternalCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicHeaders, ::System::Boolean bIsCheckMD5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicReportInfo, ::System::Int32 nPort, ::System::Int32 nConnectTimeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPREQUESTBYTHTTPDNS_OFFSET))(this, strMethod, strUrl, arraBody, nRecvTimeout, completeCallback, timeoutExternalCallback, dicHeaders, bIsCheckMD5, dicReportInfo, nPort, nConnectTimeout);
		}

		::System::Boolean IsHttpDnsPlusConfigValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_ISHTTPDNSPLUSCONFIGVALID_OFFSET))(this);
		}

		::System::Boolean CheckHttpDnsPlusEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CHECKHTTPDNSPLUSENABLE_OFFSET))(this);
		}

		::System::Void HttpRequestByHttpDnsPlus(::System::String* strMethod, ::System::String* strUrl, ::Il2CppArray<::System::Byte>* arraBody, ::System::Int32 nRecvTimeout, ::System::Action_1<::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicHeaders, ::System::Boolean bIsCheckMD5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicReportInfo, ::System::Int32 nPort, ::System::Int32 nConnectTimeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPREQUESTBYHTTPDNSPLUS_OFFSET))(this, strMethod, strUrl, arraBody, nRecvTimeout, completeCallback, timeoutCallback, dicHeaders, bIsCheckMD5, dicReportInfo, nPort, nConnectTimeout);
		}

		::System::Void HttpDnsHttpRequestWithCustomHandler(::System::String* strMethod, ::System::String* strUrl, ::Il2CppArray<::System::Byte>* arraBody, ::System::Int32 nRecvTimeout, ::System::Action_1<::System::String*>* completeCallback, ::System::Action* timeoutExternalCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicHeaders, ::System::Boolean bIsCheckMD5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicReportInfo, ::System::Int32 nPort, ::System::Int32 nConnectTimeout, ::System::String* strExtraOptions, ::MiHoYo::SDK::HoYoSDKNetworkInterface_CustomHttpRequestHandler* customHttpRequestHander, ::System::Boolean bIsSkipBox)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32, ::System::String*, ::MiHoYo::SDK::HoYoSDKNetworkInterface_CustomHttpRequestHandler*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_OFFSET))(this, strMethod, strUrl, arraBody, nRecvTimeout, completeCallback, timeoutExternalCallback, dicHeaders, bIsCheckMD5, dicReportInfo, nPort, nConnectTimeout, strExtraOptions, customHttpRequestHander, bIsSkipBox);
		}

		::System::String* Dictionary2Json(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_DICTIONARY2JSON_OFFSET))(this, dicInfo);
		}
	};
}
