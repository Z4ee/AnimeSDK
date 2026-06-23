#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/AlertDescription.h"
#include "unitysdk/Mono/Security/Protocol/Tls/AlertLevel.h"
#include "unitysdk/Mono/Security/Protocol/Tls/ContentType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeType.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Protocol::Tls { class Alert; }
namespace Mono::Security::Protocol::Tls { class Context; }
namespace Mono::Security::Protocol::Tls { class TlsStream; }
namespace Mono::Security::Protocol::Tls::Handshake { class HandshakeMessage; }
namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System::IO { class Stream; }
namespace System::Threading { class ManualResetEvent; }

#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_BEGINRECEIVERECORD_OFFSET UNITYSDK_OFFSET(0x1DB674E0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_BEGINSENDCHANGECIPHERSPEC_OFFSET UNITYSDK_OFFSET(0x1DB68F90)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_BEGINSENDRECORD_1_OFFSET UNITYSDK_OFFSET(0x1DB69010)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_BEGINSENDRECORD_OFFSET UNITYSDK_OFFSET(0x1DB67130)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_COMPARE_OFFSET UNITYSDK_OFFSET(0x1DB69850)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_DECRYPTRECORDFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1DB67EF0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_ENCODEHANDSHAKERECORD_OFFSET UNITYSDK_OFFSET(0x1DB69770)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_ENCODERECORD_1_OFFSET UNITYSDK_OFFSET(0x1DB69410)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_ENCODERECORD_OFFSET UNITYSDK_OFFSET(0x1DB68F60)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_ENCRYPTRECORDFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1DB69650)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_ENDRECEIVERECORD_OFFSET UNITYSDK_OFFSET(0x1DB681F0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_ENDSENDCHANGECIPHERSPEC_OFFSET UNITYSDK_OFFSET(0x1DB69120)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_ENDSENDRECORD_OFFSET UNITYSDK_OFFSET(0x1DB67220)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DB67490)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1DB670C0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_INTERNALRECEIVERECORDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DB676E0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_INTERNALSENDRECORDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DB691F0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_PROCESSALERT_OFFSET UNITYSDK_OFFSET(0x1DB68160)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_PROCESSCHANGECIPHERSPEC_OFFSET UNITYSDK_OFFSET(0x1DB673C0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_READRECORDBUFFER_OFFSET UNITYSDK_OFFSET(0x1DB67BA0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORD_OFFSET UNITYSDK_OFFSET(0x1DB68450)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDALERT_1_OFFSET UNITYSDK_OFFSET(0x1DB68BF0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDALERT_2_OFFSET UNITYSDK_OFFSET(0x1DB68C70)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDALERT_3_OFFSET UNITYSDK_OFFSET(0x1DB68A90)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDALERT_OFFSET UNITYSDK_OFFSET(0x1DB68920)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDCHANGECIPHERSPEC_1_OFFSET UNITYSDK_OFFSET(0x1DB68E10)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDCHANGECIPHERSPEC_OFFSET UNITYSDK_OFFSET(0x1DB68CF0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORD_1_OFFSET UNITYSDK_OFFSET(0x1DB68CC0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORD_OFFSET UNITYSDK_OFFSET(0x1DB67100)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1DB670D0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB698B0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB670E0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int RecordProtocol_TypeDefinitionIndex = 2364;

	class RecordProtocol : public ::System::Object
	{
	public:
		static ::System::Threading::ManualResetEvent** StaticGet_record_processing()
		{
			return (::System::Threading::ManualResetEvent**)Il2CppClass::FromTypeDefinitionIndex(RecordProtocol_TypeDefinitionIndex)->GetStaticField(0x2360);
		}
		::System::IO::Stream* innerStream; // 0x10
		::Mono::Security::Protocol::Tls::Context* context; // 0x18

		::System::Void _ctor(::System::IO::Stream* innerStream, ::Mono::Security::Protocol::Tls::Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL__CTOR_OFFSET))(this, innerStream, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL__CCTOR_OFFSET))();
		}

		::Mono::Security::Protocol::Tls::Context* get_Context()
		{
			return ((::Mono::Security::Protocol::Tls::Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::Mono::Security::Protocol::Tls::Context* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SET_CONTEXT_OFFSET))(this, value);
		}

		::System::Void SendRecord(::Mono::Security::Protocol::Tls::Handshake::HandshakeType type)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORD_OFFSET))(this, type);
		}

		::System::Void ProcessChangeCipherSpec()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_PROCESSCHANGECIPHERSPEC_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* GetMessage(::Mono::Security::Protocol::Tls::Handshake::HandshakeType type)
		{
			return ((::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage*(*)(::PVOID, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_GETMESSAGE_OFFSET))(this, type);
		}

		::System::IAsyncResult* BeginReceiveRecord(::System::IO::Stream* record, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IO::Stream*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_BEGINRECEIVERECORD_OFFSET))(this, record, callback, state);
		}

		::System::Void InternalReceiveRecordCallback(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_INTERNALRECEIVERECORDCALLBACK_OFFSET))(this, asyncResult);
		}

		::Il2CppArray<::System::Byte>* EndReceiveRecord(::System::IAsyncResult* asyncResult)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_ENDRECEIVERECORD_OFFSET))(this, asyncResult);
		}

		::Il2CppArray<::System::Byte>* ReceiveRecord(::System::IO::Stream* record)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORD_OFFSET))(this, record);
		}

		::Il2CppArray<::System::Byte>* ReadRecordBuffer(::System::Int32 contentType, ::System::IO::Stream* record)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_READRECORDBUFFER_OFFSET))(this, contentType, record);
		}

		::System::Void ProcessAlert(::Mono::Security::Protocol::Tls::AlertLevel alertLevel, ::Mono::Security::Protocol::Tls::AlertDescription alertDesc)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::AlertLevel, ::Mono::Security::Protocol::Tls::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_PROCESSALERT_OFFSET))(this, alertLevel, alertDesc);
		}

		::System::Void SendAlert(::System::Exception*& ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*&))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDALERT_OFFSET))(this, ex);
		}

		::System::Void SendAlert_1(::Mono::Security::Protocol::Tls::AlertDescription description)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDALERT_1_OFFSET))(this, description);
		}

		::System::Void SendAlert_2(::Mono::Security::Protocol::Tls::AlertLevel level, ::Mono::Security::Protocol::Tls::AlertDescription description)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::AlertLevel, ::Mono::Security::Protocol::Tls::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDALERT_2_OFFSET))(this, level, description);
		}

		::System::Void SendAlert_3(::Mono::Security::Protocol::Tls::Alert* alert)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Alert*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDALERT_3_OFFSET))(this, alert);
		}

		::System::Void SendChangeCipherSpec()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDCHANGECIPHERSPEC_OFFSET))(this);
		}

		::System::Void SendChangeCipherSpec_1(::System::IO::Stream* recordStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDCHANGECIPHERSPEC_1_OFFSET))(this, recordStream);
		}

		::System::IAsyncResult* BeginSendChangeCipherSpec(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_BEGINSENDCHANGECIPHERSPEC_OFFSET))(this, callback, state);
		}

		::System::Void EndSendChangeCipherSpec(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_ENDSENDCHANGECIPHERSPEC_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* BeginSendRecord(::Mono::Security::Protocol::Tls::Handshake::HandshakeType handshakeType, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_BEGINSENDRECORD_OFFSET))(this, handshakeType, callback, state);
		}

		::System::Void InternalSendRecordCallback(::System::IAsyncResult* ar)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_INTERNALSENDRECORDCALLBACK_OFFSET))(this, ar);
		}

		::System::IAsyncResult* BeginSendRecord_1(::Mono::Security::Protocol::Tls::ContentType contentType, ::Il2CppArray<::System::Byte>* recordData, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Security::Protocol::Tls::ContentType, ::Il2CppArray<::System::Byte>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_BEGINSENDRECORD_1_OFFSET))(this, contentType, recordData, callback, state);
		}

		::System::Void EndSendRecord(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_ENDSENDRECORD_OFFSET))(this, asyncResult);
		}

		::System::Void SendRecord_1(::Mono::Security::Protocol::Tls::ContentType contentType, ::Il2CppArray<::System::Byte>* recordData)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::ContentType, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORD_1_OFFSET))(this, contentType, recordData);
		}

		::Il2CppArray<::System::Byte>* EncodeRecord(::Mono::Security::Protocol::Tls::ContentType contentType, ::Il2CppArray<::System::Byte>* recordData)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Security::Protocol::Tls::ContentType, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_ENCODERECORD_OFFSET))(this, contentType, recordData);
		}

		::Il2CppArray<::System::Byte>* EncodeRecord_1(::Mono::Security::Protocol::Tls::ContentType contentType, ::Il2CppArray<::System::Byte>* recordData, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Security::Protocol::Tls::ContentType, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_ENCODERECORD_1_OFFSET))(this, contentType, recordData, offset, count);
		}

		::Il2CppArray<::System::Byte>* EncodeHandshakeRecord(::Mono::Security::Protocol::Tls::Handshake::HandshakeType handshakeType)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_ENCODEHANDSHAKERECORD_OFFSET))(this, handshakeType);
		}

		::Il2CppArray<::System::Byte>* encryptRecordFragment(::Mono::Security::Protocol::Tls::ContentType contentType, ::Il2CppArray<::System::Byte>* fragment)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Security::Protocol::Tls::ContentType, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_ENCRYPTRECORDFRAGMENT_OFFSET))(this, contentType, fragment);
		}

		::Il2CppArray<::System::Byte>* decryptRecordFragment(::Mono::Security::Protocol::Tls::ContentType contentType, ::Il2CppArray<::System::Byte>* fragment)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Security::Protocol::Tls::ContentType, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_DECRYPTRECORDFRAGMENT_OFFSET))(this, contentType, fragment);
		}

		::System::Boolean Compare(::Il2CppArray<::System::Byte>* array1, ::Il2CppArray<::System::Byte>* array2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_COMPARE_OFFSET))(this, array1, array2);
		}
	};
}
