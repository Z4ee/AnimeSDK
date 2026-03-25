#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/MobileTlsContext.h"
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
namespace Mono::Unity { class UnityTls_unitytls_tlsctx_write_callback; }
namespace Mono::Unity { class UnityTls_unitytls_tlsctx_x509verify_callback; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_1_OFFSET UNITYSDK_OFFSET(0x18676570)
#define MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_OFFSET UNITYSDK_OFFSET(0x18674850)
#define MONO_UNITY_UNITYTLSCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18675DF0)
#define MONO_UNITY_UNITYTLSCONTEXT_EXTRACTNATIVEKEYANDCHAINFROMMANAGEDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x18675840)
#define MONO_UNITY_UNITYTLSCONTEXT_FINISHHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x18664010)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x18675B70)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_LOCALCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x18675B80)
#define MONO_UNITY_UNITYTLSCONTEXT_PROCESSHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x18663DE0)
#define MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x186760F0)
#define MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_OFFSET UNITYSDK_OFFSET(0x186746A0)
#define MONO_UNITY_UNITYTLSCONTEXT_READ_OFFSET UNITYSDK_OFFSET(0x186641C0)
#define MONO_UNITY_UNITYTLSCONTEXT_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x18675B90)
#define MONO_UNITY_UNITYTLSCONTEXT_STARTHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x18663B30)
#define MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x186763F0)
#define MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_OFFSET UNITYSDK_OFFSET(0x18674780)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_1_OFFSET UNITYSDK_OFFSET(0x18675EE0)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x186745C0)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITE_OFFSET UNITYSDK_OFFSET(0x186643E0)
#define MONO_UNITY_UNITYTLSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18674940)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTlsContext_TypeDefinitionIndex = 2389;

	class UnityTlsContext : public ::Mono::Net::Security::MobileTlsContext
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509Certificate* localClientCertificate; // 0x48
		::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* readCallback; // 0x50
		::Il2CppArray<::System::Byte>* readBuffer; // 0x58
		::Il2CppArray<::System::Byte>* writeBuffer; // 0x60
		::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* writeCallback; // 0x68
		::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate; // 0x70
		::Mono::Security::Interface::MonoTlsConnectionInfo* connectioninfo; // 0x78
		::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* certificateCallback; // 0x80
		::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* verifyCallback; // 0x88
		::System::Exception* lastException; // 0x90
		::Mono::Unity::UnityTls_unitytls_key* requestedClientKey; // 0x98
		::System::Boolean closedGraceful; // 0xA0
		::System::Boolean hasContext; // 0xA1
		::System::Boolean isAuthenticated; // 0xA2
		::System::Runtime::InteropServices::GCHandle handle; // 0xA4
		::Mono::Unity::UnityTls_unitytls_tlsctx* tlsContext; // 0xA8
		::Mono::Unity::UnityTls_unitytls_x509list* requestedClientCertChain; // 0xB0

		::System::Void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::System::Boolean serverMode, ::System::String* targetHost, ::System::Security::Authentication::SslProtocols enabledProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Boolean askForClientCert)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean, ::System::String*, ::System::Security::Authentication::SslProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT__CTOR_OFFSET))(this, parent, serverMode, targetHost, enabledProtocols, serverCertificate, clientCertificates, askForClientCert);
		}

		static ::System::Void ExtractNativeKeyAndChainFromManagedCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* cert, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::Mono::Unity::UnityTls_unitytls_x509list*& nativeCertChain, ::Mono::Unity::UnityTls_unitytls_key*& nativeKey)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::Mono::Unity::UnityTls_unitytls_x509list*&, ::Mono::Unity::UnityTls_unitytls_key*&))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_EXTRACTNATIVEKEYANDCHAINFROMMANAGEDCERTIFICATE_OFFSET))(cert, errorState, nativeCertChain, nativeKey);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_ISAUTHENTICATED_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalClientCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_LOCALCLIENTCERTIFICATE_OFFSET))(this);
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
	};
}
