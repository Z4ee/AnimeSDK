#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SecurityProtocolType.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/Net/Security/AuthenticatedStream.h"
#include "unitysdk/System/Security/Authentication/CipherAlgorithmType.h"
#include "unitysdk/System/Security/Authentication/ExchangeAlgorithmType.h"
#include "unitysdk/System/Security/Authentication/HashAlgorithmType.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"

namespace Mono::Security::Interface { class ICertificateValidator; }
namespace Mono::Security::Interface { class MonoTlsConnectionInfo; }
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace Mono::Security::Protocol::Tls { class SslStreamBase; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net { class TransportContext; }
namespace System::Net::Security { class SslStream; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }
namespace System::Threading::Tasks { class Task; }

#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASCLIENTASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D3ED900)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASCLIENTASYNC_OFFSET UNITYSDK_OFFSET(0x1D3ED710)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASCLIENT_1_OFFSET UNITYSDK_OFFSET(0x1D3ECFE0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x1D3ECED0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASSERVERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D3EDCF0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASSERVERASYNC_OFFSET UNITYSDK_OFFSET(0x1D3EDB00)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASSERVER_1_OFFSET UNITYSDK_OFFSET(0x1D3ED060)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASSERVER_OFFSET UNITYSDK_OFFSET(0x1D3ED030)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_BEGINAUTHENTICATEASCLIENT_1_OFFSET UNITYSDK_OFFSET(0x1D3EC870)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_BEGINAUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x1D3EC740)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_BEGINAUTHENTICATEASSERVER_1_OFFSET UNITYSDK_OFFSET(0x1D3ECCA0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_BEGINAUTHENTICATEASSERVER_OFFSET UNITYSDK_OFFSET(0x1D3ECC60)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1D3ECBD0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1D3ECB40)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_CHECKCONNECTIONAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1D3EBC10)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D3ED0B0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_ENDAUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x1D3ED170)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_ENDAUTHENTICATEASSERVER_OFFSET UNITYSDK_OFFSET(0x1D3ED230)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1D3ED2F0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1D3ED370)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1D3ED3F0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GETCONNECTIONINFO_OFFSET UNITYSDK_OFFSET(0x1D3EDFD0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GETMONOSSLPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1D3ECB20)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1D3EB620)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1D3EB650)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D3EB680)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1D3EB6B0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_CHECKCERTREVOCATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1D3EB980)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_CIPHERALGORITHM_OFFSET UNITYSDK_OFFSET(0x1D3EB9A0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_CIPHERSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1D3EBC80)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_HASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x1D3EBD70)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_HASHSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1D3EBEE0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1D3EB790)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_ISENCRYPTED_OFFSET UNITYSDK_OFFSET(0x1D3EB7A0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_ISMUTUALLYAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1D3EB7B0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x1D3EB840)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_ISSIGNED_OFFSET UNITYSDK_OFFSET(0x1D3EB8B0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_KEYEXCHANGEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1D3EBF50)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_KEYEXCHANGESTRENGTH_OFFSET UNITYSDK_OFFSET(0x1D3EC0D0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1D3EB6E0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_LOCALCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1D3EC240)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1D3EB710)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1D3EDFC0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D3EB8C0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_REMOTECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1D3EC3A0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_SSLPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1D3EC4E0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_SSLSTREAM_OFFSET UNITYSDK_OFFSET(0x1D3EDFB0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D3EB920)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_MONO_SECURITY_INTERFACE_IMONOSSLSTREAM_GET_AUTHENTICATEDSTREAM_OFFSET UNITYSDK_OFFSET(0x1D3EDF50)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_MONO_SECURITY_INTERFACE_IMONOSSLSTREAM_GET_INTERNALLOCALCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1D3EC140)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_MONO_SECURITY_INTERFACE_IMONOSSLSTREAM_GET_TRANSPORTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1D3EDF60)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_MONO_SECURITY_INTERFACE_IMONOSSLSTREAM_SHUTDOWNASYNC_OFFSET UNITYSDK_OFFSET(0x1D3EDEF0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_ONCERTIFICATESELECTION_OFFSET UNITYSDK_OFFSET(0x1D3EC5E0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1D3ED470)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1D3ED570)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1D3ED5C0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1D3EB740)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D3EB8F0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D3EB950)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1D3ED6F0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1D3ED5F0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EB560)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int LegacySslStream_TypeDefinitionIndex = 2643;

	class LegacySslStream : public ::System::Net::Security::AuthenticatedStream
	{
	public:
		::Mono::Security::Interface::MonoTlsProvider* _Provider_k__BackingField; // 0x38
		::System::Net::Security::SslStream* _SslStream_k__BackingField; // 0x40
		::Mono::Security::Interface::ICertificateValidator* certificateValidator; // 0x48
		::Mono::Security::Protocol::Tls::SslStreamBase* ssl_stream; // 0x50

		::System::Void _ctor(::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner, ::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::System::Net::Security::SslStream*, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM__CTOR_OFFSET))(this, innerStream, leaveInnerStreamOpen, owner, provider, settings);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanTimeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_CANTIMEOUT_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_ISAUTHENTICATED_OFFSET))(this);
		}

		::System::Boolean get_IsEncrypted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_ISENCRYPTED_OFFSET))(this);
		}

		::System::Boolean get_IsMutuallyAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_ISMUTUALLYAUTHENTICATED_OFFSET))(this);
		}

		::System::Boolean get_IsServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_ISSERVER_OFFSET))(this);
		}

		::System::Boolean get_IsSigned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_ISSIGNED_OFFSET))(this);
		}

		::System::Int32 get_ReadTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_READTIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_SET_READTIMEOUT_OFFSET))(this, value);
		}

		::System::Int32 get_WriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_WRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_WriteTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_SET_WRITETIMEOUT_OFFSET))(this, value);
		}

		::System::Boolean get_CheckCertRevocationStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_CHECKCERTREVOCATIONSTATUS_OFFSET))(this);
		}

		::System::Security::Authentication::CipherAlgorithmType get_CipherAlgorithm()
		{
			return ((::System::Security::Authentication::CipherAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_CIPHERALGORITHM_OFFSET))(this);
		}

		::System::Int32 get_CipherStrength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_CIPHERSTRENGTH_OFFSET))(this);
		}

		::System::Security::Authentication::HashAlgorithmType get_HashAlgorithm()
		{
			return ((::System::Security::Authentication::HashAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_HASHALGORITHM_OFFSET))(this);
		}

		::System::Int32 get_HashStrength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_HASHSTRENGTH_OFFSET))(this);
		}

		::System::Security::Authentication::ExchangeAlgorithmType get_KeyExchangeAlgorithm()
		{
			return ((::System::Security::Authentication::ExchangeAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_KEYEXCHANGEALGORITHM_OFFSET))(this);
		}

		::System::Int32 get_KeyExchangeStrength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_KEYEXCHANGESTRENGTH_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* Mono_Security_Interface_IMonoSslStream_get_InternalLocalCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_MONO_SECURITY_INTERFACE_IMONOSSLSTREAM_GET_INTERNALLOCALCERTIFICATE_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_LOCALCERTIFICATE_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_RemoteCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_REMOTECERTIFICATE_OFFSET))(this);
		}

		::System::Security::Authentication::SslProtocols get_SslProtocol()
		{
			return ((::System::Security::Authentication::SslProtocols(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_SSLPROTOCOL_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* OnCertificateSelection(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCerts, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCert, ::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* serverRequestedCerts)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_ONCERTIFICATESELECTION_OFFSET))(this, clientCerts, serverCert, targetHost, serverRequestedCerts);
		}

		::System::IAsyncResult* BeginAuthenticateAsClient(::System::String* targetHost, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_BEGINAUTHENTICATEASCLIENT_OFFSET))(this, targetHost, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginAuthenticateAsClient_1(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Security::Authentication::SslProtocols enabledSslProtocols, ::System::Boolean checkCertificateRevocation, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_BEGINAUTHENTICATEASCLIENT_1_OFFSET))(this, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_BEGINREAD_OFFSET))(this, buffer, offset, count, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginAuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_BEGINAUTHENTICATEASSERVER_OFFSET))(this, serverCertificate, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginAuthenticateAsServer_1(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Security::Authentication::SslProtocols enabledSslProtocols, ::System::Boolean checkCertificateRevocation, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Security::Authentication::SslProtocols, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_BEGINAUTHENTICATEASSERVER_1_OFFSET))(this, serverCertificate, clientCertificateRequired, enabledSslProtocols, checkCertificateRevocation, asyncCallback, asyncState);
		}

		::Mono::Security::Protocol::Tls::SecurityProtocolType GetMonoSslProtocol(::System::Security::Authentication::SslProtocols ms)
		{
			return ((::Mono::Security::Protocol::Tls::SecurityProtocolType(*)(::PVOID, ::System::Security::Authentication::SslProtocols))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GETMONOSSLPROTOCOL_OFFSET))(this, ms);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, asyncCallback, asyncState);
		}

		::System::Void AuthenticateAsClient(::System::String* targetHost)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASCLIENT_OFFSET))(this, targetHost);
		}

		::System::Void AuthenticateAsClient_1(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Security::Authentication::SslProtocols enabledSslProtocols, ::System::Boolean checkCertificateRevocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASCLIENT_1_OFFSET))(this, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation);
		}

		::System::Void AuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASSERVER_OFFSET))(this, serverCertificate);
		}

		::System::Void AuthenticateAsServer_1(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Security::Authentication::SslProtocols enabledSslProtocols, ::System::Boolean checkCertificateRevocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Security::Authentication::SslProtocols, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASSERVER_1_OFFSET))(this, serverCertificate, clientCertificateRequired, enabledSslProtocols, checkCertificateRevocation);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void EndAuthenticateAsClient(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_ENDAUTHENTICATEASCLIENT_OFFSET))(this, asyncResult);
		}

		::System::Void EndAuthenticateAsServer(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_ENDAUTHENTICATEASSERVER_OFFSET))(this, asyncResult);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Write_1(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_WRITE_1_OFFSET))(this, buffer);
		}

		::System::Void CheckConnectionAuthenticated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_CHECKCONNECTIONAUTHENTICATED_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* AuthenticateAsClientAsync(::System::String* targetHost)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASCLIENTASYNC_OFFSET))(this, targetHost);
		}

		::System::Threading::Tasks::Task* AuthenticateAsClientAsync_1(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Security::Authentication::SslProtocols enabledSslProtocols, ::System::Boolean checkCertificateRevocation)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASCLIENTASYNC_1_OFFSET))(this, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation);
		}

		::System::Threading::Tasks::Task* AuthenticateAsServerAsync(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASSERVERASYNC_OFFSET))(this, serverCertificate);
		}

		::System::Threading::Tasks::Task* AuthenticateAsServerAsync_1(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Security::Authentication::SslProtocols enabledSslProtocols, ::System::Boolean checkCertificateRevocation)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Security::Authentication::SslProtocols, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_AUTHENTICATEASSERVERASYNC_1_OFFSET))(this, serverCertificate, clientCertificateRequired, enabledSslProtocols, checkCertificateRevocation);
		}

		::System::Threading::Tasks::Task* Mono_Security_Interface_IMonoSslStream_ShutdownAsync()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_MONO_SECURITY_INTERFACE_IMONOSSLSTREAM_SHUTDOWNASYNC_OFFSET))(this);
		}

		::System::Net::Security::AuthenticatedStream* Mono_Security_Interface_IMonoSslStream_get_AuthenticatedStream()
		{
			return ((::System::Net::Security::AuthenticatedStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_MONO_SECURITY_INTERFACE_IMONOSSLSTREAM_GET_AUTHENTICATEDSTREAM_OFFSET))(this);
		}

		::System::Net::TransportContext* Mono_Security_Interface_IMonoSslStream_get_TransportContext()
		{
			return ((::System::Net::TransportContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_MONO_SECURITY_INTERFACE_IMONOSSLSTREAM_GET_TRANSPORTCONTEXT_OFFSET))(this);
		}

		::System::Net::Security::SslStream* get_SslStream()
		{
			return ((::System::Net::Security::SslStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_SSLSTREAM_OFFSET))(this);
		}

		::Mono::Security::Interface::MonoTlsProvider* get_Provider()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GET_PROVIDER_OFFSET))(this);
		}

		::Mono::Security::Interface::MonoTlsConnectionInfo* GetConnectionInfo()
		{
			return ((::Mono::Security::Interface::MonoTlsConnectionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM_GETCONNECTIONINFO_OFFSET))(this);
		}
	};
}
