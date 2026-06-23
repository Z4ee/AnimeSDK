#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebExceptionStatus.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class IMonoSslStream; }
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System::IO { class Stream; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net::Sockets { class NetworkStream; }

#define MONO_NET_SECURITY_MONOTLSSTREAM_CREATESTREAM_OFFSET UNITYSDK_OFFSET(0x1C6BF860)
#define MONO_NET_SECURITY_MONOTLSSTREAM_GET_CERTIFICATEVALIDATIONFAILED_OFFSET UNITYSDK_OFFSET(0x1C6BF730)
#define MONO_NET_SECURITY_MONOTLSSTREAM_GET_EXCEPTIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1C6BF720)
#define MONO_NET_SECURITY_MONOTLSSTREAM_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1C6BF700)
#define MONO_NET_SECURITY_MONOTLSSTREAM_GET_SSLSTREAM_OFFSET UNITYSDK_OFFSET(0x1C6BF710)
#define MONO_NET_SECURITY_MONOTLSSTREAM_SET_CERTIFICATEVALIDATIONFAILED_OFFSET UNITYSDK_OFFSET(0x1C6BF740)
#define MONO_NET_SECURITY_MONOTLSSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6BF750)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MonoTlsStream_TypeDefinitionIndex = 2630;

	class MonoTlsStream : public ::System::Object
	{
	public:
		::Mono::Security::Interface::MonoTlsSettings* settings; // 0x10
		::Mono::Security::Interface::IMonoSslStream* sslStream; // 0x18
		::System::Net::Sockets::NetworkStream* networkStream; // 0x20
		::Mono::Security::Interface::MonoTlsProvider* provider; // 0x28
		::System::Net::HttpWebRequest* request; // 0x30
		::System::Boolean _CertificateValidationFailed_k__BackingField; // 0x38
		::System::Net::WebExceptionStatus status; // 0x3C

		::System::Void _ctor(::System::Net::HttpWebRequest* request, ::System::Net::Sockets::NetworkStream* networkStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::Net::Sockets::NetworkStream*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSSTREAM__CTOR_OFFSET))(this, request, networkStream);
		}

		::System::Net::HttpWebRequest* get_Request()
		{
			return ((::System::Net::HttpWebRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSSTREAM_GET_REQUEST_OFFSET))(this);
		}

		::Mono::Security::Interface::IMonoSslStream* get_SslStream()
		{
			return ((::Mono::Security::Interface::IMonoSslStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSSTREAM_GET_SSLSTREAM_OFFSET))(this);
		}

		::System::Net::WebExceptionStatus get_ExceptionStatus()
		{
			return ((::System::Net::WebExceptionStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSSTREAM_GET_EXCEPTIONSTATUS_OFFSET))(this);
		}

		::System::Boolean get_CertificateValidationFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSSTREAM_GET_CERTIFICATEVALIDATIONFAILED_OFFSET))(this);
		}

		::System::Void set_CertificateValidationFailed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSSTREAM_SET_CERTIFICATEVALIDATIONFAILED_OFFSET))(this, value);
		}

		::System::IO::Stream* CreateStream(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSSTREAM_CREATESTREAM_OFFSET))(this, buffer);
		}
	};
}
