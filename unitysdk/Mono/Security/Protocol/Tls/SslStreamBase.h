#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/CipherAlgorithmType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/ExchangeAlgorithmType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/HashAlgorithmType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SecurityProtocolType.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace Mono::Security::Interface { class ValidationResult; }
namespace Mono::Security::Protocol::Tls { class Context; }
namespace Mono::Security::Protocol::Tls { class RecordProtocol; }
namespace Mono::Security::Protocol::Tls { class SslStreamBase_InternalAsyncResult; }
namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class MemoryStream; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }
namespace System::Threading { class ManualResetEvent; }

#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ASYNCHANDSHAKECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BD879A0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_BEGINNEGOTIATEHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1BD88750)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1BD890E0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1BD8A190)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x1BD89340)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1BD89F70)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BD8BB00)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ENDNEGOTIATEHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1BD889A0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1BD8A3F0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1BD8A680)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BD8BA90)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_FLUSH_OFFSET UNITYSDK_OFFSET(0x1BD8A890)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1BD8B930)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1BD8B960)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1BD8B970)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_CHECKCERTREVOCATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1BD88B40)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_CIPHERALGORITHM_OFFSET UNITYSDK_OFFSET(0x1BD88B60)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_CIPHERSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1BD88BF0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_HASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x1BD88C80)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_HASHSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1BD88D10)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_KEYEXCHANGEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1BD88E30)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_KEYEXCHANGESTRENGTH_OFFSET UNITYSDK_OFFSET(0x1BD88DB0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1BD8B9A0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_MIGHTNEEDHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1BD88590)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1BD8B9F0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_SECURITYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1BD88EC0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_SERVERCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1BD890B0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_SERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1BD88F70)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALBEGINREAD_OFFSET UNITYSDK_OFFSET(0x1BD87F00)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALBEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1BD87CE0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALREADCALLBACK_INNER_OFFSET UNITYSDK_OFFSET(0x1BD89420)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALREADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BD89C40)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALWRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BD89F80)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_NEGOTIATEHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1BD88670)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_RAISELOCALCERTIFICATESELECTION_OFFSET UNITYSDK_OFFSET(0x1BD88AE0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_RAISELOCALPRIVATEKEYSELECTION_OFFSET UNITYSDK_OFFSET(0x1BD88B30)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_RAISEREMOTECERTIFICATEVALIDATION2_OFFSET UNITYSDK_OFFSET(0x1BD88B20)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_RAISEREMOTECERTIFICATEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1BD88B10)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_READ_1_OFFSET UNITYSDK_OFFSET(0x1BD8A940)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_READ_OFFSET UNITYSDK_OFFSET(0x1BD8A920)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_RESETBUFFER_OFFSET UNITYSDK_OFFSET(0x1BD893B0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_SEEK_OFFSET UNITYSDK_OFFSET(0x1BD8B4E0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1BD8B530)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_SET_CHECKCERTREVOCATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1BD88B50)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1BD8BA40)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1BD8B5A0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD8B580)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD8BC00)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD876E0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int SslStreamBase_TypeDefinitionIndex = 2383;

	class SslStreamBase : public ::System::IO::Stream
	{
	public:
		static ::System::Threading::ManualResetEvent** StaticGet_record_processing()
		{
			return (::System::Threading::ManualResetEvent**)Il2CppClass::FromTypeDefinitionIndex(SslStreamBase_TypeDefinitionIndex)->GetStaticField(0x2410);
		}
		::System::IO::MemoryStream* inputBuffer; // 0x28
		::Mono::Security::Protocol::Tls::Context* context; // 0x30
		::Mono::Security::Protocol::Tls::RecordProtocol* protocol; // 0x38
		::System::Object* negotiate; // 0x40
		::System::Object* write; // 0x48
		::System::IO::MemoryStream* recordStream; // 0x50
		::System::Threading::ManualResetEvent* negotiationComplete; // 0x58
		::Il2CppArray<::System::Byte>* recbuf; // 0x60
		::System::Object* read; // 0x68
		::System::IO::Stream* innerStream; // 0x70
		::System::Boolean checkCertRevocationStatus; // 0x78
		::System::Boolean disposed; // 0x79
		::System::Boolean ownsStream; // 0x7A

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Boolean ownsStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE__CTOR_OFFSET))(this, stream, ownsStream);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE__CCTOR_OFFSET))();
		}

		::System::Void AsyncHandshakeCallback(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ASYNCHANDSHAKECALLBACK_OFFSET))(this, asyncResult);
		}

		::System::Boolean get_MightNeedHandshake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_MIGHTNEEDHANDSHAKE_OFFSET))(this);
		}

		::System::Void NegotiateHandshake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_NEGOTIATEHANDSHAKE_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* RaiseLocalCertificateSelection(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* requestedCertificates)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_RAISELOCALCERTIFICATESELECTION_OFFSET))(this, certificates, remoteCertificate, targetHost, requestedCertificates);
		}

		::System::Boolean RaiseRemoteCertificateValidation(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::Il2CppArray<::System::Int32>* errors)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_RAISEREMOTECERTIFICATEVALIDATION_OFFSET))(this, certificate, errors);
		}

		::Mono::Security::Interface::ValidationResult* RaiseRemoteCertificateValidation2(::Mono::Security::X509::X509CertificateCollection* collection)
		{
			return ((::Mono::Security::Interface::ValidationResult*(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_RAISEREMOTECERTIFICATEVALIDATION2_OFFSET))(this, collection);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* RaiseLocalPrivateKeySelection(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::String* targetHost)
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_RAISELOCALPRIVATEKEYSELECTION_OFFSET))(this, certificate, targetHost);
		}

		::System::Boolean get_CheckCertRevocationStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_CHECKCERTREVOCATIONSTATUS_OFFSET))(this);
		}

		::System::Void set_CheckCertRevocationStatus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_SET_CHECKCERTREVOCATIONSTATUS_OFFSET))(this, value);
		}

		::Mono::Security::Protocol::Tls::CipherAlgorithmType get_CipherAlgorithm()
		{
			return ((::Mono::Security::Protocol::Tls::CipherAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_CIPHERALGORITHM_OFFSET))(this);
		}

		::System::Int32 get_CipherStrength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_CIPHERSTRENGTH_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::HashAlgorithmType get_HashAlgorithm()
		{
			return ((::Mono::Security::Protocol::Tls::HashAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_HASHALGORITHM_OFFSET))(this);
		}

		::System::Int32 get_HashStrength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_HASHSTRENGTH_OFFSET))(this);
		}

		::System::Int32 get_KeyExchangeStrength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_KEYEXCHANGESTRENGTH_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::ExchangeAlgorithmType get_KeyExchangeAlgorithm()
		{
			return ((::Mono::Security::Protocol::Tls::ExchangeAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_KEYEXCHANGEALGORITHM_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::SecurityProtocolType get_SecurityProtocol()
		{
			return ((::Mono::Security::Protocol::Tls::SecurityProtocolType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_SECURITYPROTOCOL_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_ServerCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_SERVERCERTIFICATE_OFFSET))(this);
		}

		::Mono::Security::X509::X509CertificateCollection* get_ServerCertificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_SERVERCERTIFICATES_OFFSET))(this);
		}

		::System::Boolean BeginNegotiateHandshake(::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult* asyncResult)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_BEGINNEGOTIATEHANDSHAKE_OFFSET))(this, asyncResult);
		}

		::System::Void EndNegotiateHandshake(::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ENDNEGOTIATEHANDSHAKE_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_BEGINREAD_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::Void InternalBeginRead(::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALBEGINREAD_OFFSET))(this, asyncResult);
		}

		::System::Void InternalReadCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALREADCALLBACK_OFFSET))(this, result);
		}

		::System::Void InternalReadCallback_inner(::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult* internalResult, ::Il2CppArray<::System::Byte>* recbuf, ::Il2CppArray<::System::Object*>* state, ::System::Boolean didRead, ::System::Int32 n)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALREADCALLBACK_INNER_OFFSET))(this, internalResult, recbuf, state, didRead, n);
		}

		::System::Void InternalBeginWrite(::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALBEGINWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void InternalWriteCallback(::System::IAsyncResult* ar)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALWRITECALLBACK_OFFSET))(this, ar);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_BEGINWRITE_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_FLUSH_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_READ_OFFSET))(this, buffer);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_READ_1_OFFSET))(this, buffer, offset, count);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_WRITE_OFFSET))(this, buffer);
		}

		::System::Void Write_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_WRITE_1_OFFSET))(this, buffer, offset, count);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void resetBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_RESETBUFFER_OFFSET))(this);
		}

		::System::Void checkDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_CHECKDISPOSED_OFFSET))(this);
		}
	};
}
