#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SecurityProtocolType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SslStreamBase.h"

namespace Mono::Security::Interface { class ValidationResult; }
namespace Mono::Security::Protocol::Tls { class CertificateSelectionCallback; }
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

#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ADD_CLIENTCERTSELECTION_OFFSET UNITYSDK_OFFSET(0x1B77ED50)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ADD_PRIVATEKEYSELECTION_OFFSET UNITYSDK_OFFSET(0x1B77EE50)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ADD_SERVERCERTVALIDATION2_OFFSET UNITYSDK_OFFSET(0x1B77F020)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ADD_SERVERCERTVALIDATION_OFFSET UNITYSDK_OFFSET(0x1B77EC50)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_BEGINNEGOTIATEHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1B77F710)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B77F650)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ENDNEGOTIATEHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1B77F8D0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B77F5D0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1B77EF60)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_GET_CLIENTCERTSELECTIONDELEGATE_OFFSET UNITYSDK_OFFSET(0x1B77EFE0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_GET_HAVEREMOTEVALIDATION2CALLBACK_OFFSET UNITYSDK_OFFSET(0x1B781110)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_GET_INPUTBUFFER_OFFSET UNITYSDK_OFFSET(0x1B77EF50)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_GET_PRIVATEKEYCERTSELECTIONDELEGATE_OFFSET UNITYSDK_OFFSET(0x1B77F000)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_GET_SELECTEDCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1B77EF90)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_GET_SERVERCERTVALIDATIONDELEGATE_OFFSET UNITYSDK_OFFSET(0x1B77EFC0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCWORKER_OFFSET UNITYSDK_OFFSET(0x1B77FA70)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ONLOCALCERTIFICATESELECTION_OFFSET UNITYSDK_OFFSET(0x1B7810F0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ONLOCALPRIVATEKEYSELECTION_OFFSET UNITYSDK_OFFSET(0x1B7811C0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ONREMOTECERTIFICATEVALIDATION2_OFFSET UNITYSDK_OFFSET(0x1B781120)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ONREMOTECERTIFICATEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1B781140)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_RAISECLIENTCERTIFICATESELECTION_OFFSET UNITYSDK_OFFSET(0x1B781190)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_RAISEPRIVATEKEYSELECTION_OFFSET UNITYSDK_OFFSET(0x1B7811E0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_RAISESERVERCERTIFICATEVALIDATION2_OFFSET UNITYSDK_OFFSET(0x1B781180)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_RAISESERVERCERTIFICATEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1B781170)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_REMOVE_CLIENTCERTSELECTION_OFFSET UNITYSDK_OFFSET(0x1B77EDD0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_REMOVE_PRIVATEKEYSELECTION_OFFSET UNITYSDK_OFFSET(0x1B77EED0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_REMOVE_SERVERCERTVALIDATION2_OFFSET UNITYSDK_OFFSET(0x1B77F0A0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_REMOVE_SERVERCERTVALIDATION_OFFSET UNITYSDK_OFFSET(0x1B77ECD0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_SAFEENDRECEIVERECORD_OFFSET UNITYSDK_OFFSET(0x1B77F680)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_SET_CLIENTCERTSELECTIONDELEGATE_OFFSET UNITYSDK_OFFSET(0x1B77EFF0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_SET_PRIVATEKEYCERTSELECTIONDELEGATE_OFFSET UNITYSDK_OFFSET(0x1B77F010)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_SET_SERVERCERTVALIDATIONDELEGATE_OFFSET UNITYSDK_OFFSET(0x1B77EFD0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B77F2E0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B77F490)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B77F4B0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B77F140)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77F120)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int SslClientStream_TypeDefinitionIndex = 2378;

	class SslClientStream : public ::Mono::Security::Protocol::Tls::SslStreamBase
	{
	public:
		::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback* PrivateKeySelection; // 0x80
		::Mono::Security::Protocol::Tls::CertificateValidationCallback* ServerCertValidation; // 0x88
		::Mono::Security::Protocol::Tls::CertificateSelectionCallback* ClientCertSelection; // 0x90
		::Mono::Security::Protocol::Tls::CertificateValidationCallback2* ServerCertValidation2; // 0x98

		::System::Void _ctor(::System::IO::Stream* stream, ::System::String* targetHost, ::System::Boolean ownsStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM__CTOR_OFFSET))(this, stream, targetHost, ownsStream);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509Certificate* clientCertificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM__CTOR_1_OFFSET))(this, stream, targetHost, clientCertificate);
		}

		::System::Void _ctor_2(::System::IO::Stream* stream, ::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM__CTOR_2_OFFSET))(this, stream, targetHost, clientCertificates);
		}

		::System::Void _ctor_3(::System::IO::Stream* stream, ::System::String* targetHost, ::System::Boolean ownsStream, ::Mono::Security::Protocol::Tls::SecurityProtocolType securityProtocolType)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*, ::System::Boolean, ::Mono::Security::Protocol::Tls::SecurityProtocolType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM__CTOR_3_OFFSET))(this, stream, targetHost, ownsStream, securityProtocolType);
		}

		::System::Void _ctor_4(::System::IO::Stream* stream, ::System::String* targetHost, ::System::Boolean ownsStream, ::Mono::Security::Protocol::Tls::SecurityProtocolType securityProtocolType, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*, ::System::Boolean, ::Mono::Security::Protocol::Tls::SecurityProtocolType, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM__CTOR_4_OFFSET))(this, stream, targetHost, ownsStream, securityProtocolType, clientCertificates);
		}

		::System::Void add_ServerCertValidation(::Mono::Security::Protocol::Tls::CertificateValidationCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::CertificateValidationCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ADD_SERVERCERTVALIDATION_OFFSET))(this, value);
		}

		::System::Void remove_ServerCertValidation(::Mono::Security::Protocol::Tls::CertificateValidationCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::CertificateValidationCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_REMOVE_SERVERCERTVALIDATION_OFFSET))(this, value);
		}

		::System::Void add_ClientCertSelection(::Mono::Security::Protocol::Tls::CertificateSelectionCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::CertificateSelectionCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ADD_CLIENTCERTSELECTION_OFFSET))(this, value);
		}

		::System::Void remove_ClientCertSelection(::Mono::Security::Protocol::Tls::CertificateSelectionCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::CertificateSelectionCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_REMOVE_CLIENTCERTSELECTION_OFFSET))(this, value);
		}

		::System::Void add_PrivateKeySelection(::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ADD_PRIVATEKEYSELECTION_OFFSET))(this, value);
		}

		::System::Void remove_PrivateKeySelection(::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_REMOVE_PRIVATEKEYSELECTION_OFFSET))(this, value);
		}

		::System::IO::Stream* get_InputBuffer()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_GET_INPUTBUFFER_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_GET_CLIENTCERTIFICATES_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_SelectedClientCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_GET_SELECTEDCLIENTCERTIFICATE_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::CertificateValidationCallback* get_ServerCertValidationDelegate()
		{
			return ((::Mono::Security::Protocol::Tls::CertificateValidationCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_GET_SERVERCERTVALIDATIONDELEGATE_OFFSET))(this);
		}

		::System::Void set_ServerCertValidationDelegate(::Mono::Security::Protocol::Tls::CertificateValidationCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::CertificateValidationCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_SET_SERVERCERTVALIDATIONDELEGATE_OFFSET))(this, value);
		}

		::Mono::Security::Protocol::Tls::CertificateSelectionCallback* get_ClientCertSelectionDelegate()
		{
			return ((::Mono::Security::Protocol::Tls::CertificateSelectionCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_GET_CLIENTCERTSELECTIONDELEGATE_OFFSET))(this);
		}

		::System::Void set_ClientCertSelectionDelegate(::Mono::Security::Protocol::Tls::CertificateSelectionCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::CertificateSelectionCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_SET_CLIENTCERTSELECTIONDELEGATE_OFFSET))(this, value);
		}

		::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback* get_PrivateKeyCertSelectionDelegate()
		{
			return ((::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_GET_PRIVATEKEYCERTSELECTIONDELEGATE_OFFSET))(this);
		}

		::System::Void set_PrivateKeyCertSelectionDelegate(::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_SET_PRIVATEKEYCERTSELECTIONDELEGATE_OFFSET))(this, value);
		}

		::System::Void add_ServerCertValidation2(::Mono::Security::Protocol::Tls::CertificateValidationCallback2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::CertificateValidationCallback2*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ADD_SERVERCERTVALIDATION2_OFFSET))(this, value);
		}

		::System::Void remove_ServerCertValidation2(::Mono::Security::Protocol::Tls::CertificateValidationCallback2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::CertificateValidationCallback2*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_REMOVE_SERVERCERTVALIDATION2_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void SafeEndReceiveRecord(::System::IAsyncResult* ar, ::System::Boolean ignoreEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_SAFEENDRECEIVERECORD_OFFSET))(this, ar, ignoreEmpty);
		}

		::System::IAsyncResult* BeginNegotiateHandshake(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_BEGINNEGOTIATEHANDSHAKE_OFFSET))(this, callback, state);
		}

		::System::Void EndNegotiateHandshake(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ENDNEGOTIATEHANDSHAKE_OFFSET))(this, result);
		}

		::System::Void NegotiateAsyncWorker(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCWORKER_OFFSET))(this, result);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* OnLocalCertificateSelection(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* serverRequestedCertificates)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ONLOCALCERTIFICATESELECTION_OFFSET))(this, clientCertificates, serverCertificate, targetHost, serverRequestedCertificates);
		}

		::System::Boolean get_HaveRemoteValidation2Callback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_GET_HAVEREMOTEVALIDATION2CALLBACK_OFFSET))(this);
		}

		::Mono::Security::Interface::ValidationResult* OnRemoteCertificateValidation2(::Mono::Security::X509::X509CertificateCollection* collection)
		{
			return ((::Mono::Security::Interface::ValidationResult*(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ONREMOTECERTIFICATEVALIDATION2_OFFSET))(this, collection);
		}

		::System::Boolean OnRemoteCertificateValidation(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::Il2CppArray<::System::Int32>* errors)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ONREMOTECERTIFICATEVALIDATION_OFFSET))(this, certificate, errors);
		}

		::System::Boolean RaiseServerCertificateValidation(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::Il2CppArray<::System::Int32>* certificateErrors)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_RAISESERVERCERTIFICATEVALIDATION_OFFSET))(this, certificate, certificateErrors);
		}

		::Mono::Security::Interface::ValidationResult* RaiseServerCertificateValidation2(::Mono::Security::X509::X509CertificateCollection* collection)
		{
			return ((::Mono::Security::Interface::ValidationResult*(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_RAISESERVERCERTIFICATEVALIDATION2_OFFSET))(this, collection);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* RaiseClientCertificateSelection(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* serverRequestedCertificates)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_RAISECLIENTCERTIFICATESELECTION_OFFSET))(this, clientCertificates, serverCertificate, targetHost, serverRequestedCertificates);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* OnLocalPrivateKeySelection(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::String* targetHost)
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_ONLOCALPRIVATEKEYSELECTION_OFFSET))(this, certificate, targetHost);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* RaisePrivateKeySelection(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::String* targetHost)
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_RAISEPRIVATEKEYSELECTION_OFFSET))(this, certificate, targetHost);
		}
	};
}
