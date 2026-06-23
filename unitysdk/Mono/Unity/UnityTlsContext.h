#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/MobileTlsContext.h"
#include "unitysdk/Mono/Security/Interface/TlsProtocols.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_key.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_key_ref.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list_ref.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509name.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509verify_result.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Security::Interface { class MonoTlsConnectionInfo; }
namespace Mono::Unity { class UnityTls_unitytls_tlsctx_certificate_callback; }
namespace Mono::Unity { class UnityTls_unitytls_tlsctx_read_callback; }
namespace Mono::Unity { class UnityTls_unitytls_tlsctx_trace_callback; }
namespace Mono::Unity { class UnityTls_unitytls_tlsctx_write_callback; }
namespace Mono::Unity { class UnityTls_unitytls_tlsctx_x509verify_callback; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1B3E69C0)
#define MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3E3AD0)
#define MONO_UNITY_UNITYTLSCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B3E5A00)
#define MONO_UNITY_UNITYTLSCONTEXT_EXTRACTNATIVEKEYANDCHAINFROMMANAGEDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1B3E4D60)
#define MONO_UNITY_UNITYTLSCONTEXT_FINISHHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1B3E60A0)
#define MONO_UNITY_UNITYTLSCONTEXT_FLUSH_OFFSET UNITYSDK_OFFSET(0x1B3E5180)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_CONNECTIONINFO_OFFSET UNITYSDK_OFFSET(0x1B3E5120)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_HASCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B3E5100)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1B3E5110)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_ISREMOTECERTIFICATEAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B3E5130)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_LOCALCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1B3E5140)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_NEGOTIATEDPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B3E5160)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_REMOTECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1B3E5150)
#define MONO_UNITY_UNITYTLSCONTEXT_PROCESSHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1B3E5E00)
#define MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1B3E6520)
#define MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3E3870)
#define MONO_UNITY_UNITYTLSCONTEXT_READ_OFFSET UNITYSDK_OFFSET(0x1B3E5190)
#define MONO_UNITY_UNITYTLSCONTEXT_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1B3E5660)
#define MONO_UNITY_UNITYTLSCONTEXT_STARTHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1B3E5B00)
#define MONO_UNITY_UNITYTLSCONTEXT_TRACECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3E3C20)
#define MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1B3E6890)
#define MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3E39B0)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1B3E6330)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3E3730)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITE_OFFSET UNITYSDK_OFFSET(0x1B3E5400)
#define MONO_UNITY_UNITYTLSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E3DD0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTlsContext_TypeDefinitionIndex = 2579;

	class UnityTlsContext : public ::Mono::Net::Security::MobileTlsContext
	{
	public:
		// static const ::System::Boolean ActivateTracing; // 0x0
		::Il2CppArray<::System::Byte>* readBuffer; // 0x48
		::Il2CppArray<::System::Byte>* writeBuffer; // 0x50
		::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* verifyCallback; // 0x58
		::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate; // 0x60
		::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* certificateCallback; // 0x68
		::Mono::Security::Interface::MonoTlsConnectionInfo* connectioninfo; // 0x70
		::System::Security::Cryptography::X509Certificates::X509Certificate* localClientCertificate; // 0x78
		::System::Exception* lastException; // 0x80
		::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback* traceCallback; // 0x88
		::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* readCallback; // 0x90
		::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* writeCallback; // 0x98
		::Mono::Unity::UnityTls_unitytls_key* requestedClientKey; // 0xA0
		::System::Boolean isAuthenticated; // 0xA8
		::System::Boolean closedGraceful; // 0xA9
		::System::Boolean hasContext; // 0xAA
		::System::Runtime::InteropServices::GCHandle handle; // 0xAC
		::Mono::Unity::UnityTls_unitytls_x509list* requestedClientCertChain; // 0xB0
		::Mono::Unity::UnityTls_unitytls_tlsctx* tlsContext; // 0xB8

		::System::Void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::System::Boolean serverMode, ::System::String* targetHost, ::System::Security::Authentication::SslProtocols enabledProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Boolean askForClientCert)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean, ::System::String*, ::System::Security::Authentication::SslProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT__CTOR_OFFSET))(this, parent, serverMode, targetHost, enabledProtocols, serverCertificate, clientCertificates, askForClientCert);
		}

		static ::System::Void ExtractNativeKeyAndChainFromManagedCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* cert, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::Mono::Unity::UnityTls_unitytls_x509list*& nativeCertChain, ::Mono::Unity::UnityTls_unitytls_key*& nativeKey)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::Mono::Unity::UnityTls_unitytls_x509list*&, ::Mono::Unity::UnityTls_unitytls_key*&))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_EXTRACTNATIVEKEYANDCHAINFROMMANAGEDCERTIFICATE_OFFSET))(cert, errorState, nativeCertChain, nativeKey);
		}

		::System::Boolean get_HasContext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_HASCONTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_ISAUTHENTICATED_OFFSET))(this);
		}

		::Mono::Security::Interface::MonoTlsConnectionInfo* get_ConnectionInfo()
		{
			return ((::Mono::Security::Interface::MonoTlsConnectionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_CONNECTIONINFO_OFFSET))(this);
		}

		::System::Boolean get_IsRemoteCertificateAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_ISREMOTECERTIFICATEAVAILABLE_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalClientCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_LOCALCLIENTCERTIFICATE_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_RemoteCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_REMOTECERTIFICATE_OFFSET))(this);
		}

		::Mono::Security::Interface::TlsProtocols get_NegotiatedProtocol()
		{
			return ((::Mono::Security::Interface::TlsProtocols(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_NEGOTIATEDPROTOCOL_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_FLUSH_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Boolean> Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Boolean> Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Shutdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_SHUTDOWN_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void StartHandshake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_STARTHANDSHAKE_OFFSET))(this);
		}

		::System::Boolean ProcessHandshake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_PROCESSHANDSHAKE_OFFSET))(this);
		}

		::System::Void FinishHandshake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_FINISHHANDSHAKE_OFFSET))(this);
		}

		static ::System::IntPtr WriteCallback(::System::Void* userData, ::System::Byte* data, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::System::IntPtr(*)(::System::Void*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_OFFSET))(userData, data, bufferLen, errorState);
		}

		::System::IntPtr WriteCallback_1(::System::Byte* data, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_1_OFFSET))(this, data, bufferLen, errorState);
		}

		static ::System::IntPtr ReadCallback(::System::Void* userData, ::System::Byte* buffer, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::System::IntPtr(*)(::System::Void*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_OFFSET))(userData, buffer, bufferLen, errorState);
		}

		::System::IntPtr ReadCallback_1(::System::Byte* buffer, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_1_OFFSET))(this, buffer, bufferLen, errorState);
		}

		static ::Mono::Unity::UnityTls_unitytls_x509verify_result VerifyCallback(::System::Void* userData, ::Mono::Unity::UnityTls_unitytls_x509list_ref chain, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::System::Void*, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_OFFSET))(userData, chain, errorState);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result VerifyCallback_1(::Mono::Unity::UnityTls_unitytls_x509list_ref chain, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_1_OFFSET))(this, chain, errorState);
		}

		static ::System::Void CertificateCallback(::System::Void* userData, ::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, ::System::Byte* cn, ::System::IntPtr cnLen, ::Mono::Unity::UnityTls_unitytls_x509name* caList, ::System::IntPtr caListLen, ::Mono::Unity::UnityTls_unitytls_x509list_ref* chain, ::Mono::Unity::UnityTls_unitytls_key_ref* key, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::System::Void(*)(::System::Void*, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509name*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509list_ref*, ::Mono::Unity::UnityTls_unitytls_key_ref*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_OFFSET))(userData, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
		}

		::System::Void CertificateCallback_1(::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, ::System::Byte* cn, ::System::IntPtr cnLen, ::Mono::Unity::UnityTls_unitytls_x509name* caList, ::System::IntPtr caListLen, ::Mono::Unity::UnityTls_unitytls_x509list_ref* chain, ::Mono::Unity::UnityTls_unitytls_key_ref* key, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509name*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509list_ref*, ::Mono::Unity::UnityTls_unitytls_key_ref*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_1_OFFSET))(this, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
		}

		static ::System::Void TraceCallback(::System::Void* userData, ::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, ::System::Byte* traceMessage, ::System::IntPtr traceMessageLen)
		{
			return ((::System::Void(*)(::System::Void*, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::System::Byte*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_TRACECALLBACK_OFFSET))(userData, ctx, traceMessage, traceMessageLen);
		}
	};
}
