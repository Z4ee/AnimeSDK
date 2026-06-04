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

#define MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1AF1A8B0)
#define MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AF18A80)
#define MONO_UNITY_UNITYTLSCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF1A100)
#define MONO_UNITY_UNITYTLSCONTEXT_EXTRACTNATIVEKEYANDCHAINFROMMANAGEDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1AF19AF0)
#define MONO_UNITY_UNITYTLSCONTEXT_FINISHHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1AF0F720)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1AF19E50)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_LOCALCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1AF19E60)
#define MONO_UNITY_UNITYTLSCONTEXT_PROCESSHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1AF0F4E0)
#define MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1AF1A410)
#define MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AF188C0)
#define MONO_UNITY_UNITYTLSCONTEXT_READ_OFFSET UNITYSDK_OFFSET(0x1AF0F8E0)
#define MONO_UNITY_UNITYTLSCONTEXT_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1AF19E70)
#define MONO_UNITY_UNITYTLSCONTEXT_STARTHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1AF0F230)
#define MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1AF1A730)
#define MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AF189A0)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1AF1A200)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AF187E0)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITE_OFFSET UNITYSDK_OFFSET(0x1AF0FB00)
#define MONO_UNITY_UNITYTLSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF18B70)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTlsContext_TypeDefinitionIndex = 2390;

	class UnityTlsContext : public ::Mono::Net::Security::MobileTlsContext
	{
	public:
		::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* verifyCallback; // 0x48
		::Il2CppArray<::System::Byte>* readBuffer; // 0x50
		::System::Exception* lastException; // 0x58
		::System::Security::Cryptography::X509Certificates::X509Certificate* localClientCertificate; // 0x60
		::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* writeCallback; // 0x68
		::Il2CppArray<::System::Byte>* writeBuffer; // 0x70
		::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate; // 0x78
		::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* readCallback; // 0x80
		::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* certificateCallback; // 0x88
		::Mono::Security::Interface::MonoTlsConnectionInfo* connectioninfo; // 0x90
		::Mono::Unity::UnityTls_unitytls_tlsctx* tlsContext; // 0x98
		::Mono::Unity::UnityTls_unitytls_x509list* requestedClientCertChain; // 0xA0
		::System::Boolean isAuthenticated; // 0xA8
		::System::Boolean closedGraceful; // 0xA9
		::System::Boolean hasContext; // 0xAA
		::System::Runtime::InteropServices::GCHandle handle; // 0xAC
		::Mono::Unity::UnityTls_unitytls_key* requestedClientKey; // 0xB0

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
