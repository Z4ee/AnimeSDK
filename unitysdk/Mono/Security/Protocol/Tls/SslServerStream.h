#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SecurityProtocolType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SslStreamBase.h"

namespace Mono::Security::Interface { class ValidationResult; }
namespace Mono::Security::Protocol::Tls { class CertificateValidationCallback2; }
namespace Mono::Security::Protocol::Tls { class CertificateValidationCallback; }
namespace Mono::Security::Protocol::Tls { class PrivateKeySelectionCallback; }
namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ADD_CLIENTCERTVALIDATION2_OFFSET UNITYSDK_OFFSET(0x1AF56CB0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ADD_CLIENTCERTVALIDATION_OFFSET UNITYSDK_OFFSET(0x1AF56A30)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ADD_PRIVATEKEYSELECTION_OFFSET UNITYSDK_OFFSET(0x1AF56B30)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_BEGINNEGOTIATEHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1AF570A0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF57070)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ENDNEGOTIATEHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1AF571D0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AF56FF0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_GET_CLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1AF56C30)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_GET_CLIENTCERTVALIDATIONDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AF56C70)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_GET_HAVEREMOTEVALIDATION2CALLBACK_OFFSET UNITYSDK_OFFSET(0x1AF57560)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_GET_PRIVATEKEYCERTSELECTIONDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AF56C90)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ONLOCALCERTIFICATESELECTION_OFFSET UNITYSDK_OFFSET(0x1AF574E0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ONLOCALPRIVATEKEYSELECTION_OFFSET UNITYSDK_OFFSET(0x1AF575A0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ONREMOTECERTIFICATEVALIDATION2_OFFSET UNITYSDK_OFFSET(0x1AF57570)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ONREMOTECERTIFICATEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1AF57530)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_RAISECLIENTCERTIFICATEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1AF57590)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_RAISEPRIVATEKEYSELECTION_OFFSET UNITYSDK_OFFSET(0x1AF55D40)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_REMOVE_CLIENTCERTVALIDATION2_OFFSET UNITYSDK_OFFSET(0x1AF56D30)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_REMOVE_CLIENTCERTVALIDATION_OFFSET UNITYSDK_OFFSET(0x1AF56AB0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_REMOVE_PRIVATEKEYSELECTION_OFFSET UNITYSDK_OFFSET(0x1AF56BB0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_SET_CLIENTCERTVALIDATIONDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AF56C80)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_SET_PRIVATEKEYCERTSELECTIONDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AF56CA0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF56E10)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AF56E40)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AF56DE0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AF56E70)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF56DB0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int SslServerStream_TypeDefinitionIndex = 2382;

	class SslServerStream : public ::Mono::Security::Protocol::Tls::SslStreamBase
	{
	public:
		::Mono::Security::Protocol::Tls::CertificateValidationCallback2* ClientCertValidation2; // 0x80
		::Mono::Security::Protocol::Tls::CertificateValidationCallback* ClientCertValidation; // 0x88
		::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback* PrivateKeySelection; // 0x90

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM__CTOR_OFFSET))(this, stream, serverCertificate);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Boolean ownsStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM__CTOR_1_OFFSET))(this, stream, serverCertificate, clientCertificateRequired, ownsStream);
		}

		::System::Void _ctor_2(::System::IO::Stream* stream, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Boolean requestClientCertificate, ::System::Boolean ownsStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM__CTOR_2_OFFSET))(this, stream, serverCertificate, clientCertificateRequired, requestClientCertificate, ownsStream);
		}

		::System::Void _ctor_3(::System::IO::Stream* stream, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Boolean ownsStream, ::Mono::Security::Protocol::Tls::SecurityProtocolType securityProtocolType)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Boolean, ::Mono::Security::Protocol::Tls::SecurityProtocolType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM__CTOR_3_OFFSET))(this, stream, serverCertificate, clientCertificateRequired, ownsStream, securityProtocolType);
		}

		::System::Void _ctor_4(::System::IO::Stream* stream, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Boolean requestClientCertificate, ::System::Boolean ownsStream, ::Mono::Security::Protocol::Tls::SecurityProtocolType securityProtocolType)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Mono::Security::Protocol::Tls::SecurityProtocolType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM__CTOR_4_OFFSET))(this, stream, serverCertificate, clientCertificateRequired, requestClientCertificate, ownsStream, securityProtocolType);
		}

		::System::Void add_ClientCertValidation(::Mono::Security::Protocol::Tls::CertificateValidationCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::CertificateValidationCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ADD_CLIENTCERTVALIDATION_OFFSET))(this, value);
		}

		::System::Void remove_ClientCertValidation(::Mono::Security::Protocol::Tls::CertificateValidationCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::CertificateValidationCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_REMOVE_CLIENTCERTVALIDATION_OFFSET))(this, value);
		}

		::System::Void add_PrivateKeySelection(::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ADD_PRIVATEKEYSELECTION_OFFSET))(this, value);
		}

		::System::Void remove_PrivateKeySelection(::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_REMOVE_PRIVATEKEYSELECTION_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_ClientCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_GET_CLIENTCERTIFICATE_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::CertificateValidationCallback* get_ClientCertValidationDelegate()
		{
			return ((::Mono::Security::Protocol::Tls::CertificateValidationCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_GET_CLIENTCERTVALIDATIONDELEGATE_OFFSET))(this);
		}

		::System::Void set_ClientCertValidationDelegate(::Mono::Security::Protocol::Tls::CertificateValidationCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::CertificateValidationCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_SET_CLIENTCERTVALIDATIONDELEGATE_OFFSET))(this, value);
		}

		::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback* get_PrivateKeyCertSelectionDelegate()
		{
			return ((::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_GET_PRIVATEKEYCERTSELECTIONDELEGATE_OFFSET))(this);
		}

		::System::Void set_PrivateKeyCertSelectionDelegate(::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_SET_PRIVATEKEYCERTSELECTIONDELEGATE_OFFSET))(this, value);
		}

		::System::Void add_ClientCertValidation2(::Mono::Security::Protocol::Tls::CertificateValidationCallback2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::CertificateValidationCallback2*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ADD_CLIENTCERTVALIDATION2_OFFSET))(this, value);
		}

		::System::Void remove_ClientCertValidation2(::Mono::Security::Protocol::Tls::CertificateValidationCallback2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::CertificateValidationCallback2*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_REMOVE_CLIENTCERTVALIDATION2_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::IAsyncResult* BeginNegotiateHandshake(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_BEGINNEGOTIATEHANDSHAKE_OFFSET))(this, callback, state);
		}

		::System::Void EndNegotiateHandshake(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ENDNEGOTIATEHANDSHAKE_OFFSET))(this, asyncResult);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* OnLocalCertificateSelection(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* serverRequestedCertificates)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ONLOCALCERTIFICATESELECTION_OFFSET))(this, clientCertificates, serverCertificate, targetHost, serverRequestedCertificates);
		}

		::System::Boolean OnRemoteCertificateValidation(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::Il2CppArray<::System::Int32>* errors)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ONREMOTECERTIFICATEVALIDATION_OFFSET))(this, certificate, errors);
		}

		::System::Boolean get_HaveRemoteValidation2Callback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_GET_HAVEREMOTEVALIDATION2CALLBACK_OFFSET))(this);
		}

		::Mono::Security::Interface::ValidationResult* OnRemoteCertificateValidation2(::Mono::Security::X509::X509CertificateCollection* collection)
		{
			return ((::Mono::Security::Interface::ValidationResult*(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ONREMOTECERTIFICATEVALIDATION2_OFFSET))(this, collection);
		}

		::System::Boolean RaiseClientCertificateValidation(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::Il2CppArray<::System::Int32>* certificateErrors)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_RAISECLIENTCERTIFICATEVALIDATION_OFFSET))(this, certificate, certificateErrors);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* OnLocalPrivateKeySelection(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::String* targetHost)
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_ONLOCALPRIVATEKEYSELECTION_OFFSET))(this, certificate, targetHost);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* RaisePrivateKeySelection(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::String* targetHost)
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSERVERSTREAM_RAISEPRIVATEKEYSELECTION_OFFSET))(this, certificate, targetHost);
		}
	};
}
