#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SslClientStream.h"

namespace System::IO { class Stream; }
namespace System::Net { class HttpWebRequest; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_SECURITY_PROTOCOL_TLS_HTTPSCLIENTSTREAM_GET_TRUSTFAILURE_OFFSET UNITYSDK_OFFSET(0x1C483F40)
#define MONO_SECURITY_PROTOCOL_TLS_HTTPSCLIENTSTREAM_RAISESERVERCERTIFICATEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1C483F60)
#define MONO_SECURITY_PROTOCOL_TLS_HTTPSCLIENTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C483B60)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int HttpsClientStream_TypeDefinitionIndex = 2361;

	class HttpsClientStream : public ::Mono::Security::Protocol::Tls::SslClientStream
	{
	public:
		::System::Net::HttpWebRequest* _request; // 0xA0
		::System::Int32 _status; // 0xA8

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Net::HttpWebRequest* request, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Net::HttpWebRequest*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HTTPSCLIENTSTREAM__CTOR_OFFSET))(this, stream, clientCertificates, request, buffer);
		}

		::System::Boolean get_TrustFailure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HTTPSCLIENTSTREAM_GET_TRUSTFAILURE_OFFSET))(this);
		}

		::System::Boolean RaiseServerCertificateValidation(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::Il2CppArray<::System::Int32>* certificateErrors)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HTTPSCLIENTSTREAM_RAISESERVERCERTIFICATEVALIDATION_OFFSET))(this, certificate, certificateErrors);
		}
	};
}
