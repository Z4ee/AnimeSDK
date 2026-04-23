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

#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x8DC17E0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x8DC18E0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONRECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0x8DC19E0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSDKEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8DC1AE0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8DC1BE0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVERKICKOFFCALLBACK_OFFSET UNITYSDK_OFFSET(0x8DC1CE0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVERSHUTDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0x8DC1DE0)
#define MIHOYO_SDK_SECURITYTUNNEL_BYTESTOHEX_OFFSET UNITYSDK_OFFSET(0x8DB7AB0)
#define MIHOYO_SDK_SECURITYTUNNEL_CONFIRMNEXTPENDINGKEY_OFFSET UNITYSDK_OFFSET(0x8DB7AA0)
#define MIHOYO_SDK_SECURITYTUNNEL_CONNECT_OFFSET UNITYSDK_OFFSET(0x8DC2290)
#define MIHOYO_SDK_SECURITYTUNNEL_DECRYPT_OFFSET UNITYSDK_OFFSET(0x8DB6F70)
#define MIHOYO_SDK_SECURITYTUNNEL_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x8DC22D0)
#define MIHOYO_SDK_SECURITYTUNNEL_DISPATCHPACKET_OFFSET UNITYSDK_OFFSET(0x8DBCCB0)
#define MIHOYO_SDK_SECURITYTUNNEL_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x8DB6390)
#define MIHOYO_SDK_SECURITYTUNNEL_ENQUEUEFILETASK_1_OFFSET UNITYSDK_OFFSET(0x8DB86E0)
#define MIHOYO_SDK_SECURITYTUNNEL_ENQUEUEFILETASK_OFFSET UNITYSDK_OFFSET(0x8DB8470)
#define MIHOYO_SDK_SECURITYTUNNEL_EXCHANGESECRETKEY_OFFSET UNITYSDK_OFFSET(0x8DB5540)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEPARTRECEIVED_OFFSET UNITYSDK_OFFSET(0x8DB9D50)
#define MIHOYO_SDK_SECURITYTUNNEL_FILETRANSFERTHREAD_OFFSET UNITYSDK_OFFSET(0x8DB8830)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x8DBF1C0)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x8DC12A0)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_ISCONNECTING_OFFSET UNITYSDK_OFFSET(0x8DC12B0)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x8DC1280)
#define MIHOYO_SDK_SECURITYTUNNEL_PING_OFFSET UNITYSDK_OFFSET(0x8DC1080)
#define MIHOYO_SDK_SECURITYTUNNEL_READSTREAM_OFFSET UNITYSDK_OFFSET(0x8DBBE30)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x8DC1860)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x8DC1960)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONRECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0x8DC1A60)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSDKEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8DC1B60)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8DC1C60)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVERKICKOFFCALLBACK_OFFSET UNITYSDK_OFFSET(0x8DC1D60)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVERSHUTDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0x8DC1E60)
#define MIHOYO_SDK_SECURITYTUNNEL_RETRYCONNECT_OFFSET UNITYSDK_OFFSET(0x8DB45B0)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFECONNECT_OFFSET UNITYSDK_OFFSET(0x8DB4760)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFEDEQUEUECALLBACK_OFFSET UNITYSDK_OFFSET(0x8DBE200)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFEDISCONNECT_OFFSET UNITYSDK_OFFSET(0x8DB46C0)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFEENQUEUECALLBACK_OFFSET UNITYSDK_OFFSET(0x8DBDDD0)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDFILEENDREQUEST_OFFSET UNITYSDK_OFFSET(0x8DBA760)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDFILETRANSFERFAILURE_OFFSET UNITYSDK_OFFSET(0x8DB9730)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDMESSAGE2SDK_OFFSET UNITYSDK_OFFSET(0x8DC1560)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDMESSAGE2SERVER_OFFSET UNITYSDK_OFFSET(0x8DC12D0)
#define MIHOYO_SDK_SECURITYTUNNEL_SETTHREADPREFIXENABLE_OFFSET UNITYSDK_OFFSET(0x8DC12C0)
#define MIHOYO_SDK_SECURITYTUNNEL_SET_STATE_OFFSET UNITYSDK_OFFSET(0x8DC1290)
#define MIHOYO_SDK_SECURITYTUNNEL_STARTPING_OFFSET UNITYSDK_OFFSET(0x8DC1070)
#define MIHOYO_SDK_SECURITYTUNNEL_STARTRECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0x8DB54B0)
#define MIHOYO_SDK_SECURITYTUNNEL_STOPPING_OFFSET UNITYSDK_OFFSET(0x8DBB730)
#define MIHOYO_SDK_SECURITYTUNNEL_STREAMREADTHREAD_OFFSET UNITYSDK_OFFSET(0x8DBBD00)
#define MIHOYO_SDK_SECURITYTUNNEL_TESTERRORLOG_OFFSET UNITYSDK_OFFSET(0x8DC2370)
#define MIHOYO_SDK_SECURITYTUNNEL_TESTFILEREAD_OFFSET UNITYSDK_OFFSET(0x8DBB210)
#define MIHOYO_SDK_SECURITYTUNNEL_TESTFILESAVE_OFFSET UNITYSDK_OFFSET(0x8DBB070)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYCONNECT_OFFSET UNITYSDK_OFFSET(0x8DB4180)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYDISCONNCT_OFFSET UNITYSDK_OFFSET(0x8DB6300)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYLOGIN_OFFSET UNITYSDK_OFFSET(0x8DBB2D0)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYLOGOUT_OFFSET UNITYSDK_OFFSET(0x8DBB530)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYWRITEPENDINGQUEUE_OFFSET UNITYSDK_OFFSET(0x8DC0DB0)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYWRITE_1_OFFSET UNITYSDK_OFFSET(0x8DBF970)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYWRITE_OFFSET UNITYSDK_OFFSET(0x8DB8160)
#define MIHOYO_SDK_SECURITYTUNNEL_WRITETHREAD_OFFSET UNITYSDK_OFFSET(0x8DBFB90)
#define MIHOYO_SDK_SECURITYTUNNEL_WRITE_1_OFFSET UNITYSDK_OFFSET(0x8DC2360)
#define MIHOYO_SDK_SECURITYTUNNEL_WRITE_OFFSET UNITYSDK_OFFSET(0x8DC1550)
#define MIHOYO_SDK_SECURITYTUNNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x8DC1EE0)
#define MIHOYO_SDK_SECURITYTUNNEL__ENQUEUEFILETASK_B__36_0_OFFSET UNITYSDK_OFFSET(0x8DC2F40)
#define MIHOYO_SDK_SECURITYTUNNEL__PING_B__66_0_OFFSET UNITYSDK_OFFSET(0x8DC3EB0)
#define MIHOYO_SDK_SECURITYTUNNEL__SAFECONNECT_B__22_0_OFFSET UNITYSDK_OFFSET(0x8DC2A80)
#define MIHOYO_SDK_SECURITYTUNNEL__SAFEDISCONNECT_B__24_0_OFFSET UNITYSDK_OFFSET(0x8DC2C40)
#define MIHOYO_SDK_SECURITYTUNNEL__STARTRECEIVEPACKET_B__52_0_OFFSET UNITYSDK_OFFSET(0x8DC3E20)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYDISCONNCT_B__23_0_OFFSET UNITYSDK_OFFSET(0x8DC2BB0)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYLOGIN_B__43_0_OFFSET UNITYSDK_OFFSET(0x8DC2F50)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYLOGOUT_B__44_0_OFFSET UNITYSDK_OFFSET(0x8DC3910)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYWRITE_B__59_0_OFFSET UNITYSDK_OFFSET(0x8DC3E30)
#define MIHOYO_SDK_SECURITYTUNNEL__WRITETHREAD_B__60_0_OFFSET UNITYSDK_OFFSET(0x8DC3E40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_TypeDefinitionIndex = 42980;

	class SecurityTunnel : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_FileTransferDirectory()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_TypeDefinitionIndex)->GetStaticField(0x4D070);
		}
		static ::System::Boolean* StaticGet_EnableSDKThreadPrefix()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_TypeDefinitionIndex)->GetStaticField(0xFC90);
		}
		::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction* OnDisconnected; // 0x10
		::System::Object* locker; // 0x18
		::MiHoYo::SDK::SecurityTunnel_AuthInfo authInfo; // 0x20
		::System::Collections::Generic::Queue_1<::MiHoYo::SDK::SecurityTunnel_DataWrapper*>* pendingQueue; // 0x60
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SecurityTunnel_ServerAddress>* addresses; // 0x68
		::System::Timers::Timer* pingTimer; // 0x70
		::MiHoYo::SDK::SecurityTunnel_CryptoUtil* crypto; // 0x78
		::System::Collections::Generic::Queue_1<::MiHoYo::SDK::SecurityTunnel_FileTask*>* fileTasks; // 0x80
		::MiHoYo::SDK::SecurityTunnel_PacketIDGenerator* packetIDGenerator; // 0x88
		::System::Net::Sockets::TcpClient* tcpClient; // 0x90
		::System::Collections::Generic::Queue_1<::Il2CppArray<::System::Byte>*>* writeQueue; // 0x98
		::MiHoYo::SDK::SecurityTunnel_OnReceivePacketAction* OnReceivePacket; // 0xA0
		::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction* OnSDKEventCallback; // 0xA8
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SecurityTunnel_File*>* files; // 0xB0
		::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction* OnServerEventCallback; // 0xB8
		::System::String* rsaPublicKey; // 0xC0
		::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction* OnServerShutdownCallback; // 0xC8
		::MiHoYo::SDK::SecurityTunnel_ReadWriteLock* tcpLocker; // 0xD0
		::MiHoYo::SDK::SecurityTunnel_OnConnectedAction* OnConnected; // 0xD8
		::System::Net::Sockets::NetworkStream* tcpStream; // 0xE0
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SecurityTunnel_PacketResponseCallback>* packetResponseCallbacks; // 0xE8
		::MiHoYo::SDK::SecurityTunnel_ServerAddress currentAddress; // 0xF0
		::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction* OnServerKickOffCallback; // 0x100
		::System::Boolean isPingTimerStarted; // 0x108
		::System::Boolean isSecretKeyExchanged; // 0x109
		::System::Boolean isFileTransfering; // 0x10A
		::System::UInt32 packetMagic; // 0x10C
		::System::TimeSpan ResponseCallbackTimeout; // 0x110
		::System::TimeSpan ReceiveTimeout; // 0x118
		::System::TimeSpan SendTimeout; // 0x120
		::System::Int32 currentPingTimeoutCount; // 0x128
		::System::Boolean isWriting; // 0x12C
		::System::Boolean disconnectWhenPingTimeout; // 0x12D
		::MiHoYo::SDK::SecurityTunnel_TunnelState _State_k__BackingField; // 0x130
		::System::Int32 maximimPingTimeoutCount; // 0x134
		::System::TimeSpan ConnectTimeout; // 0x138
		::System::TimeSpan PingInterval; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__CTOR_OFFSET))(this);
		}

		::System::Void TryConnect(::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>* addresses, ::MiHoYo::SDK::SecurityTunnel_AuthInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>*, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TRYCONNECT_OFFSET))(this, addresses, info);
		}

		::System::Void RetryConnect(::System::Boolean shouldRetryCurrent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_RETRYCONNECT_OFFSET))(this, shouldRetryCurrent);
		}

		::System::Void SafeConnect(::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>* addresses, ::MiHoYo::SDK::SecurityTunnel_AuthInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>*, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SAFECONNECT_OFFSET))(this, addresses, info);
		}

		::System::Void TryDisconnct()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TRYDISCONNCT_OFFSET))(this);
		}

		::System::Void SafeDisconnect(::System::Boolean shouldNotifyGame, ::System::Action* completion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SAFEDISCONNECT_OFFSET))(this, shouldNotifyGame, completion);
		}

		::Il2CppArray<::System::Byte>* Encrypt(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ENCRYPT_OFFSET))(this, bytes);
		}

		::Il2CppArray<::System::Byte>* Decrypt(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_DECRYPT_OFFSET))(this, bytes);
		}

		::System::Void ConfirmNextPendingKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CONFIRMNEXTPENDINGKEY_OFFSET))(this);
		}

		::System::String* BytesToHex(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_BYTESTOHEX_OFFSET))(this, bytes);
		}

		::System::Void ExchangeSecretKey(::MiHoYo::SDK::SecurityTunnel_AuthInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_EXCHANGESECRETKEY_OFFSET))(this, info);
		}

		::System::Void EnqueueFileTask(::MiHoYo::SDK::SecurityTunnel_Packet* packet)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ENQUEUEFILETASK_OFFSET))(this, packet);
		}

		::System::Void EnqueueFileTask_1(::MiHoYo::SDK::SecurityTunnel_FileTask* task)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_FileTask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ENQUEUEFILETASK_1_OFFSET))(this, task);
		}

		::System::Void FileTransferThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILETRANSFERTHREAD_OFFSET))(this);
		}

		::System::Void FilePartReceived(::MiHoYo::SDK::SecurityTunnel_FilePart* part)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_FilePart*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILEPARTRECEIVED_OFFSET))(this, part);
		}

		::System::Void SendFileTransferFailure(::System::UInt64 id, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SENDFILETRANSFERFAILURE_OFFSET))(this, id, msg);
		}

		::System::Void SendFileEndRequest(::Il2CppArray<::System::Byte>* buffer, ::MiHoYo::SDK::SecurityTunnel_FileHeader* header)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::SecurityTunnel_FileHeader*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SENDFILEENDREQUEST_OFFSET))(this, buffer, header);
		}

		::System::String* TestFileSave()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TESTFILESAVE_OFFSET))(this);
		}

		::System::String* TestFileRead(::System::String* path)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TESTFILEREAD_OFFSET))(this, path);
		}

		::System::Void TryLogin(::MiHoYo::SDK::SecurityTunnel_AuthInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TRYLOGIN_OFFSET))(this, info);
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

		::System::Void SafeEnqueueCallback(::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* callback, ::MiHoYo::SDK::SecurityTunnel_Packet* packet)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction*, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SAFEENQUEUECALLBACK_OFFSET))(this, callback, packet);
		}

		::System::Void SafeDequeueCallback(::System::UInt64 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SAFEDEQUEUECALLBACK_OFFSET))(this, id);
		}

		::System::Void DispatchPacket(::MiHoYo::SDK::SecurityTunnel_Packet* packet)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_DISPATCHPACKET_OFFSET))(this, packet);
		}

		::System::Void TryWrite(::MiHoYo::SDK::SecurityTunnel_Packet* packet, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_Packet*, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TRYWRITE_OFFSET))(this, packet, callback);
		}

		::System::Void TryWrite_1(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TRYWRITE_1_OFFSET))(this, bytes);
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

		::System::Void set_State(::MiHoYo::SDK::SecurityTunnel_TunnelState value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_TunnelState))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SET_STATE_OFFSET))(this, value);
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

		static ::System::Void SetThreadPrefixEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SETTHREADPREFIXENABLE_OFFSET))(enable);
		}

		::System::Void SendMessage2Server(::System::Int32 evt, ::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SENDMESSAGE2SERVER_OFFSET))(this, evt, bytes);
		}

		::System::Void SendMessage2SDK(::System::Int32 evt, ::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SENDMESSAGE2SDK_OFFSET))(this, evt, bytes);
		}

		::System::Void add_OnConnected(::MiHoYo::SDK::SecurityTunnel_OnConnectedAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnConnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ADD_ONCONNECTED_OFFSET))(this, value);
		}

		::System::Void remove_OnConnected(::MiHoYo::SDK::SecurityTunnel_OnConnectedAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnConnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONCONNECTED_OFFSET))(this, value);
		}

		::System::Void add_OnDisconnected(::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ADD_ONDISCONNECTED_OFFSET))(this, value);
		}

		::System::Void remove_OnDisconnected(::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONDISCONNECTED_OFFSET))(this, value);
		}

		::System::Void add_OnReceivePacket(::MiHoYo::SDK::SecurityTunnel_OnReceivePacketAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnReceivePacketAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ADD_ONRECEIVEPACKET_OFFSET))(this, value);
		}

		::System::Void remove_OnReceivePacket(::MiHoYo::SDK::SecurityTunnel_OnReceivePacketAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnReceivePacketAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONRECEIVEPACKET_OFFSET))(this, value);
		}

		::System::Void add_OnSDKEventCallback(::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSDKEVENTCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_OnSDKEventCallback(::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSDKEVENTCALLBACK_OFFSET))(this, value);
		}

		::System::Void add_OnServerEventCallback(::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVEREVENTCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_OnServerEventCallback(::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVEREVENTCALLBACK_OFFSET))(this, value);
		}

		::System::Void add_OnServerKickOffCallback(::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVERKICKOFFCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_OnServerKickOffCallback(::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVERKICKOFFCALLBACK_OFFSET))(this, value);
		}

		::System::Void add_OnServerShutdownCallback(::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVERSHUTDOWNCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_OnServerShutdownCallback(::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVERSHUTDOWNCALLBACK_OFFSET))(this, value);
		}

		::System::Void Connect(::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>* addresses, ::MiHoYo::SDK::SecurityTunnel_AuthInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>*, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CONNECT_OFFSET))(this, addresses, info);
		}

		::System::Void Disconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_DISCONNECT_OFFSET))(this);
		}

		::System::Void Write(::MiHoYo::SDK::SecurityTunnel_Packet* packet, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* onResponseCallback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_Packet*, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_WRITE_OFFSET))(this, packet, onResponseCallback);
		}

		::System::Void Write_1(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_WRITE_1_OFFSET))(this, bytes);
		}

		::System::Void TestErrorLog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_TESTERRORLOG_OFFSET))(this);
		}

		::System::Void _SafeConnect_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__SAFECONNECT_B__22_0_OFFSET))(this);
		}

		::System::Void _TryDisconnct_b__23_0(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__TRYDISCONNCT_B__23_0_OFFSET))(this, _);
		}

		::System::Void _SafeDisconnect_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__SAFEDISCONNECT_B__24_0_OFFSET))(this);
		}

		::System::Void _EnqueueFileTask_b__36_0(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__ENQUEUEFILETASK_B__36_0_OFFSET))(this, _);
		}

		::System::Void _TryLogin_b__43_0(::System::Boolean isSuccess, ::MiHoYo::SDK::SecurityTunnel_Packet* responsePacket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__TRYLOGIN_B__43_0_OFFSET))(this, isSuccess, responsePacket);
		}

		::System::Void _TryLogout_b__44_0(::System::Boolean isSuccess, ::MiHoYo::SDK::SecurityTunnel_Packet* responsePacket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__TRYLOGOUT_B__44_0_OFFSET))(this, isSuccess, responsePacket);
		}

		::System::Void _StartReceivePacket_b__52_0(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__STARTRECEIVEPACKET_B__52_0_OFFSET))(this, _);
		}

		::System::Void _TryWrite_b__59_0(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__TRYWRITE_B__59_0_OFFSET))(this, _);
		}

		::System::Void _WriteThread_b__60_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__WRITETHREAD_B__60_0_OFFSET))(this);
		}

		::System::Void _Ping_b__66_0(::System::Object* _p1, ::System::Timers::ElapsedEventArgs* _p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__PING_B__66_0_OFFSET))(this, _p1, _p2);
		}
	};
}
