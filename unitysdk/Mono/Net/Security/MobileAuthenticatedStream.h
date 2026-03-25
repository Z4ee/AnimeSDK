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

#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_AUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x186625F0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_AUTHENTICATEASSERVER_OFFSET UNITYSDK_OFFSET(0x18662840)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x18662970)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x18662D00)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_CHECKTHROW_OFFSET UNITYSDK_OFFSET(0x18662250)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186645F0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x18662CB0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x18662EF0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x186648D0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETIOEXCEPTION_OFFSET UNITYSDK_OFFSET(0x186624B0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETSSPIEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1865F620)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_AUTHENTICATEDSTREAM_OFFSET UNITYSDK_OFFSET(0x18662960)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x18664A70)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x18664C90)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x18664B80)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_INTERNALLOCALCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x18664900)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x186623D0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x18664CA0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x18664CD0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x18662240)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x18664D50)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x18662230)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x18664DB0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INNERREAD_OFFSET UNITYSDK_OFFSET(0x1865EA80)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INNERWRITE_OFFSET UNITYSDK_OFFSET(0x1865F190)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALREAD_1_OFFSET UNITYSDK_OFFSET(0x18663790)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALREAD_OFFSET UNITYSDK_OFFSET(0x186636C0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALWRITE_1_OFFSET UNITYSDK_OFFSET(0x186639D0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALWRITE_OFFSET UNITYSDK_OFFSET(0x18663910)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x18662710)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1865E070)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSREAD_OFFSET UNITYSDK_OFFSET(0x1865FB00)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSWRITE_OFFSET UNITYSDK_OFFSET(0x1865FCE0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x18663320)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x18662F50)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x186649F0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1865F760)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x18664A40)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x18664D00)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x18664D80)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x18664DE0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_STARTOPERATION_OFFSET UNITYSDK_OFFSET(0x18662B60)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x186634F0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x18663130)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x18664E10)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18662120)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__INNERWRITE_B__67_0_OFFSET UNITYSDK_OFFSET(0x18664E20)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MobileAuthenticatedStream_TypeDefinitionIndex = 2424;

	class MobileAuthenticatedStream : public ::System::Net::Security::AuthenticatedStream
	{
	public:
		static ::System::Int32* StaticGet_nextId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MobileAuthenticatedStream_TypeDefinitionIndex)->GetStaticField(0x5090);
		}
		static ::System::Int32* StaticGet_uniqueNameInteger()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MobileAuthenticatedStream_TypeDefinitionIndex)->GetStaticField(0x5094);
		}
		::Mono::Net::Security::AsyncProtocolRequest* asyncWriteRequest; // 0x38
		::Mono::Net::Security::MobileTlsContext* xobileTlsContext; // 0x40
		::System::Object* ioLock; // 0x48
		::Mono::Security::Interface::MonoTlsSettings* _Settings_k__BackingField; // 0x50
		::Mono::Security::Interface::MonoTlsProvider* _Provider_k__BackingField; // 0x58
		::Mono::Net::Security::AsyncProtocolRequest* asyncReadRequest; // 0x60
		::Mono::Net::Security::BufferOffsetSize2* writeBuffer; // 0x68
		::System::Net::Security::SslStream* _SslStream_k__BackingField; // 0x70
		::Mono::Net::Security::BufferOffsetSize2* readBuffer; // 0x78
		::Mono::Net::Security::AsyncProtocolRequest* asyncHandshakeRequest; // 0x80
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* lastException; // 0x88
		::System::Int32 ID; // 0x90
		::System::Boolean shutdown; // 0x94
		::System::Int32 closeRequested; // 0x98

		::System::Void _ctor(::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner, ::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Security::Interface::MonoTlsProvider* provider)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::System::Net::Security::SslStream*, ::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Security::Interface::MonoTlsProvider*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__CTOR_OFFSET))(this, innerStream, leaveInnerStreamOpen, owner, settings, provider);
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

		::System::Void CheckThrow(::System::Boolean authSuccessCheck, ::System::Boolean shutdownCheck)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_CHECKTHROW_OFFSET))(this, authSuccessCheck, shutdownCheck);
		}

		static ::System::Exception* GetSSPIException(::System::Exception* e)
		{
			return ((::System::Exception*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETSSPIEXCEPTION_OFFSET))(e);
		}

		static ::System::Exception* GetIOException(::System::Exception* e, ::System::String* message)
		{
			return ((::System::Exception*(*)(::System::Exception*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETIOEXCEPTION_OFFSET))(e, message);
		}

		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* SetException(::System::Exception* e)
		{
			return ((::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SETEXCEPTION_OFFSET))(this, e);
		}

		::System::Void AuthenticateAsClient(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Security::Authentication::SslProtocols enabledSslProtocols, ::System::Boolean checkCertificateRevocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_AUTHENTICATEASCLIENT_OFFSET))(this, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation);
		}

		::System::Void AuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Security::Authentication::SslProtocols enabledSslProtocols, ::System::Boolean checkCertificateRevocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Security::Authentication::SslProtocols, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_AUTHENTICATEASSERVER_OFFSET))(this, serverCertificate, clientCertificateRequired, enabledSslProtocols, checkCertificateRevocation);
		}

		::System::Net::Security::AuthenticatedStream* get_AuthenticatedStream()
		{
			return ((::System::Net::Security::AuthenticatedStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_AUTHENTICATEDSTREAM_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* ProcessAuthentication(::System::Boolean runSynchronously, ::System::Boolean serverMode, ::System::String* targetHost, ::System::Security::Authentication::SslProtocols enabledProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Boolean clientCertRequired)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Security::Authentication::SslProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSAUTHENTICATION_OFFSET))(this, runSynchronously, serverMode, targetHost, enabledProtocols, serverCertificate, clientCertificates, clientCertRequired);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_BEGINREAD_OFFSET))(this, buffer, offset, count, asyncCallback, asyncState);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, asyncCallback, asyncState);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_READASYNC_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_WRITEASYNC_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* StartOperation(::Mono::Net::Security::MobileAuthenticatedStream_OperationType type, ::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Mono::Net::Security::MobileAuthenticatedStream_OperationType, ::Mono::Net::Security::AsyncProtocolRequest*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_STARTOPERATION_OFFSET))(this, type, asyncRequest, cancellationToken);
		}

		::System::Int32 InternalRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Boolean& outWantMore)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALREAD_OFFSET))(this, buffer, offset, size, outWantMore);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Boolean> InternalRead_1(::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ::Mono::Net::Security::BufferOffsetSize* internalBuffer, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::PVOID, ::Mono::Net::Security::AsyncProtocolRequest*, ::Mono::Net::Security::BufferOffsetSize*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALREAD_1_OFFSET))(this, asyncRequest, internalBuffer, buffer, offset, size);
		}

		::System::Boolean InternalWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALWRITE_OFFSET))(this, buffer, offset, size);
		}

		::System::Boolean InternalWrite_1(::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ::Mono::Net::Security::BufferOffsetSize2* internalBuffer, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Net::Security::AsyncProtocolRequest*, ::Mono::Net::Security::BufferOffsetSize2*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALWRITE_1_OFFSET))(this, asyncRequest, internalBuffer, buffer, offset, size);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InnerRead(::System::Boolean sync, ::System::Int32 requestedSize, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INNERREAD_OFFSET))(this, sync, requestedSize, cancellationToken);
		}

		::System::Threading::Tasks::Task* InnerWrite(::System::Boolean sync, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INNERWRITE_OFFSET))(this, sync, cancellationToken);
		}

		::Mono::Net::Security::AsyncOperationStatus ProcessHandshake(::Mono::Net::Security::AsyncOperationStatus status)
		{
			return ((::Mono::Net::Security::AsyncOperationStatus(*)(::PVOID, ::Mono::Net::Security::AsyncOperationStatus))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSHANDSHAKE_OFFSET))(this, status);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Boolean> ProcessRead(::Mono::Net::Security::BufferOffsetSize* userBuffer)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::PVOID, ::Mono::Net::Security::BufferOffsetSize*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSREAD_OFFSET))(this, userBuffer);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Boolean> ProcessWrite(::Mono::Net::Security::BufferOffsetSize* userBuffer)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::PVOID, ::Mono::Net::Security::BufferOffsetSize*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSWRITE_OFFSET))(this, userBuffer);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_ISAUTHENTICATED_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_InternalLocalCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_INTERNALLOCALCERTIFICATE_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SETLENGTH_OFFSET))(this, value);
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

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Int32 get_ReadTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_READTIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_READTIMEOUT_OFFSET))(this, value);
		}

		::System::Int32 get_WriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_WRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_WriteTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_WRITETIMEOUT_OFFSET))(this, value);
		}

		::System::Void _InnerWrite_b__67_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__INNERWRITE_B__67_0_OFFSET))(this);
		}
	};
}
