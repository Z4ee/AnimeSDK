#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_AuthInfo.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_PacketResponseCallback.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_ServerAddress.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_TunnelState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace MiHoYo::SDK { class SecurityTunnel_CryptoUtil; }
namespace MiHoYo::SDK { class SecurityTunnel_DataWrapper; }
namespace MiHoYo::SDK { class SecurityTunnel_File; }
namespace MiHoYo::SDK { class SecurityTunnel_FileHeader; }
namespace MiHoYo::SDK { class SecurityTunnel_FilePart; }
namespace MiHoYo::SDK { class SecurityTunnel_FileTask; }
namespace MiHoYo::SDK { class SecurityTunnel_OnConnectedAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnDisconnectedAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnReceivePacketAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnSDKEventCallbackAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnServerEventCallbackAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnServerKickOffCallbackAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnServerShutdownCallbackAction; }
namespace MiHoYo::SDK { class SecurityTunnel_Packet; }
namespace MiHoYo::SDK { class SecurityTunnel_PacketIDGenerator; }
namespace MiHoYo::SDK { class SecurityTunnel_ReadWriteLock; }
namespace MiHoYo::SDK { class SecurityTunnel_ResponseCallbackAction; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Net::Sockets { class NetworkStream; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Timers { class ElapsedEventArgs; }
namespace System::Timers { class Timer; }

#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0xA20E8D0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xA20E9D0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONRECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0xA20EAD0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSDKEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA20EBD0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA20ECD0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVERKICKOFFCALLBACK_OFFSET UNITYSDK_OFFSET(0xA20EDD0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVERSHUTDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0xA20EED0)
#define MIHOYO_SDK_SECURITYTUNNEL_BYTESTOHEX_OFFSET UNITYSDK_OFFSET(0xA2063B0)
#define MIHOYO_SDK_SECURITYTUNNEL_CONFIRMNEXTPENDINGKEY_OFFSET UNITYSDK_OFFSET(0xA2063A0)
#define MIHOYO_SDK_SECURITYTUNNEL_CONNECT_OFFSET UNITYSDK_OFFSET(0xA20F360)
#define MIHOYO_SDK_SECURITYTUNNEL_DECRYPT_OFFSET UNITYSDK_OFFSET(0xA205870)
#define MIHOYO_SDK_SECURITYTUNNEL_DISCONNECT_OFFSET UNITYSDK_OFFSET(0xA20F3A0)
#define MIHOYO_SDK_SECURITYTUNNEL_DISPATCHPACKET_OFFSET UNITYSDK_OFFSET(0xA20AFF0)
#define MIHOYO_SDK_SECURITYTUNNEL_ENCRYPT_OFFSET UNITYSDK_OFFSET(0xA204C90)
#define MIHOYO_SDK_SECURITYTUNNEL_ENQUEUEFILETASK_1_OFFSET UNITYSDK_OFFSET(0xA206FA0)
#define MIHOYO_SDK_SECURITYTUNNEL_ENQUEUEFILETASK_OFFSET UNITYSDK_OFFSET(0xA206CD0)
#define MIHOYO_SDK_SECURITYTUNNEL_EXCHANGESECRETKEY_OFFSET UNITYSDK_OFFSET(0xA2040F0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEPARTRECEIVED_OFFSET UNITYSDK_OFFSET(0xA208560)
#define MIHOYO_SDK_SECURITYTUNNEL_FILETRANSFERTHREAD_OFFSET UNITYSDK_OFFSET(0xA207100)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0xA20C6F0)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0xA20E310)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_ISCONNECTING_OFFSET UNITYSDK_OFFSET(0xA20E320)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0xA20E2F0)
#define MIHOYO_SDK_SECURITYTUNNEL_PING_OFFSET UNITYSDK_OFFSET(0xA20E0E0)
#define MIHOYO_SDK_SECURITYTUNNEL_READSTREAM_OFFSET UNITYSDK_OFFSET(0xA20A2F0)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0xA20E950)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xA20EA50)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONRECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0xA20EB50)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSDKEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA20EC50)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA20ED50)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVERKICKOFFCALLBACK_OFFSET UNITYSDK_OFFSET(0xA20EE50)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVERSHUTDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0xA20EF50)
#define MIHOYO_SDK_SECURITYTUNNEL_RETRYCONNECT_OFFSET UNITYSDK_OFFSET(0xA203250)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFECONNECT_OFFSET UNITYSDK_OFFSET(0xA203460)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFEDEQUEUECALLBACK_OFFSET UNITYSDK_OFFSET(0xA20C500)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFEDISCONNECT_OFFSET UNITYSDK_OFFSET(0xA203390)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFEENQUEUECALLBACK_OFFSET UNITYSDK_OFFSET(0xA20C080)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDFILEENDREQUEST_OFFSET UNITYSDK_OFFSET(0xA208F70)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDFILETRANSFERFAILURE_OFFSET UNITYSDK_OFFSET(0xA207F50)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDMESSAGE2SDK_OFFSET UNITYSDK_OFFSET(0xA20E610)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDMESSAGE2SERVER_OFFSET UNITYSDK_OFFSET(0xA20E340)
#define MIHOYO_SDK_SECURITYTUNNEL_SETTHREADPREFIXENABLE_OFFSET UNITYSDK_OFFSET(0xA20E330)
#define MIHOYO_SDK_SECURITYTUNNEL_SET_STATE_OFFSET UNITYSDK_OFFSET(0xA20E300)
#define MIHOYO_SDK_SECURITYTUNNEL_STARTPING_OFFSET UNITYSDK_OFFSET(0xA20E0D0)
#define MIHOYO_SDK_SECURITYTUNNEL_STARTRECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0xA204050)
#define MIHOYO_SDK_SECURITYTUNNEL_STOPPING_OFFSET UNITYSDK_OFFSET(0xA209D10)
#define MIHOYO_SDK_SECURITYTUNNEL_STREAMREADTHREAD_OFFSET UNITYSDK_OFFSET(0xA20A1E0)
#define MIHOYO_SDK_SECURITYTUNNEL_TESTERRORLOG_OFFSET UNITYSDK_OFFSET(0xA20F450)
#define MIHOYO_SDK_SECURITYTUNNEL_TESTFILEREAD_OFFSET UNITYSDK_OFFSET(0xA209720)
#define MIHOYO_SDK_SECURITYTUNNEL_TESTFILESAVE_OFFSET UNITYSDK_OFFSET(0xA209580)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYCONNECT_OFFSET UNITYSDK_OFFSET(0xA202DC0)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYDISCONNCT_OFFSET UNITYSDK_OFFSET(0xA204BF0)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYLOGIN_OFFSET UNITYSDK_OFFSET(0xA2097E0)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYLOGOUT_OFFSET UNITYSDK_OFFSET(0xA209AB0)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYWRITEPENDINGQUEUE_OFFSET UNITYSDK_OFFSET(0xA20DE70)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYWRITE_1_OFFSET UNITYSDK_OFFSET(0xA20CB80)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYWRITE_OFFSET UNITYSDK_OFFSET(0xA2069A0)
#define MIHOYO_SDK_SECURITYTUNNEL_WRITETHREAD_OFFSET UNITYSDK_OFFSET(0xA20CDB0)
#define MIHOYO_SDK_SECURITYTUNNEL_WRITE_1_OFFSET UNITYSDK_OFFSET(0xA20F440)
#define MIHOYO_SDK_SECURITYTUNNEL_WRITE_OFFSET UNITYSDK_OFFSET(0xA20E600)
#define MIHOYO_SDK_SECURITYTUNNEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA20EFD0)
#define MIHOYO_SDK_SECURITYTUNNEL__ENQUEUEFILETASK_B__36_0_OFFSET UNITYSDK_OFFSET(0xA20FFC0)
#define MIHOYO_SDK_SECURITYTUNNEL__PING_B__66_0_OFFSET UNITYSDK_OFFSET(0xA210DE0)
#define MIHOYO_SDK_SECURITYTUNNEL__SAFECONNECT_B__22_0_OFFSET UNITYSDK_OFFSET(0xA20FAE0)
#define MIHOYO_SDK_SECURITYTUNNEL__SAFEDISCONNECT_B__24_0_OFFSET UNITYSDK_OFFSET(0xA20FCA0)
#define MIHOYO_SDK_SECURITYTUNNEL__STARTRECEIVEPACKET_B__52_0_OFFSET UNITYSDK_OFFSET(0xA210C50)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYDISCONNCT_B__23_0_OFFSET UNITYSDK_OFFSET(0xA20FBF0)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYLOGIN_B__43_0_OFFSET UNITYSDK_OFFSET(0xA20FFD0)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYLOGOUT_B__44_0_OFFSET UNITYSDK_OFFSET(0xA210740)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYWRITE_B__59_0_OFFSET UNITYSDK_OFFSET(0xA210D60)
#define MIHOYO_SDK_SECURITYTUNNEL__WRITETHREAD_B__60_0_OFFSET UNITYSDK_OFFSET(0xA210D70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_TypeDefinitionIndex = 43783;

	class SecurityTunnel : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_FileTransferDirectory()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_TypeDefinitionIndex)->GetStaticField(0xFC80);
		}
		static ::System::Boolean* StaticGet_EnableSDKThreadPrefix()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_TypeDefinitionIndex)->GetStaticField(0x4F30);
		}
		::System::Net::Sockets::TcpClient* tcpClient; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SecurityTunnel_ServerAddress>* addresses; // 0x18
		::System::Net::Sockets::NetworkStream* tcpStream; // 0x20
		::System::Timers::Timer* pingTimer; // 0x28
		::System::Object* locker; // 0x30
		::MiHoYo::SDK::SecurityTunnel_OnConnectedAction* OnConnected; // 0x38
		::System::Collections::Generic::Queue_1<::MiHoYo::SDK::SecurityTunnel_DataWrapper*>* pendingQueue; // 0x40
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SecurityTunnel_PacketResponseCallback>* packetResponseCallbacks; // 0x48
		::MiHoYo::SDK::SecurityTunnel_ReadWriteLock* tcpLocker; // 0x50
		::System::String* rsaPublicKey; // 0x58
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SecurityTunnel_File*>* files; // 0x60
		::MiHoYo::SDK::SecurityTunnel_ServerAddress currentAddress; // 0x68
		::System::Collections::Generic::Queue_1<::MiHoYo::SDK::SecurityTunnel_FileTask*>* fileTasks; // 0x78
		::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction* OnServerKickOffCallback; // 0x80
		::System::Collections::Generic::Queue_1<::Il2CppArray<::System::Byte>*>* writeQueue; // 0x88
		::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction* OnServerShutdownCallback; // 0x90
		::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction* OnDisconnected; // 0x98
		::MiHoYo::SDK::SecurityTunnel_PacketIDGenerator* packetIDGenerator; // 0xA0
		::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction* OnServerEventCallback; // 0xA8
		::MiHoYo::SDK::SecurityTunnel_AuthInfo authInfo; // 0xB0
		::MiHoYo::SDK::SecurityTunnel_CryptoUtil* crypto; // 0xF0
		::MiHoYo::SDK::SecurityTunnel_OnReceivePacketAction* OnReceivePacket; // 0xF8
		::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction* OnSDKEventCallback; // 0x100
		::System::TimeSpan ConnectTimeout; // 0x108
		::System::TimeSpan ReceiveTimeout; // 0x110
		::System::Int32 maximimPingTimeoutCount; // 0x118
		::MiHoYo::SDK::SecurityTunnel_TunnelState _State_k__BackingField; // 0x11C
		::System::TimeSpan PingInterval; // 0x120
		::System::TimeSpan SendTimeout; // 0x128
		::System::Boolean isSecretKeyExchanged; // 0x130
		::System::Boolean isWriting; // 0x131
		::System::Boolean disconnectWhenPingTimeout; // 0x132
		::System::Boolean isFileTransfering; // 0x133
		::System::Boolean isPingTimerStarted; // 0x134
		::System::TimeSpan ResponseCallbackTimeout; // 0x138
		::System::UInt32 packetMagic; // 0x140
		::System::Int32 currentPingTimeoutCount; // 0x144

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__CTOR_OFFSET))(this);
		}

		::System::Void TryConnect(::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>* a1, ::MiHoYo::SDK::SecurityTunnel_AuthInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>*, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TRYCONNECT_OFFSET))(this, a1, a2);
		}

		::System::Void RetryConnect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_RETRYCONNECT_OFFSET))(this, a1);
		}

		::System::Void SafeConnect(::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>* a1, ::MiHoYo::SDK::SecurityTunnel_AuthInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>*, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SAFECONNECT_OFFSET))(this, a1, a2);
		}

		::System::Void TryDisconnct()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TRYDISCONNCT_OFFSET))(this);
		}

		::System::Void SafeDisconnect(::System::Boolean a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SAFEDISCONNECT_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* Encrypt(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ENCRYPT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* Decrypt(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_DECRYPT_OFFSET))(this, a1);
		}

		::System::Void ConfirmNextPendingKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CONFIRMNEXTPENDINGKEY_OFFSET))(this);
		}

		::System::String* BytesToHex(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_BYTESTOHEX_OFFSET))(this, a1);
		}

		::System::Void ExchangeSecretKey(::MiHoYo::SDK::SecurityTunnel_AuthInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_EXCHANGESECRETKEY_OFFSET))(this, a1);
		}

		::System::Void EnqueueFileTask(::MiHoYo::SDK::SecurityTunnel_Packet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ENQUEUEFILETASK_OFFSET))(this, a1);
		}

		::System::Void EnqueueFileTask_1(::MiHoYo::SDK::SecurityTunnel_FileTask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_FileTask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ENQUEUEFILETASK_1_OFFSET))(this, a1);
		}

		::System::Void FileTransferThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILETRANSFERTHREAD_OFFSET))(this);
		}

		::System::Void FilePartReceived(::MiHoYo::SDK::SecurityTunnel_FilePart* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_FilePart*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILEPARTRECEIVED_OFFSET))(this, a1);
		}

		::System::Void SendFileTransferFailure(::System::UInt64 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SENDFILETRANSFERFAILURE_OFFSET))(this, a1, a2);
		}

		::System::Void SendFileEndRequest(::Il2CppArray<::System::Byte>* a1, ::MiHoYo::SDK::SecurityTunnel_FileHeader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::SecurityTunnel_FileHeader*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SENDFILEENDREQUEST_OFFSET))(this, a1, a2);
		}

		::System::String* TestFileSave()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TESTFILESAVE_OFFSET))(this);
		}

		::System::String* TestFileRead(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TESTFILEREAD_OFFSET))(this, a1);
		}

		::System::Void TryLogin(::MiHoYo::SDK::SecurityTunnel_AuthInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TRYLOGIN_OFFSET))(this, a1);
		}

		::System::Void TryLogout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TRYLOGOUT_OFFSET))(this);
		}

		::System::Void StartReceivePacket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_STARTRECEIVEPACKET_OFFSET))(this);
		}

		::System::Void StreamReadThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_STREAMREADTHREAD_OFFSET))(this);
		}

		::System::Boolean ReadStream()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_READSTREAM_OFFSET))(this);
		}

		::System::Void SafeEnqueueCallback(::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* a1, ::MiHoYo::SDK::SecurityTunnel_Packet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction*, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SAFEENQUEUECALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void SafeDequeueCallback(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SAFEDEQUEUECALLBACK_OFFSET))(this, a1);
		}

		::System::Void DispatchPacket(::MiHoYo::SDK::SecurityTunnel_Packet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_DISPATCHPACKET_OFFSET))(this, a1);
		}

		::System::Void TryWrite(::MiHoYo::SDK::SecurityTunnel_Packet* a1, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_Packet*, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TRYWRITE_OFFSET))(this, a1, a2);
		}

		::System::Void TryWrite_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TRYWRITE_1_OFFSET))(this, a1);
		}

		::System::Void WriteThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_WRITETHREAD_OFFSET))(this);
		}

		::System::Void TryWritePendingQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TRYWRITEPENDINGQUEUE_OFFSET))(this);
		}

		::System::Void StartPing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_STARTPING_OFFSET))(this);
		}

		::System::Void StopPing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_STOPPING_OFFSET))(this);
		}

		::System::Void Ping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PING_OFFSET))(this);
		}

		::MiHoYo::SDK::SecurityTunnel_TunnelState get_State()
		{
			return ((::MiHoYo::SDK::SecurityTunnel_TunnelState(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::MiHoYo::SDK::SecurityTunnel_TunnelState a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_TunnelState))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SET_STATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_GET_ISCONNECTED_OFFSET))(this);
		}

		::System::Boolean get_IsConnecting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_GET_ISCONNECTING_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_GET_CANWRITE_OFFSET))(this);
		}

		static ::System::Void SetThreadPrefixEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SETTHREADPREFIXENABLE_OFFSET))(a1);
		}

		::System::Void SendMessage2Server(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SENDMESSAGE2SERVER_OFFSET))(this, a1, a2);
		}

		::System::Void SendMessage2SDK(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SENDMESSAGE2SDK_OFFSET))(this, a1, a2);
		}

		::System::Void add_OnConnected(::MiHoYo::SDK::SecurityTunnel_OnConnectedAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnConnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ADD_ONCONNECTED_OFFSET))(this, a1);
		}

		::System::Void remove_OnConnected(::MiHoYo::SDK::SecurityTunnel_OnConnectedAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnConnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONCONNECTED_OFFSET))(this, a1);
		}

		::System::Void add_OnDisconnected(::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ADD_ONDISCONNECTED_OFFSET))(this, a1);
		}

		::System::Void remove_OnDisconnected(::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONDISCONNECTED_OFFSET))(this, a1);
		}

		::System::Void add_OnReceivePacket(::MiHoYo::SDK::SecurityTunnel_OnReceivePacketAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnReceivePacketAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ADD_ONRECEIVEPACKET_OFFSET))(this, a1);
		}

		::System::Void remove_OnReceivePacket(::MiHoYo::SDK::SecurityTunnel_OnReceivePacketAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnReceivePacketAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONRECEIVEPACKET_OFFSET))(this, a1);
		}

		::System::Void add_OnSDKEventCallback(::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSDKEVENTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_OnSDKEventCallback(::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSDKEVENTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void add_OnServerEventCallback(::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVEREVENTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_OnServerEventCallback(::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVEREVENTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void add_OnServerKickOffCallback(::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVERKICKOFFCALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_OnServerKickOffCallback(::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVERKICKOFFCALLBACK_OFFSET))(this, a1);
		}

		::System::Void add_OnServerShutdownCallback(::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVERSHUTDOWNCALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_OnServerShutdownCallback(::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVERSHUTDOWNCALLBACK_OFFSET))(this, a1);
		}

		::System::Void Connect(::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>* a1, ::MiHoYo::SDK::SecurityTunnel_AuthInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>*, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CONNECT_OFFSET))(this, a1, a2);
		}

		::System::Void Disconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_DISCONNECT_OFFSET))(this);
		}

		::System::Void Write(::MiHoYo::SDK::SecurityTunnel_Packet* a1, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_Packet*, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_WRITE_OFFSET))(this, a1, a2);
		}

		::System::Void Write_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_WRITE_1_OFFSET))(this, a1);
		}

		::System::Void TestErrorLog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TESTERRORLOG_OFFSET))(this);
		}

		::System::Void _SafeConnect_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__SAFECONNECT_B__22_0_OFFSET))(this);
		}

		::System::Void _TryDisconnct_b__23_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__TRYDISCONNCT_B__23_0_OFFSET))(this, a1);
		}

		::System::Void _SafeDisconnect_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__SAFEDISCONNECT_B__24_0_OFFSET))(this);
		}

		::System::Void _EnqueueFileTask_b__36_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__ENQUEUEFILETASK_B__36_0_OFFSET))(this, a1);
		}

		::System::Void _TryLogin_b__43_0(::System::Boolean a1, ::MiHoYo::SDK::SecurityTunnel_Packet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__TRYLOGIN_B__43_0_OFFSET))(this, a1, a2);
		}

		::System::Void _TryLogout_b__44_0(::System::Boolean a1, ::MiHoYo::SDK::SecurityTunnel_Packet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__TRYLOGOUT_B__44_0_OFFSET))(this, a1, a2);
		}

		::System::Void _StartReceivePacket_b__52_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__STARTRECEIVEPACKET_B__52_0_OFFSET))(this, a1);
		}

		::System::Void _TryWrite_b__59_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__TRYWRITE_B__59_0_OFFSET))(this, a1);
		}

		::System::Void _WriteThread_b__60_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__WRITETHREAD_B__60_0_OFFSET))(this);
		}

		::System::Void _Ping_b__66_0(::System::Object* a1, ::System::Timers::ElapsedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__PING_B__66_0_OFFSET))(this, a1, a2);
		}
	};
}
