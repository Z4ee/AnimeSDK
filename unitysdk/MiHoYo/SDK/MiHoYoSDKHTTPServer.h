#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Net::Sockets { class TcpListener; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }

#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER_BEGINACCEPTTCPCLIENT_OFFSET UNITYSDK_OFFSET(0x8514330)
#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x8514000)
#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER_GETSTREAM_OFFSET UNITYSDK_OFFSET(0x8514A50)
#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER_GET_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x8513EF0)
#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x8513EB0)
#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER_GET_PORT_OFFSET UNITYSDK_OFFSET(0x8513ED0)
#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER_HANDLEREQUEST_OFFSET UNITYSDK_OFFSET(0x8514410)
#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER_SET_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x8513F00)
#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x8513EC0)
#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER_SET_PORT_OFFSET UNITYSDK_OFFSET(0x8513EE0)
#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER_STARTASYNC_OFFSET UNITYSDK_OFFSET(0x85142D0)
#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER_START_OFFSET UNITYSDK_OFFSET(0x85140D0)
#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER_STOP_OFFSET UNITYSDK_OFFSET(0x8514090)
#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x8513F10)
#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER__STARTASYNC_B__17_0_OFFSET UNITYSDK_OFFSET(0x8514D60)
#define MIHOYO_SDK_MIHOYOSDKHTTPSERVER__START_B__16_0_OFFSET UNITYSDK_OFFSET(0x8514D50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKHTTPServer_TypeDefinitionIndex = 37055;

	class MiHoYoSDKHTTPServer : public ::System::Object
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509Certificate* _Certificate_k__BackingField; // 0x10
		::System::Net::Sockets::TcpListener* tcpListener; // 0x18
		::System::String* ResourcePath; // 0x20
		::System::Boolean _IsRunning_k__BackingField; // 0x28
		::System::Int32 _Port_k__BackingField; // 0x2C

		::System::Void _ctor(::System::String* resourcePath, ::System::Int32 port, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER__CTOR_OFFSET))(this, resourcePath, port, certificate);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void set_IsRunning(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER_SET_ISRUNNING_OFFSET))(this, value);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER_GET_PORT_OFFSET))(this);
		}

		::System::Void set_Port(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER_SET_PORT_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_Certificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER_GET_CERTIFICATE_OFFSET))(this);
		}

		::System::Void set_Certificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER_SET_CERTIFICATE_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER_FINALIZE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER_START_OFFSET))(this);
		}

		::System::Void StartAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER_STARTASYNC_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER_STOP_OFFSET))(this);
		}

		::System::Void BeginAcceptTcpClient()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER_BEGINACCEPTTCPCLIENT_OFFSET))(this);
		}

		::System::Void HandleRequest(::System::Net::Sockets::TcpClient* client)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::TcpClient*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER_HANDLEREQUEST_OFFSET))(this, client);
		}

		::System::IO::Stream* GetStream(::System::Net::Sockets::TcpClient* client)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Net::Sockets::TcpClient*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER_GETSTREAM_OFFSET))(this, client);
		}

		::System::Void _Start_b__16_0(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER__START_B__16_0_OFFSET))(this, _);
		}

		::System::Void _StartAsync_b__17_0(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPSERVER__STARTASYNC_B__17_0_OFFSET))(this, _);
		}
	};
}
