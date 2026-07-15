#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HoYoNetworkHeaderCallback; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HoYoNetworkProgressCallback; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HoYoNetworkWriteCallback; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HttpResponse; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_DOHEADERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ACF6DE0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_DOWRITERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ACF6C80)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1ACF09F0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKHEADERINTERNALCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ACF5030)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSINTERNALCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ACF5080)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_CREATENETWORKHANDLE_OFFSET UNITYSDK_OFFSET(0x1ACF5160)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPGET_OFFSET UNITYSDK_OFFSET(0x1ACF5200)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPHEAD_OFFSET UNITYSDK_OFFSET(0x1ACF5700)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPPOST_OFFSET UNITYSDK_OFFSET(0x1ACF55D0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTCLOSE_OFFSET UNITYSDK_OFFSET(0x1ACF6A70)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1ACF6620)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTINIT_OFFSET UNITYSDK_OFFSET(0x1ACF5B70)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ACF6310)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_RELEASENETWORKHANDLE_OFFSET UNITYSDK_OFFSET(0x1ACF6FA0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_RELEASERESPONSE_OFFSET UNITYSDK_OFFSET(0x1ACF6C00)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITEINTERNALCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ACF4FE0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPGET_OFFSET UNITYSDK_OFFSET(0x1ACF0B70)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPHEAD_OFFSET UNITYSDK_OFFSET(0x1ACF4950)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPPOST_1_OFFSET UNITYSDK_OFFSET(0x1ACF46F0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPPOST_OFFSET UNITYSDK_OFFSET(0x1ACF54E0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTCLOSE_OFFSET UNITYSDK_OFFSET(0x1ACF66A0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1ACF63C0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTINIT_1_OFFSET UNITYSDK_OFFSET(0x1ACF5930)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTINIT_OFFSET UNITYSDK_OFFSET(0x1ACF5810)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ACF5D00)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_INITENV_OFFSET UNITYSDK_OFFSET(0x1ACF5090)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_NATIVERESPONSESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1ACF5310)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_REGISTERHEADERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ACF61F0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_REGISTERWRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x1ACF60D0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1ACF6BF0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACF6AF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkNative_TypeDefinitionIndex = 44383;

	class HoYoSDKNetworkNative : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoSDKNetworkNative** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::HoYoSDKNetworkNative**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKNetworkNative_TypeDefinitionIndex)->GetStaticField(0xE180);
		}
		// static const ::System::String* CLID_NETWORK_SDK; // 0x0
		// static const ::System::Int32 INVALID_SESSION_ID = 0xFFFFFFFF; // 0x0
		// static const ::System::String* MODULE_NAME; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback*>* m_dicSessionId2HeaderCallback; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback*>* m_dicSessionId2WriteCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE__CTOR_OFFSET))(this);
		}

		::System::Void InitEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_INITENV_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* HttpGet(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPGET_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* HttpPost(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4, ::System::String* a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPPOST_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* HttpPost_1(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::String* a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPPOST_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* HttpHead(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPHEAD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 HttpRequestInit(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Int32 a6, ::System::String* a7, ::System::Int32 a8, ::System::Int32 a9)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTINIT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Int32 HttpRequestInit_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::Il2CppArray<::System::Byte>* a4, ::System::String* a5, ::System::Int32 a6, ::System::String* a7, ::System::Int32 a8, ::System::Int32 a9)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTINIT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void HttpRequestRegisterCallback(::System::Int32 a1, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback* a2, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback* a3, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkProgressCallback* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback*, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback*, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkProgressCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTREGISTERCALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* HttpRequestGetResponse(::System::Int32 a1)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTGETRESPONSE_OFFSET))(this, a1);
		}

		::System::Void HttpRequestClose(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HTTPREQUESTCLOSE_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::HoYoSDKNetworkNative* get_Instance()
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::HoYoSDKNetworkNative* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoSDKNetworkNative*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_SET_INSTANCE_OFFSET))(a1);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* NativeResponseSerialize(::System::IntPtr a1)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_NATIVERESPONSESERIALIZE_OFFSET))(this, a1);
		}

		static ::System::UInt64 HoYoNetworkWriteInternalCallback(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::IntPtr a4)
		{
			return ((::System::UInt64(*)(::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITEINTERNALCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt64 HoYoNetworkHeaderInternalCallback(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::IntPtr a4)
		{
			return ((::System::UInt64(*)(::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKHEADERINTERNALCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt64 HoYoNetworkProgressInternalCallback(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::UInt64 a4, ::System::UInt64 a5)
		{
			return ((::System::UInt64(*)(::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSINTERNALCALLBACK_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void RegisterWriteCallback(::System::Int32 a1, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_REGISTERWRITECALLBACK_OFFSET))(this, a1, a2);
		}

		::System::UInt64 DoWriterCallback(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::IntPtr a4)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_DOWRITERCALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RegisterHeaderCallback(::System::Int32 a1, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_REGISTERHEADERCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::UInt64 DoHeaderCallback(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::IntPtr a4)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_DOHEADERCALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void HoYoNetworkSDK_CreateNetworkHandle(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_CREATENETWORKHANDLE_OFFSET))(a1);
		}

		static ::System::IntPtr HoYoNetworkSDK_HttpGet(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPGET_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::IntPtr HoYoNetworkSDK_HttpPost(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::String* a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPPOST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::IntPtr HoYoNetworkSDK_HttpHead(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPHEAD_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 HoYoNetworkSDK_HttpRequestInit(::System::String* a1, ::System::String* a2, ::System::String* a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5, ::System::String* a6, ::System::Int32 a7, ::System::String* a8, ::System::Int32 a9, ::System::Int32 a10)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTINIT_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void HoYoNetworkSDK_HttpRequestRegisterCallback(::System::Int32 a1, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback* a2, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback* a3, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkProgressCallback* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback*, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback*, ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkProgressCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTREGISTERCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IntPtr HoYoNetworkSDK_HttpRequestGetResponse(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTGETRESPONSE_OFFSET))(a1);
		}

		static ::System::Void HoYoNetworkSDK_HttpRequestClose(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_HTTPREQUESTCLOSE_OFFSET))(a1);
		}

		static ::System::Void HoYoNetworkSDK_ReleaseResponse(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_RELEASERESPONSE_OFFSET))(a1);
		}

		static ::System::Void HoYoNetworkSDK_ReleaseNetworkHandle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKSDK_RELEASENETWORKHANDLE_OFFSET))();
		}
	};
}
