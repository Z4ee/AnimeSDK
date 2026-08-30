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

#define MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1E90A700)
#define MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E908770)
#define MONO_UNITY_UNITYTLSCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E909FA0)
#define MONO_UNITY_UNITYTLSCONTEXT_EXTRACTNATIVEKEYANDCHAINFROMMANAGEDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1E9097B0)
#define MONO_UNITY_UNITYTLSCONTEXT_FINISHHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1E8FED80)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1E909CF0)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_LOCALCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1E909D00)
#define MONO_UNITY_UNITYTLSCONTEXT_PROCESSHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1E8FEB40)
#define MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1E90A2B0)
#define MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E9085B0)
#define MONO_UNITY_UNITYTLSCONTEXT_READ_OFFSET UNITYSDK_OFFSET(0x1E8FEF40)
#define MONO_UNITY_UNITYTLSCONTEXT_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1E909D10)
#define MONO_UNITY_UNITYTLSCONTEXT_STARTHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1E8FE890)
#define MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1E90A5D0)
#define MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E908690)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1E90A0A0)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E9084D0)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITE_OFFSET UNITYSDK_OFFSET(0x1E8FF160)
#define MONO_UNITY_UNITYTLSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E908860)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTlsContext_TypeDefinitionIndex = 2401;

	class UnityTlsContext : public ::Mono::Net::Security::MobileTlsContext
	{
	public:
		::System::Exception* lastException; // 0x48
		::Il2CppArray<::System::Byte>* writeBuffer; // 0x50
		::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* certificateCallback; // 0x58
		::Mono::Security::Interface::MonoTlsConnectionInfo* connectioninfo; // 0x60
		::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* writeCallback; // 0x68
		::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* readCallback; // 0x70
		::Il2CppArray<::System::Byte>* readBuffer; // 0x78
		::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate; // 0x80
		::System::Security::Cryptography::X509Certificates::X509Certificate* localClientCertificate; // 0x88
		::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* verifyCallback; // 0x90
		::Mono::Unity::UnityTls_unitytls_tlsctx* tlsContext; // 0x98
		::Mono::Unity::UnityTls_unitytls_key* requestedClientKey; // 0xA0
		::Mono::Unity::UnityTls_unitytls_x509list* requestedClientCertChain; // 0xA8
		::System::Runtime::InteropServices::GCHandle handle; // 0xB0
		::System::Boolean closedGraceful; // 0xB4
		::System::Boolean isAuthenticated; // 0xB5
		::System::Boolean hasContext; // 0xB6

		::System::Void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* a1, ::System::Boolean a2, ::System::String* a3, ::System::Security::Authentication::SslProtocols a4, ::System::Security::Cryptography::X509Certificates::X509Certificate* a5, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean, ::System::String*, ::System::Security::Authentication::SslProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void ExtractNativeKeyAndChainFromManagedCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* a1, ::Mono::Unity::UnityTls_unitytls_errorstate* a2, ::Mono::Unity::UnityTls_unitytls_x509list*& a3, ::Mono::Unity::UnityTls_unitytls_key*& a4)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::Mono::Unity::UnityTls_unitytls_x509list*&, ::Mono::Unity::UnityTls_unitytls_key*&))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_EXTRACTNATIVEKEYANDCHAINFROMMANAGEDCERTIFICATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_ISAUTHENTICATED_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalClientCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_LOCALCLIENTCERTIFICATE_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Boolean> Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Boolean> Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Shutdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_SHUTDOWN_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_DISPOSE_OFFSET))(this, a1);
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

		static ::System::IntPtr WriteCallback(::System::Void* a1, ::System::Byte* a2, ::System::IntPtr a3, ::Mono::Unity::UnityTls_unitytls_errorstate* a4)
		{
			return ((::System::IntPtr(*)(::System::Void*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		::System::IntPtr WriteCallback_1(::System::Byte* a1, ::System::IntPtr a2, ::Mono::Unity::UnityTls_unitytls_errorstate* a3)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::IntPtr ReadCallback(::System::Void* a1, ::System::Byte* a2, ::System::IntPtr a3, ::Mono::Unity::UnityTls_unitytls_errorstate* a4)
		{
			return ((::System::IntPtr(*)(::System::Void*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		::System::IntPtr ReadCallback_1(::System::Byte* a1, ::System::IntPtr a2, ::Mono::Unity::UnityTls_unitytls_errorstate* a3)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_1_OFFSET))(this, a1, a2, a3);
		}

		static ::Mono::Unity::UnityTls_unitytls_x509verify_result VerifyCallback(::System::Void* a1, ::Mono::Unity::UnityTls_unitytls_x509list_ref a2, ::Mono::Unity::UnityTls_unitytls_errorstate* a3)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::System::Void*, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_OFFSET))(a1, a2, a3);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result VerifyCallback_1(::Mono::Unity::UnityTls_unitytls_x509list_ref a1, ::Mono::Unity::UnityTls_unitytls_errorstate* a2)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void CertificateCallback(::System::Void* a1, ::Mono::Unity::UnityTls_unitytls_tlsctx* a2, ::System::Byte* a3, ::System::IntPtr a4, ::Mono::Unity::UnityTls_unitytls_x509name* a5, ::System::IntPtr a6, ::Mono::Unity::UnityTls_unitytls_x509list_ref* a7, ::Mono::Unity::UnityTls_unitytls_key_ref* a8, ::Mono::Unity::UnityTls_unitytls_errorstate* a9)
		{
			return ((::System::Void(*)(::System::Void*, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509name*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509list_ref*, ::Mono::Unity::UnityTls_unitytls_key_ref*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void CertificateCallback_1(::Mono::Unity::UnityTls_unitytls_tlsctx* a1, ::System::Byte* a2, ::System::IntPtr a3, ::Mono::Unity::UnityTls_unitytls_x509name* a4, ::System::IntPtr a5, ::Mono::Unity::UnityTls_unitytls_x509list_ref* a6, ::Mono::Unity::UnityTls_unitytls_key_ref* a7, ::Mono::Unity::UnityTls_unitytls_errorstate* a8)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509name*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509list_ref*, ::Mono::Unity::UnityTls_unitytls_key_ref*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
