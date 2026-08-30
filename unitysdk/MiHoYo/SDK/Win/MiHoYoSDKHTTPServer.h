#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Net::Sockets { class TcpListener; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }

#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_BEGINACCEPTTCPCLIENT_OFFSET UNITYSDK_OFFSET(0x18B0E980)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18B0E840)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_GETSTREAM_OFFSET UNITYSDK_OFFSET(0x18B0F0A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_GET_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x18B0E820)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x18B0E7E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_GET_PORT_OFFSET UNITYSDK_OFFSET(0x18B0E800)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_HANDLEREQUEST_OFFSET UNITYSDK_OFFSET(0x18B0EA60)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_SET_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x18B0E830)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x18B0E7F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_SET_PORT_OFFSET UNITYSDK_OFFSET(0x18B0E810)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_STARTASYNC_OFFSET UNITYSDK_OFFSET(0x18B0E900)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_START_OFFSET UNITYSDK_OFFSET(0x18AC1640)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_STOP_OFFSET UNITYSDK_OFFSET(0x18AC1C70)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC12E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER__STARTASYNC_B__17_0_OFFSET UNITYSDK_OFFSET(0x18B0F380)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER__START_B__16_0_OFFSET UNITYSDK_OFFSET(0x18B0F370)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKHTTPServer_TypeDefinitionIndex = 9344;

	class MiHoYoSDKHTTPServer : public ::System::Object
	{
	public:
		::System::String* ResourcePath; // 0x10
		::System::Net::Sockets::TcpListener* tcpListener; // 0x18
		::System::Security::Cryptography::X509Certificates::X509Certificate* _Certificate_k__BackingField; // 0x20
		::System::Boolean _IsRunning_k__BackingField; // 0x28
		::System::Int32 _Port_k__BackingField; // 0x2C

		::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Security::Cryptography::X509Certificates::X509Certificate* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void set_IsRunning(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_SET_ISRUNNING_OFFSET))(this, a1);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_GET_PORT_OFFSET))(this);
		}

		::System::Void set_Port(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_SET_PORT_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_Certificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_GET_CERTIFICATE_OFFSET))(this);
		}

		::System::Void set_Certificate(::System::Security::Cryptography::X509Certificates::X509Certificate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_SET_CERTIFICATE_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_FINALIZE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_START_OFFSET))(this);
		}

		::System::Void StartAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_STARTASYNC_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_STOP_OFFSET))(this);
		}

		::System::Void BeginAcceptTcpClient()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_BEGINACCEPTTCPCLIENT_OFFSET))(this);
		}

		::System::Void HandleRequest(::System::Net::Sockets::TcpClient* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::TcpClient*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_HANDLEREQUEST_OFFSET))(this, a1);
		}

		::System::IO::Stream* GetStream(::System::Net::Sockets::TcpClient* a1)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Net::Sockets::TcpClient*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER_GETSTREAM_OFFSET))(this, a1);
		}

		::System::Void _Start_b__16_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER__START_B__16_0_OFFSET))(this, a1);
		}

		::System::Void _StartAsync_b__17_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER__STARTASYNC_B__17_0_OFFSET))(this, a1);
		}
	};
}
