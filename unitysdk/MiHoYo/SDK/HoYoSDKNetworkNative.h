#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HoYoNetworkHeaderCallback; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HoYoNetworkProgressCallback; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HoYoNetworkWriteCallback; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HttpResponse; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_DOHEADERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DF64F20)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_DOWRITERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DF64D60)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1DF64B50)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKHEADERINTERNALCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DF62910)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSINTERNALCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DF62960)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_CREATENETWORKHANDLE_OFFSET UNITYSDK_OFFSET(0x1DF62A40)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPGET_OFFSET UNITYSDK_OFFSET(0x1DF62D20)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPHEAD_OFFSET UNITYSDK_OFFSET(0x1DF63710)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPPOST_OFFSET UNITYSDK_OFFSET(0x1DF633A0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTCLOSE_OFFSET UNITYSDK_OFFSET(0x1DF649D0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1DF64590)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTINIT_OFFSET UNITYSDK_OFFSET(0x1DF63BC0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DF64290)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_RELEASENETWORKHANDLE_OFFSET UNITYSDK_OFFSET(0x1DF650E0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_RELEASERESPONSE_OFFSET UNITYSDK_OFFSET(0x1DF64CE0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITEINTERNALCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DF628C0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPGET_OFFSET UNITYSDK_OFFSET(0x1DF62AE0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPHEAD_OFFSET UNITYSDK_OFFSET(0x1DF634D0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPPOST_1_OFFSET UNITYSDK_OFFSET(0x1DF63150)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPPOST_OFFSET UNITYSDK_OFFSET(0x1DF63000)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTCLOSE_OFFSET UNITYSDK_OFFSET(0x1DF64610)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1DF64340)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTINIT_1_OFFSET UNITYSDK_OFFSET(0x1DF63990)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTINIT_OFFSET UNITYSDK_OFFSET(0x1DF63820)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DF63D40)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_INITENV_OFFSET UNITYSDK_OFFSET(0x1DF62970)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_NATIVERESPONSESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DF62E30)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_REGISTERHEADERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DF64150)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_REGISTERWRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x1DF64030)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1DF64CD0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF64A50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkNative_TypeDefinitionIndex = 37160;

	class HoYoSDKNetworkNative : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoSDKNetworkNative** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::HoYoSDKNetworkNative**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKNetworkNative_TypeDefinitionIndex)->GetStaticField(0x2A300);
		}
		// static const ::System::String* CLID_NETWORK_SDK; // 0x0
		// static const ::System::Int32 INVALID_SESSION_ID = 0xFFFFFFFF; // 0x0
		// static const ::System::String* MODULE_NAME; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback*>* m_dicSessionId2WriteCallback; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback*>* m_dicSessionId2HeaderCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE__CTOR_OFFSET))(this);
		}

		::System::Void InitEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_INITENV_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* HttpGet(::System::String* strUrl, ::System::String* strIpAddr, ::System::Int32 nRecvTimeout, ::System::String* strHeaders, ::System::Int32 nPort, ::System::Int32 nConnectTimeout)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPGET_OFFSET))(this, strUrl, strIpAddr, nRecvTimeout, strHeaders, nPort, nConnectTimeout);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* HttpPost(::System::String* strUrl, ::System::String* strIpAddr, ::System::String* strBody, ::System::Int32 nRecvTimeout, ::System::String* strHeaders, ::System::Int32 nPort, ::System::Int32 nConnectTimeout)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPPOST_OFFSET))(this, strUrl, strIpAddr, strBody, nRecvTimeout, strHeaders, nPort, nConnectTimeout);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* HttpPost_1(::System::String* strUrl, ::System::String* strIpAddr, ::Il2CppArray<::System::Byte>* arraBody, ::System::Int32 nRecvTimeout, ::System::String* strHeaders, ::System::Int32 nPort, ::System::Int32 nConnectTimeout)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPPOST_1_OFFSET))(this, strUrl, strIpAddr, arraBody, nRecvTimeout, strHeaders, nPort, nConnectTimeout);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* HttpHead(::System::String* strUrl, ::System::String* strIpAddr, ::System::Int32 nRecvTimeout, ::System::String* strHeaders, ::System::Int32 nPort, ::System::Int32 nConnectTimeout)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPHEAD_OFFSET))(this, strUrl, strIpAddr, nRecvTimeout, strHeaders, nPort, nConnectTimeout);
		}

		::System::Int32 HttpRequestInit(::System::String* strMethodName, ::System::String* strUrl, ::System::String* strIpAddr, ::System::String* strBody, ::System::String* strOptions, ::System::Int32 nRecvTimeout, ::System::String* strHeaders, ::System::Int32 nPort, ::System::Int32 nConnectTimeout)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTINIT_OFFSET))(this, strMethodName, strUrl, strIpAddr, strBody, strOptions, nRecvTimeout, strHeaders, nPort, nConnectTimeout);
		}

		::System::Int32 HttpRequestInit_1(::System::String* strMethodName, ::System::String* strUrl, ::System::String* strIpAddr, ::Il2CppArray<::System::Byte>* arraBody, ::System::String* strOptions, ::System::Int32 nRecvTimeout, ::System::String* strHeaders, ::System::Int32 nPort, ::System::Int32 nConnectTimeout)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTINIT_1_OFFSET))(this, strMethodName, strUrl, strIpAddr, arraBody, strOptions, nRecvTimeout, strHeaders, nPort, nConnectTimeout);
		}

		::System::Void HttpRequestRegisterCallback(::System::Int32 nSessionId, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback* writeCallback, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback* headerCallback, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkProgressCallback* progressCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback*, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback*, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkProgressCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTREGISTERCALLBACK_OFFSET))(this, nSessionId, writeCallback, headerCallback, progressCallback);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* HttpRequestGetResponse(::System::Int32 nSessionId)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTGETRESPONSE_OFFSET))(this, nSessionId);
		}

		::System::Void HttpRequestClose(::System::Int32 nSessionId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTCLOSE_OFFSET))(this, nSessionId);
		}

		static ::MiHoYo::SDK::HoYoSDKNetworkNative* get_Instance()
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::HoYoSDKNetworkNative* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoSDKNetworkNative*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_SET_INSTANCE_OFFSET))(value);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* NativeResponseSerialize(::System::IntPtr lpResponse)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_NATIVERESPONSESERIALIZE_OFFSET))(this, lpResponse);
		}

		static ::System::UInt64 HoYoNetworkWriteInternalCallback(::System::IntPtr buffer, ::System::UInt64 size, ::System::UInt64 nitems, ::System::IntPtr outstream)
		{
			return ((::System::UInt64(*)(::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITEINTERNALCALLBACK_OFFSET))(buffer, size, nitems, outstream);
		}

		static ::System::UInt64 HoYoNetworkHeaderInternalCallback(::System::IntPtr buffer, ::System::UInt64 size, ::System::UInt64 nitems, ::System::IntPtr outstream)
		{
			return ((::System::UInt64(*)(::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKHEADERINTERNALCALLBACK_OFFSET))(buffer, size, nitems, outstream);
		}

		static ::System::UInt64 HoYoNetworkProgressInternalCallback(::System::IntPtr clientp, ::System::UInt64 dltotal, ::System::UInt64 dlnow, ::System::UInt64 ultotal, ::System::UInt64 ulnow)
		{
			return ((::System::UInt64(*)(::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSINTERNALCALLBACK_OFFSET))(clientp, dltotal, dlnow, ultotal, ulnow);
		}

		::System::Void RegisterWriteCallback(::System::Int32 nSessionId, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_REGISTERWRITECALLBACK_OFFSET))(this, nSessionId, callback);
		}

		::System::UInt64 DoWriterCallback(::System::IntPtr buffer, ::System::UInt64 size, ::System::UInt64 nitems, ::System::IntPtr outstream)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_DOWRITERCALLBACK_OFFSET))(this, buffer, size, nitems, outstream);
		}

		::System::Void RegisterHeaderCallback(::System::Int32 nSessionId, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_REGISTERHEADERCALLBACK_OFFSET))(this, nSessionId, callback);
		}

		::System::UInt64 DoHeaderCallback(::System::IntPtr buffer, ::System::UInt64 size, ::System::UInt64 nitems, ::System::IntPtr outstream)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_DOHEADERCALLBACK_OFFSET))(this, buffer, size, nitems, outstream);
		}

		static ::System::Void HoYoNetworkSDK_CreateNetworkHandle(::System::String* strClassID)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_CREATENETWORKHANDLE_OFFSET))(strClassID);
		}

		static ::System::IntPtr HoYoNetworkSDK_HttpGet(::System::String* strUrl, ::System::String* strIpAddr, ::System::Int32 nRecvTimeout, ::System::String* strHeaders, ::System::Int32 nPort, ::System::Int32 nConnectTimeout)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPGET_OFFSET))(strUrl, strIpAddr, nRecvTimeout, strHeaders, nPort, nConnectTimeout);
		}

		static ::System::IntPtr HoYoNetworkSDK_HttpPost(::System::String* strUrl, ::System::String* strIpAddr, ::Il2CppArray<::System::Byte>* arraBody, ::System::Int32 nBodySize, ::System::Int32 nRecvTimeout, ::System::String* strHeaders, ::System::Int32 nPort, ::System::Int32 nConnectTimeout)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPPOST_OFFSET))(strUrl, strIpAddr, arraBody, nBodySize, nRecvTimeout, strHeaders, nPort, nConnectTimeout);
		}

		static ::System::IntPtr HoYoNetworkSDK_HttpHead(::System::String* strUrl, ::System::String* strIpAddr, ::System::Int32 nRecvTimeout, ::System::String* strHeaders, ::System::Int32 nPort, ::System::Int32 nConnectTimeout)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPHEAD_OFFSET))(strUrl, strIpAddr, nRecvTimeout, strHeaders, nPort, nConnectTimeout);
		}

		static ::System::Int32 HoYoNetworkSDK_HttpRequestInit(::System::String* strMethodName, ::System::String* strUrl, ::System::String* strIpAddr, ::Il2CppArray<::System::Byte>* arraBody, ::System::Int32 nBodySize, ::System::String* strOptions, ::System::Int32 nRecvTimeout, ::System::String* strHeaders, ::System::Int32 nPort, ::System::Int32 nConnectTimeout)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTINIT_OFFSET))(strMethodName, strUrl, strIpAddr, arraBody, nBodySize, strOptions, nRecvTimeout, strHeaders, nPort, nConnectTimeout);
		}

		static ::System::Void HoYoNetworkSDK_HttpRequestRegisterCallback(::System::Int32 nSessionId, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback* writeCallback, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback* headerCallback, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkProgressCallback* progressCallback)
		{
			return ((::System::Void(*)(::System::Int32, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback*, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback*, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkProgressCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTREGISTERCALLBACK_OFFSET))(nSessionId, writeCallback, headerCallback, progressCallback);
		}

		static ::System::IntPtr HoYoNetworkSDK_HttpRequestGetResponse(::System::Int32 nSessionId)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTGETRESPONSE_OFFSET))(nSessionId);
		}

		static ::System::Void HoYoNetworkSDK_HttpRequestClose(::System::Int32 nSessionId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTCLOSE_OFFSET))(nSessionId);
		}

		static ::System::Void HoYoNetworkSDK_ReleaseResponse(::System::IntPtr lpBuffer)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_RELEASERESPONSE_OFFSET))(lpBuffer);
		}

		static ::System::Void HoYoNetworkSDK_ReleaseNetworkHandle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_RELEASENETWORKHANDLE_OFFSET))();
		}
	};
}
