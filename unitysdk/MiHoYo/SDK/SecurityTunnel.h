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

#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x8585970)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x8585A70)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONRECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0x8585B70)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSDKEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8585C70)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8585D70)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVERKICKOFFCALLBACK_OFFSET UNITYSDK_OFFSET(0x8585E70)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVERSHUTDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0x8585F70)
#define MIHOYO_SDK_SECURITYTUNNEL_BYTESTOHEX_OFFSET UNITYSDK_OFFSET(0x857FA70)
#define MIHOYO_SDK_SECURITYTUNNEL_CONFIRMNEXTPENDINGKEY_OFFSET UNITYSDK_OFFSET(0x857FA60)
#define MIHOYO_SDK_SECURITYTUNNEL_CONNECT_OFFSET UNITYSDK_OFFSET(0x8586360)
#define MIHOYO_SDK_SECURITYTUNNEL_DECRYPT_OFFSET UNITYSDK_OFFSET(0x857FA40)
#define MIHOYO_SDK_SECURITYTUNNEL_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x85863A0)
#define MIHOYO_SDK_SECURITYTUNNEL_DISPATCHPACKET_OFFSET UNITYSDK_OFFSET(0x8582680)
#define MIHOYO_SDK_SECURITYTUNNEL_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x857FA10)
#define MIHOYO_SDK_SECURITYTUNNEL_ENQUEUEFILETASK_1_OFFSET UNITYSDK_OFFSET(0x857FEF0)
#define MIHOYO_SDK_SECURITYTUNNEL_ENQUEUEFILETASK_OFFSET UNITYSDK_OFFSET(0x857FE90)
#define MIHOYO_SDK_SECURITYTUNNEL_EXCHANGESECRETKEY_OFFSET UNITYSDK_OFFSET(0x857EF00)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEPARTRECEIVED_OFFSET UNITYSDK_OFFSET(0x8580B90)
#define MIHOYO_SDK_SECURITYTUNNEL_FILETRANSFERTHREAD_OFFSET UNITYSDK_OFFSET(0x8580040)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x8583CD0)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x85853B0)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_ISCONNECTING_OFFSET UNITYSDK_OFFSET(0x85853C0)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x8585390)
#define MIHOYO_SDK_SECURITYTUNNEL_PING_OFFSET UNITYSDK_OFFSET(0x8585190)
#define MIHOYO_SDK_SECURITYTUNNEL_READSTREAM_OFFSET UNITYSDK_OFFSET(0x8581D60)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x85859F0)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x8585AF0)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONRECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0x8585BF0)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSDKEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8585CF0)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8585DF0)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVERKICKOFFCALLBACK_OFFSET UNITYSDK_OFFSET(0x8585EF0)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVERSHUTDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0x8585FF0)
#define MIHOYO_SDK_SECURITYTUNNEL_RETRYCONNECT_OFFSET UNITYSDK_OFFSET(0x857E180)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFECONNECT_OFFSET UNITYSDK_OFFSET(0x857E320)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFEDEQUEUECALLBACK_OFFSET UNITYSDK_OFFSET(0x8583B80)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFEDISCONNECT_OFFSET UNITYSDK_OFFSET(0x857E280)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFEENQUEUECALLBACK_OFFSET UNITYSDK_OFFSET(0x8583780)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDFILEENDREQUEST_OFFSET UNITYSDK_OFFSET(0x8581070)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDFILETRANSFERFAILURE_OFFSET UNITYSDK_OFFSET(0x85807D0)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDMESSAGE2SDK_OFFSET UNITYSDK_OFFSET(0x85856B0)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDMESSAGE2SERVER_OFFSET UNITYSDK_OFFSET(0x85853E0)
#define MIHOYO_SDK_SECURITYTUNNEL_SETTHREADPREFIXENABLE_OFFSET UNITYSDK_OFFSET(0x85853D0)
#define MIHOYO_SDK_SECURITYTUNNEL_SET_STATE_OFFSET UNITYSDK_OFFSET(0x85853A0)
#define MIHOYO_SDK_SECURITYTUNNEL_STARTPING_OFFSET UNITYSDK_OFFSET(0x8585180)
#define MIHOYO_SDK_SECURITYTUNNEL_STARTRECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0x857EE70)
#define MIHOYO_SDK_SECURITYTUNNEL_STOPPING_OFFSET UNITYSDK_OFFSET(0x8581B00)
#define MIHOYO_SDK_SECURITYTUNNEL_STREAMREADTHREAD_OFFSET UNITYSDK_OFFSET(0x8581C30)
#define MIHOYO_SDK_SECURITYTUNNEL_TESTERRORLOG_OFFSET UNITYSDK_OFFSET(0x8586440)
#define MIHOYO_SDK_SECURITYTUNNEL_TESTFILEREAD_OFFSET UNITYSDK_OFFSET(0x8581770)
#define MIHOYO_SDK_SECURITYTUNNEL_TESTFILESAVE_OFFSET UNITYSDK_OFFSET(0x8581660)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYCONNECT_OFFSET UNITYSDK_OFFSET(0x857E010)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYDISCONNCT_OFFSET UNITYSDK_OFFSET(0x857F980)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYLOGIN_OFFSET UNITYSDK_OFFSET(0x8581830)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYLOGOUT_OFFSET UNITYSDK_OFFSET(0x85818C0)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYWRITEPENDINGQUEUE_OFFSET UNITYSDK_OFFSET(0x8584EC0)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYWRITE_1_OFFSET UNITYSDK_OFFSET(0x8583CE0)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYWRITE_OFFSET UNITYSDK_OFFSET(0x857FB80)
#define MIHOYO_SDK_SECURITYTUNNEL_WRITETHREAD_OFFSET UNITYSDK_OFFSET(0x8583EE0)
#define MIHOYO_SDK_SECURITYTUNNEL_WRITE_1_OFFSET UNITYSDK_OFFSET(0x8586430)
#define MIHOYO_SDK_SECURITYTUNNEL_WRITE_OFFSET UNITYSDK_OFFSET(0x85856A0)
#define MIHOYO_SDK_SECURITYTUNNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x8586070)
#define MIHOYO_SDK_SECURITYTUNNEL__ENQUEUEFILETASK_B__36_0_OFFSET UNITYSDK_OFFSET(0x85871B0)
#define MIHOYO_SDK_SECURITYTUNNEL__PING_B__66_0_OFFSET UNITYSDK_OFFSET(0x8588190)
#define MIHOYO_SDK_SECURITYTUNNEL__SAFECONNECT_B__22_0_OFFSET UNITYSDK_OFFSET(0x8586B50)
#define MIHOYO_SDK_SECURITYTUNNEL__SAFEDISCONNECT_B__24_0_OFFSET UNITYSDK_OFFSET(0x8586D00)
#define MIHOYO_SDK_SECURITYTUNNEL__STARTRECEIVEPACKET_B__52_0_OFFSET UNITYSDK_OFFSET(0x8588100)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYDISCONNCT_B__23_0_OFFSET UNITYSDK_OFFSET(0x8586C80)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYLOGIN_B__43_0_OFFSET UNITYSDK_OFFSET(0x85871C0)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYLOGOUT_B__44_0_OFFSET UNITYSDK_OFFSET(0x8587BC0)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYWRITE_B__59_0_OFFSET UNITYSDK_OFFSET(0x8588110)
#define MIHOYO_SDK_SECURITYTUNNEL__WRITETHREAD_B__60_0_OFFSET UNITYSDK_OFFSET(0x8588120)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_TypeDefinitionIndex = 37135;

	class SecurityTunnel : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_FileTransferDirectory()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_TypeDefinitionIndex)->GetStaticField(0x124E0);
		}
		static ::System::Boolean* StaticGet_EnableSDKThreadPrefix()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_TypeDefinitionIndex)->GetStaticField(0x56C0);
		}
		::MiHoYo::SDK::SecurityTunnel_OnConnectedAction* OnConnected; // 0x10
		::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction* OnServerEventCallback; // 0x18
		::System::Collections::Generic::Queue_1<::MiHoYo::SDK::SecurityTunnel_DataWrapper*>* pendingQueue; // 0x20
		::System::Net::Sockets::NetworkStream* tcpStream; // 0x28
		::System::Collections::Generic::Queue_1<::Il2CppArray<::System::Byte>*>* writeQueue; // 0x30
		::System::String* rsaPublicKey; // 0x38
		::MiHoYo::SDK::SecurityTunnel_CryptoUtil* crypto; // 0x40
		::MiHoYo::SDK::SecurityTunnel_ReadWriteLock* tcpLocker; // 0x48
		::MiHoYo::SDK::SecurityTunnel_ServerAddress currentAddress; // 0x50
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SecurityTunnel_ServerAddress>* addresses; // 0x60
		::System::Net::Sockets::TcpClient* tcpClient; // 0x68
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SecurityTunnel_File*>* files; // 0x70
		::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction* OnDisconnected; // 0x78
		::MiHoYo::SDK::SecurityTunnel_AuthInfo authInfo; // 0x80
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SecurityTunnel_PacketResponseCallback>* packetResponseCallbacks; // 0xC0
		::MiHoYo::SDK::SecurityTunnel_PacketIDGenerator* packetIDGenerator; // 0xC8
		::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction* OnServerKickOffCallback; // 0xD0
		::MiHoYo::SDK::SecurityTunnel_OnReceivePacketAction* OnReceivePacket; // 0xD8
		::System::Object* locker; // 0xE0
		::System::Timers::Timer* pingTimer; // 0xE8
		::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction* OnServerShutdownCallback; // 0xF0
		::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction* OnSDKEventCallback; // 0xF8
		::System::Collections::Generic::Queue_1<::MiHoYo::SDK::SecurityTunnel_FileTask*>* fileTasks; // 0x100
		::System::TimeSpan PingInterval; // 0x108
		::System::TimeSpan ConnectTimeout; // 0x110
		::System::TimeSpan ResponseCallbackTimeout; // 0x118
		::System::Int32 currentPingTimeoutCount; // 0x120
		::MiHoYo::SDK::SecurityTunnel_TunnelState _State_k__BackingField; // 0x124
		::System::TimeSpan ReceiveTimeout; // 0x128
		::System::UInt32 packetMagic; // 0x130
		::System::Boolean isPingTimerStarted; // 0x134
		::System::Boolean isFileTransfering; // 0x135
		::System::Int32 maximimPingTimeoutCount; // 0x138
		::System::Boolean disconnectWhenPingTimeout; // 0x13C
		::System::Boolean isSecretKeyExchanged; // 0x13D
		::System::Boolean isWriting; // 0x13E
		::System::TimeSpan SendTimeout; // 0x140

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
