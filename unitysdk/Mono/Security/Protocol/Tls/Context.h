#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/HandshakeState.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SecurityCompressionType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SecurityProtocolType.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Protocol::Tls { class CipherSuiteCollection; }
namespace Mono::Security::Protocol::Tls { class RecordProtocol; }
namespace Mono::Security::Protocol::Tls { class SecurityParameters; }
namespace Mono::Security::Protocol::Tls { class TlsClientSettings; }
namespace Mono::Security::Protocol::Tls { class TlsServerSettings; }
namespace Mono::Security::Protocol::Tls { class TlsStream; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_CHANGEPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1E549CF0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_CLEARKEYINFO_OFFSET UNITYSDK_OFFSET(0x1E549AD0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E549A20)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_DECODEPROTOCOLCODE_OFFSET UNITYSDK_OFFSET(0x1E549C50)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_ENDSWITCHINGSECURITYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E54A070)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GETSECURERANDOMBYTES_OFFSET UNITYSDK_OFFSET(0x1E5499C0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GETUNIXTIME_OFFSET UNITYSDK_OFFSET(0x1E549960)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_ABBREVIATEDHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1E549410)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_CHANGECIPHERSPECDONE_OFFSET UNITYSDK_OFFSET(0x1E549450)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_CLIENTRANDOM_OFFSET UNITYSDK_OFFSET(0x1E549740)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_CLIENTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E549640)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_CLIENTWRITEIV_OFFSET UNITYSDK_OFFSET(0x1E549820)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_CLIENTWRITEKEY_OFFSET UNITYSDK_OFFSET(0x1E5497E0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_COMPRESSIONMETHOD_OFFSET UNITYSDK_OFFSET(0x1E549610)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E549F40)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_HANDSHAKEMESSAGES_OFFSET UNITYSDK_OFFSET(0x1E5496F0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_HANDSHAKESTATE_OFFSET UNITYSDK_OFFSET(0x1E549670)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_LASTHANDSHAKEMSG_OFFSET UNITYSDK_OFFSET(0x1E549650)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_MASTERSECRET_OFFSET UNITYSDK_OFFSET(0x1E5497C0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_NEGOTIATING_OFFSET UNITYSDK_OFFSET(0x1E549FB0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_PROTOCOLNEGOTIATED_OFFSET UNITYSDK_OFFSET(0x1E549430)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x1E549530)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_RANDOMCS_OFFSET UNITYSDK_OFFSET(0x1E549780)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_RANDOMSC_OFFSET UNITYSDK_OFFSET(0x1E5497A0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_READSEQUENCENUMBER_OFFSET UNITYSDK_OFFSET(0x1E549720)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_READ_OFFSET UNITYSDK_OFFSET(0x1E54A020)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_RECEIVEDCONNECTIONEND_OFFSET UNITYSDK_OFFSET(0x1E549690)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_RECORDPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1E549860)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SECURITYPROTOCOLFLAGS_OFFSET UNITYSDK_OFFSET(0x1E549520)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SECURITYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1E549470)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SENTCONNECTIONEND_OFFSET UNITYSDK_OFFSET(0x1E5496B0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SERVERRANDOM_OFFSET UNITYSDK_OFFSET(0x1E549760)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SERVERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E549630)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SERVERWRITEIV_OFFSET UNITYSDK_OFFSET(0x1E549840)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SERVERWRITEKEY_OFFSET UNITYSDK_OFFSET(0x1E549800)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1E5495F0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SUPPORTEDCIPHERS_OFFSET UNITYSDK_OFFSET(0x1E5496D0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_WRITESEQUENCENUMBER_OFFSET UNITYSDK_OFFSET(0x1E549700)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_WRITE_OFFSET UNITYSDK_OFFSET(0x1E54A030)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_ABBREVIATEDHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1E549420)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_CHANGECIPHERSPECDONE_OFFSET UNITYSDK_OFFSET(0x1E549460)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_CLIENTRANDOM_OFFSET UNITYSDK_OFFSET(0x1E549750)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_CLIENTWRITEIV_OFFSET UNITYSDK_OFFSET(0x1E549830)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_CLIENTWRITEKEY_OFFSET UNITYSDK_OFFSET(0x1E5497F0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_COMPRESSIONMETHOD_OFFSET UNITYSDK_OFFSET(0x1E549620)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_HANDSHAKESTATE_OFFSET UNITYSDK_OFFSET(0x1E549680)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_LASTHANDSHAKEMSG_OFFSET UNITYSDK_OFFSET(0x1E549660)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_MASTERSECRET_OFFSET UNITYSDK_OFFSET(0x1E5497D0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_PROTOCOLNEGOTIATED_OFFSET UNITYSDK_OFFSET(0x1E549440)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_RANDOMCS_OFFSET UNITYSDK_OFFSET(0x1E549790)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_RANDOMSC_OFFSET UNITYSDK_OFFSET(0x1E5497B0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_READSEQUENCENUMBER_OFFSET UNITYSDK_OFFSET(0x1E549730)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_RECEIVEDCONNECTIONEND_OFFSET UNITYSDK_OFFSET(0x1E5496A0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_RECORDPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1E549870)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_SECURITYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1E549510)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_SENTCONNECTIONEND_OFFSET UNITYSDK_OFFSET(0x1E5496C0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_SERVERRANDOM_OFFSET UNITYSDK_OFFSET(0x1E549770)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_SERVERWRITEIV_OFFSET UNITYSDK_OFFSET(0x1E549850)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_SERVERWRITEKEY_OFFSET UNITYSDK_OFFSET(0x1E549810)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1E549600)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_SUPPORTEDCIPHERS_OFFSET UNITYSDK_OFFSET(0x1E5496E0)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_WRITESEQUENCENUMBER_OFFSET UNITYSDK_OFFSET(0x1E549710)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT_STARTSWITCHINGSECURITYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E54A040)
#define MONO_SECURITY_PROTOCOL_TLS_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E549880)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int Context_TypeDefinitionIndex = 2355;

	class Context : public ::System::Object
	{
	public:
		// static const ::System::Int16 MAX_FRAGMENT_SIZE = 0x4000; // 0x0
		// static const ::System::Int16 TLS1_PROTOCOL_CODE = 0x301; // 0x0
		// static const ::System::Int16 SSL3_PROTOCOL_CODE = 0x300; // 0x0
		// static const ::System::Int64 UNIX_BASE_TICKS = 0x89F7FF5F7B58000; // 0x0
		::Mono::Security::Protocol::Tls::TlsStream* handshakeMessages; // 0x10
		::Il2CppArray<::System::Byte>* serverRandom; // 0x18
		::Mono::Security::Protocol::Tls::SecurityParameters* write; // 0x20
		::Il2CppArray<::System::Byte>* randomCS; // 0x28
		::Mono::Security::Protocol::Tls::SecurityParameters* read; // 0x30
		::Il2CppArray<::System::Byte>* masterSecret; // 0x38
		::Il2CppArray<::System::Byte>* clientWriteIV; // 0x40
		::Il2CppArray<::System::Byte>* randomSC; // 0x48
		::System::Security::Cryptography::RandomNumberGenerator* random; // 0x50
		::Il2CppArray<::System::Byte>* clientRandom; // 0x58
		::Mono::Security::Protocol::Tls::RecordProtocol* recordProtocol; // 0x60
		::Mono::Security::Protocol::Tls::TlsServerSettings* serverSettings; // 0x68
		::Il2CppArray<::System::Byte>* serverWriteIV; // 0x70
		::Mono::Security::Protocol::Tls::CipherSuiteCollection* supportedCiphers; // 0x78
		::Mono::Security::Protocol::Tls::SecurityParameters* current; // 0x80
		::Mono::Security::Protocol::Tls::SecurityParameters* negotiating; // 0x88
		::Il2CppArray<::System::Byte>* serverWriteKey; // 0x90
		::Il2CppArray<::System::Byte>* sessionId; // 0x98
		::Il2CppArray<::System::Byte>* clientWriteKey; // 0xA0
		::Mono::Security::Protocol::Tls::TlsClientSettings* clientSettings; // 0xA8
		::Mono::Security::Protocol::Tls::Handshake::HandshakeType lastHandshakeMsg; // 0xB0
		::System::Boolean _ChangeCipherSpecDone_k__BackingField; // 0xB1
		::System::Boolean abbreviatedHandshake; // 0xB2
		::System::Boolean sentConnectionEnd; // 0xB3
		::Mono::Security::Protocol::Tls::SecurityProtocolType securityProtocol; // 0xB4
		::System::UInt64 writeSequenceNumber; // 0xB8
		::System::UInt64 readSequenceNumber; // 0xC0
		::System::Boolean protocolNegotiated; // 0xC8
		::System::Boolean receivedConnectionEnd; // 0xC9
		::Mono::Security::Protocol::Tls::HandshakeState handshakeState; // 0xCC
		::Mono::Security::Protocol::Tls::SecurityCompressionType compressionMethod; // 0xD0

		::System::Void _ctor(::Mono::Security::Protocol::Tls::SecurityProtocolType securityProtocolType)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::SecurityProtocolType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT__CTOR_OFFSET))(this, securityProtocolType);
		}

		::System::Boolean get_AbbreviatedHandshake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_ABBREVIATEDHANDSHAKE_OFFSET))(this);
		}

		::System::Void set_AbbreviatedHandshake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_ABBREVIATEDHANDSHAKE_OFFSET))(this, value);
		}

		::System::Boolean get_ProtocolNegotiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_PROTOCOLNEGOTIATED_OFFSET))(this);
		}

		::System::Void set_ProtocolNegotiated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_PROTOCOLNEGOTIATED_OFFSET))(this, value);
		}

		::System::Boolean get_ChangeCipherSpecDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_CHANGECIPHERSPECDONE_OFFSET))(this);
		}

		::System::Void set_ChangeCipherSpecDone(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_CHANGECIPHERSPECDONE_OFFSET))(this, value);
		}

		::Mono::Security::Protocol::Tls::SecurityProtocolType get_SecurityProtocol()
		{
			return ((::Mono::Security::Protocol::Tls::SecurityProtocolType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SECURITYPROTOCOL_OFFSET))(this);
		}

		::System::Void set_SecurityProtocol(::Mono::Security::Protocol::Tls::SecurityProtocolType value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::SecurityProtocolType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_SECURITYPROTOCOL_OFFSET))(this, value);
		}

		::Mono::Security::Protocol::Tls::SecurityProtocolType get_SecurityProtocolFlags()
		{
			return ((::Mono::Security::Protocol::Tls::SecurityProtocolType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SECURITYPROTOCOLFLAGS_OFFSET))(this);
		}

		::System::Int16 get_Protocol()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_PROTOCOL_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_SessionId()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SESSIONID_OFFSET))(this);
		}

		::System::Void set_SessionId(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_SESSIONID_OFFSET))(this, value);
		}

		::Mono::Security::Protocol::Tls::SecurityCompressionType get_CompressionMethod()
		{
			return ((::Mono::Security::Protocol::Tls::SecurityCompressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_COMPRESSIONMETHOD_OFFSET))(this);
		}

		::System::Void set_CompressionMethod(::Mono::Security::Protocol::Tls::SecurityCompressionType value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::SecurityCompressionType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_COMPRESSIONMETHOD_OFFSET))(this, value);
		}

		::Mono::Security::Protocol::Tls::TlsServerSettings* get_ServerSettings()
		{
			return ((::Mono::Security::Protocol::Tls::TlsServerSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SERVERSETTINGS_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::TlsClientSettings* get_ClientSettings()
		{
			return ((::Mono::Security::Protocol::Tls::TlsClientSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_CLIENTSETTINGS_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::Handshake::HandshakeType get_LastHandshakeMsg()
		{
			return ((::Mono::Security::Protocol::Tls::Handshake::HandshakeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_LASTHANDSHAKEMSG_OFFSET))(this);
		}

		::System::Void set_LastHandshakeMsg(::Mono::Security::Protocol::Tls::Handshake::HandshakeType value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_LASTHANDSHAKEMSG_OFFSET))(this, value);
		}

		::Mono::Security::Protocol::Tls::HandshakeState get_HandshakeState()
		{
			return ((::Mono::Security::Protocol::Tls::HandshakeState(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_HANDSHAKESTATE_OFFSET))(this);
		}

		::System::Void set_HandshakeState(::Mono::Security::Protocol::Tls::HandshakeState value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::HandshakeState))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_HANDSHAKESTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ReceivedConnectionEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_RECEIVEDCONNECTIONEND_OFFSET))(this);
		}

		::System::Void set_ReceivedConnectionEnd(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_RECEIVEDCONNECTIONEND_OFFSET))(this, value);
		}

		::System::Boolean get_SentConnectionEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SENTCONNECTIONEND_OFFSET))(this);
		}

		::System::Void set_SentConnectionEnd(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_SENTCONNECTIONEND_OFFSET))(this, value);
		}

		::Mono::Security::Protocol::Tls::CipherSuiteCollection* get_SupportedCiphers()
		{
			return ((::Mono::Security::Protocol::Tls::CipherSuiteCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SUPPORTEDCIPHERS_OFFSET))(this);
		}

		::System::Void set_SupportedCiphers(::Mono::Security::Protocol::Tls::CipherSuiteCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::CipherSuiteCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_SUPPORTEDCIPHERS_OFFSET))(this, value);
		}

		::Mono::Security::Protocol::Tls::TlsStream* get_HandshakeMessages()
		{
			return ((::Mono::Security::Protocol::Tls::TlsStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_HANDSHAKEMESSAGES_OFFSET))(this);
		}

		::System::UInt64 get_WriteSequenceNumber()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_WRITESEQUENCENUMBER_OFFSET))(this);
		}

		::System::Void set_WriteSequenceNumber(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_WRITESEQUENCENUMBER_OFFSET))(this, value);
		}

		::System::UInt64 get_ReadSequenceNumber()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_READSEQUENCENUMBER_OFFSET))(this);
		}

		::System::Void set_ReadSequenceNumber(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_READSEQUENCENUMBER_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_ClientRandom()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_CLIENTRANDOM_OFFSET))(this);
		}

		::System::Void set_ClientRandom(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_CLIENTRANDOM_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_ServerRandom()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SERVERRANDOM_OFFSET))(this);
		}

		::System::Void set_ServerRandom(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_SERVERRANDOM_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_RandomCS()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_RANDOMCS_OFFSET))(this);
		}

		::System::Void set_RandomCS(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_RANDOMCS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_RandomSC()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_RANDOMSC_OFFSET))(this);
		}

		::System::Void set_RandomSC(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_RANDOMSC_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_MasterSecret()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_MASTERSECRET_OFFSET))(this);
		}

		::System::Void set_MasterSecret(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_MASTERSECRET_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_ClientWriteKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_CLIENTWRITEKEY_OFFSET))(this);
		}

		::System::Void set_ClientWriteKey(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_CLIENTWRITEKEY_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_ServerWriteKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SERVERWRITEKEY_OFFSET))(this);
		}

		::System::Void set_ServerWriteKey(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_SERVERWRITEKEY_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_ClientWriteIV()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_CLIENTWRITEIV_OFFSET))(this);
		}

		::System::Void set_ClientWriteIV(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_CLIENTWRITEIV_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_ServerWriteIV()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_SERVERWRITEIV_OFFSET))(this);
		}

		::System::Void set_ServerWriteIV(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_SERVERWRITEIV_OFFSET))(this, value);
		}

		::Mono::Security::Protocol::Tls::RecordProtocol* get_RecordProtocol()
		{
			return ((::Mono::Security::Protocol::Tls::RecordProtocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_RECORDPROTOCOL_OFFSET))(this);
		}

		::System::Void set_RecordProtocol(::Mono::Security::Protocol::Tls::RecordProtocol* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::RecordProtocol*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_SET_RECORDPROTOCOL_OFFSET))(this, value);
		}

		::System::Int32 GetUnixTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GETUNIXTIME_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetSecureRandomBytes(::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GETSECURERANDOMBYTES_OFFSET))(this, count);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_CLEAR_OFFSET))(this);
		}

		::System::Void ClearKeyInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_CLEARKEYINFO_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::SecurityProtocolType DecodeProtocolCode(::System::Int16 code, ::System::Boolean allowFallback)
		{
			return ((::Mono::Security::Protocol::Tls::SecurityProtocolType(*)(::PVOID, ::System::Int16, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_DECODEPROTOCOLCODE_OFFSET))(this, code, allowFallback);
		}

		::System::Void ChangeProtocol(::System::Int16 protocol)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_CHANGEPROTOCOL_OFFSET))(this, protocol);
		}

		::Mono::Security::Protocol::Tls::SecurityParameters* get_Current()
		{
			return ((::Mono::Security::Protocol::Tls::SecurityParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_CURRENT_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::SecurityParameters* get_Negotiating()
		{
			return ((::Mono::Security::Protocol::Tls::SecurityParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_NEGOTIATING_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::SecurityParameters* get_Read()
		{
			return ((::Mono::Security::Protocol::Tls::SecurityParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_READ_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::SecurityParameters* get_Write()
		{
			return ((::Mono::Security::Protocol::Tls::SecurityParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_GET_WRITE_OFFSET))(this);
		}

		::System::Void StartSwitchingSecurityParameters(::System::Boolean client)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_STARTSWITCHINGSECURITYPARAMETERS_OFFSET))(this, client);
		}

		::System::Void EndSwitchingSecurityParameters(::System::Boolean client)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CONTEXT_ENDSWITCHINGSECURITYPARAMETERS_OFFSET))(this, client);
		}
	};
}
