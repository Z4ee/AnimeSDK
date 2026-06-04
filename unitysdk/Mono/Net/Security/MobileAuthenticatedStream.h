#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/AsyncOperationStatus.h"
#include "unitysdk/Mono/Net/Security/MobileAuthenticatedStream_OperationType.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/Net/Security/AuthenticatedStream.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Mono::Net::Security { class AsyncProtocolRequest; }
namespace Mono::Net::Security { class BufferOffsetSize2; }
namespace Mono::Net::Security { class BufferOffsetSize; }
namespace Mono::Net::Security { class MobileTlsContext; }
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::Security { class SslStream; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_AUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x1AF0DBA0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_AUTHENTICATEASSERVER_OFFSET UNITYSDK_OFFSET(0x1AF0DEC0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1AF0E070)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1AF0E410)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_CHECKTHROW_OFFSET UNITYSDK_OFFSET(0x1AF0D7F0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF0FD20)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1AF0E3B0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1AF0E600)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AF10070)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETIOEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AF0DA50)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETSSPIEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AF0B070)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_AUTHENTICATEDSTREAM_OFFSET UNITYSDK_OFFSET(0x1AF0E060)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1AF10210)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1AF10440)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1AF10320)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_INTERNALLOCALCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1AF100A0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1AF0D970)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1AF10450)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AF10480)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1AF0D7E0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AF10500)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1AF0D7D0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AF10560)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INNERREAD_OFFSET UNITYSDK_OFFSET(0x1AF0A450)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INNERWRITE_OFFSET UNITYSDK_OFFSET(0x1AF0AB80)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALREAD_1_OFFSET UNITYSDK_OFFSET(0x1AF0EEA0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALREAD_OFFSET UNITYSDK_OFFSET(0x1AF0EDD0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALWRITE_1_OFFSET UNITYSDK_OFFSET(0x1AF0F0D0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALWRITE_OFFSET UNITYSDK_OFFSET(0x1AF0F010)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x1AF0DD30)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1AF09A00)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSREAD_OFFSET UNITYSDK_OFFSET(0x1AF0B560)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSWRITE_OFFSET UNITYSDK_OFFSET(0x1AF0B740)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x1AF0EA30)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1AF0E660)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1AF10190)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AF0B1C0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF101E0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AF104B0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AF10530)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AF10590)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_STARTOPERATION_OFFSET UNITYSDK_OFFSET(0x1AF0E260)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x1AF0EC00)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1AF0E840)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF105C0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF0D6C0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__INNERWRITE_B__67_0_OFFSET UNITYSDK_OFFSET(0x1AF105D0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MobileAuthenticatedStream_TypeDefinitionIndex = 2425;

	class MobileAuthenticatedStream : public ::System::Net::Security::AuthenticatedStream
	{
	public:
		static ::System::Int32* StaticGet_uniqueNameInteger()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MobileAuthenticatedStream_TypeDefinitionIndex)->GetStaticField(0x8BD0);
		}
		static ::System::Int32* StaticGet_nextId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MobileAuthenticatedStream_TypeDefinitionIndex)->GetStaticField(0x8BD4);
		}
		::Mono::Net::Security::AsyncProtocolRequest* asyncWriteRequest; // 0x38
		::Mono::Security::Interface::MonoTlsSettings* _Settings_k__BackingField; // 0x40
		::Mono::Net::Security::AsyncProtocolRequest* asyncReadRequest; // 0x48
		::System::Net::Security::SslStream* _SslStream_k__BackingField; // 0x50
		::Mono::Net::Security::AsyncProtocolRequest* asyncHandshakeRequest; // 0x58
		::Mono::Net::Security::BufferOffsetSize2* readBuffer; // 0x60
		::Mono::Security::Interface::MonoTlsProvider* _Provider_k__BackingField; // 0x68
		::Mono::Net::Security::BufferOffsetSize2* writeBuffer; // 0x70
		::System::Object* ioLock; // 0x78
		::Mono::Net::Security::MobileTlsContext* xobileTlsContext; // 0x80
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* lastException; // 0x88
		::System::Int32 closeRequested; // 0x90
		::System::Boolean shutdown; // 0x94
		::System::Int32 ID; // 0x98

		::System::Void _ctor(::System::IO::Stream* a1, ::System::Boolean a2, ::System::Net::Security::SslStream* a3, ::Mono::Security::Interface::MonoTlsSettings* a4, ::Mono::Security::Interface::MonoTlsProvider* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::System::Net::Security::SslStream*, ::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Security::Interface::MonoTlsProvider*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__CCTOR_OFFSET))();
		}

		::Mono::Security::Interface::MonoTlsSettings* get_Settings()
		{
			return ((::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_SETTINGS_OFFSET))(this);
		}

		::Mono::Security::Interface::MonoTlsProvider* get_Provider()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_PROVIDER_OFFSET))(this);
		}

		::System::Void CheckThrow(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_CHECKTHROW_OFFSET))(this, a1, a2);
		}

		static ::System::Exception* GetSSPIException(::System::Exception* a1)
		{
			return ((::System::Exception*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETSSPIEXCEPTION_OFFSET))(a1);
		}

		static ::System::Exception* GetIOException(::System::Exception* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Exception*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETIOEXCEPTION_OFFSET))(a1, a2);
		}

		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* SetException(::System::Exception* a1)
		{
			return ((::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SETEXCEPTION_OFFSET))(this, a1);
		}

		::System::Void AuthenticateAsClient(::System::String* a1, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a2, ::System::Security::Authentication::SslProtocols a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_AUTHENTICATEASCLIENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate* a1, ::System::Boolean a2, ::System::Security::Authentication::SslProtocols a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Security::Authentication::SslProtocols, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_AUTHENTICATEASSERVER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Net::Security::AuthenticatedStream* get_AuthenticatedStream()
		{
			return ((::System::Net::Security::AuthenticatedStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_AUTHENTICATEDSTREAM_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* ProcessAuthentication(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3, ::System::Security::Authentication::SslProtocols a4, ::System::Security::Cryptography::X509Certificates::X509Certificate* a5, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a6, ::System::Boolean a7)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Security::Authentication::SslProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSAUTHENTICATION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_BEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_ENDREAD_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_BEGINWRITE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndWrite(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_ENDWRITE_OFFSET))(this, a1);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_READASYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_WRITEASYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* StartOperation(::Mono::Net::Security::MobileAuthenticatedStream_OperationType a1, ::Mono::Net::Security::AsyncProtocolRequest* a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Mono::Net::Security::MobileAuthenticatedStream_OperationType, ::Mono::Net::Security::AsyncProtocolRequest*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_STARTOPERATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 InternalRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean& a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALREAD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Boolean> InternalRead_1(::Mono::Net::Security::AsyncProtocolRequest* a1, ::Mono::Net::Security::BufferOffsetSize* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::PVOID, ::Mono::Net::Security::AsyncProtocolRequest*, ::Mono::Net::Security::BufferOffsetSize*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALREAD_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean InternalWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALWRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean InternalWrite_1(::Mono::Net::Security::AsyncProtocolRequest* a1, ::Mono::Net::Security::BufferOffsetSize2* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Net::Security::AsyncProtocolRequest*, ::Mono::Net::Security::BufferOffsetSize2*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALWRITE_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InnerRead(::System::Boolean a1, ::System::Int32 a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INNERREAD_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task* InnerWrite(::System::Boolean a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INNERWRITE_OFFSET))(this, a1, a2);
		}

		::Mono::Net::Security::AsyncOperationStatus ProcessHandshake(::Mono::Net::Security::AsyncOperationStatus a1)
		{
			return ((::Mono::Net::Security::AsyncOperationStatus(*)(::PVOID, ::Mono::Net::Security::AsyncOperationStatus))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSHANDSHAKE_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Boolean> ProcessRead(::Mono::Net::Security::BufferOffsetSize* a1)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::PVOID, ::Mono::Net::Security::BufferOffsetSize*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSREAD_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Boolean> ProcessWrite(::Mono::Net::Security::BufferOffsetSize* a1)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::PVOID, ::Mono::Net::Security::BufferOffsetSize*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSWRITE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_ISAUTHENTICATED_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_InternalLocalCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_INTERNALLOCALCERTIFICATE_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SETLENGTH_OFFSET))(this, a1);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Int32 get_ReadTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_READTIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_READTIMEOUT_OFFSET))(this, a1);
		}

		::System::Int32 get_WriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_WRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_WriteTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_WRITETIMEOUT_OFFSET))(this, a1);
		}

		::System::Void _InnerWrite_b__67_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__INNERWRITE_B__67_0_OFFSET))(this);
		}
	};
}
