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

#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x1C3062B0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1C3063B0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONRECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0x1C3064B0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSDKEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C3065B0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C3066B0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVERKICKOFFCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C3067B0)
#define MIHOYO_SDK_SECURITYTUNNEL_ADD_ONSERVERSHUTDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C3068B0)
#define MIHOYO_SDK_SECURITYTUNNEL_BYTESTOHEX_OFFSET UNITYSDK_OFFSET(0x1C3007D0)
#define MIHOYO_SDK_SECURITYTUNNEL_CONFIRMNEXTPENDINGKEY_OFFSET UNITYSDK_OFFSET(0x1C3007C0)
#define MIHOYO_SDK_SECURITYTUNNEL_CONNECT_OFFSET UNITYSDK_OFFSET(0x1C306D80)
#define MIHOYO_SDK_SECURITYTUNNEL_DECRYPT_OFFSET UNITYSDK_OFFSET(0x1C3007A0)
#define MIHOYO_SDK_SECURITYTUNNEL_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x1C306DC0)
#define MIHOYO_SDK_SECURITYTUNNEL_DISPATCHPACKET_OFFSET UNITYSDK_OFFSET(0x1C3030F0)
#define MIHOYO_SDK_SECURITYTUNNEL_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x1C300770)
#define MIHOYO_SDK_SECURITYTUNNEL_ENQUEUEFILETASK_1_OFFSET UNITYSDK_OFFSET(0x1C300C80)
#define MIHOYO_SDK_SECURITYTUNNEL_ENQUEUEFILETASK_OFFSET UNITYSDK_OFFSET(0x1C300C20)
#define MIHOYO_SDK_SECURITYTUNNEL_EXCHANGESECRETKEY_OFFSET UNITYSDK_OFFSET(0x1C2FFDD0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEPARTRECEIVED_OFFSET UNITYSDK_OFFSET(0x1C301890)
#define MIHOYO_SDK_SECURITYTUNNEL_FILETRANSFERTHREAD_OFFSET UNITYSDK_OFFSET(0x1C300DD0)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1C304730)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1C305E10)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_ISCONNECTING_OFFSET UNITYSDK_OFFSET(0x1C305E20)
#define MIHOYO_SDK_SECURITYTUNNEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1C305DF0)
#define MIHOYO_SDK_SECURITYTUNNEL_PING_OFFSET UNITYSDK_OFFSET(0x1C305BD0)
#define MIHOYO_SDK_SECURITYTUNNEL_READSTREAM_OFFSET UNITYSDK_OFFSET(0x1C3028D0)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x1C306330)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1C306430)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONRECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0x1C306530)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSDKEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C306630)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C306730)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVERKICKOFFCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C306830)
#define MIHOYO_SDK_SECURITYTUNNEL_REMOVE_ONSERVERSHUTDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C306930)
#define MIHOYO_SDK_SECURITYTUNNEL_RETRYCONNECT_OFFSET UNITYSDK_OFFSET(0x1C2FF1E0)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFECONNECT_OFFSET UNITYSDK_OFFSET(0x1C2FF380)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFEDEQUEUECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C304360)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFEDISCONNECT_OFFSET UNITYSDK_OFFSET(0x1C2FF2E0)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFEENQUEUECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C304000)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDFILEENDREQUEST_OFFSET UNITYSDK_OFFSET(0x1C301E10)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDFILETRANSFERFAILURE_OFFSET UNITYSDK_OFFSET(0x1C301590)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDMESSAGE2SDK_OFFSET UNITYSDK_OFFSET(0x1C306080)
#define MIHOYO_SDK_SECURITYTUNNEL_SENDMESSAGE2SERVER_OFFSET UNITYSDK_OFFSET(0x1C305E40)
#define MIHOYO_SDK_SECURITYTUNNEL_SETTHREADPREFIXENABLE_OFFSET UNITYSDK_OFFSET(0x1C305E30)
#define MIHOYO_SDK_SECURITYTUNNEL_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1C305E00)
#define MIHOYO_SDK_SECURITYTUNNEL_STARTPING_OFFSET UNITYSDK_OFFSET(0x1C305BC0)
#define MIHOYO_SDK_SECURITYTUNNEL_STARTRECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0x1C2FFD40)
#define MIHOYO_SDK_SECURITYTUNNEL_STOPPING_OFFSET UNITYSDK_OFFSET(0x1C302740)
#define MIHOYO_SDK_SECURITYTUNNEL_STREAMREADTHREAD_OFFSET UNITYSDK_OFFSET(0x1C302870)
#define MIHOYO_SDK_SECURITYTUNNEL_TESTERRORLOG_OFFSET UNITYSDK_OFFSET(0x1C306E60)
#define MIHOYO_SDK_SECURITYTUNNEL_TESTFILEREAD_OFFSET UNITYSDK_OFFSET(0x1C302460)
#define MIHOYO_SDK_SECURITYTUNNEL_TESTFILESAVE_OFFSET UNITYSDK_OFFSET(0x1C3022D0)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYCONNECT_OFFSET UNITYSDK_OFFSET(0x1C2FF060)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYDISCONNCT_OFFSET UNITYSDK_OFFSET(0x1C3006E0)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYLOGIN_OFFSET UNITYSDK_OFFSET(0x1C302520)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYLOGOUT_OFFSET UNITYSDK_OFFSET(0x1C3025C0)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYWRITEPENDINGQUEUE_OFFSET UNITYSDK_OFFSET(0x1C305910)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYWRITE_1_OFFSET UNITYSDK_OFFSET(0x1C304740)
#define MIHOYO_SDK_SECURITYTUNNEL_TRYWRITE_OFFSET UNITYSDK_OFFSET(0x1C300910)
#define MIHOYO_SDK_SECURITYTUNNEL_WRITETHREAD_OFFSET UNITYSDK_OFFSET(0x1C304940)
#define MIHOYO_SDK_SECURITYTUNNEL_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1C306E50)
#define MIHOYO_SDK_SECURITYTUNNEL_WRITE_OFFSET UNITYSDK_OFFSET(0x1C306070)
#define MIHOYO_SDK_SECURITYTUNNEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C307480)
#define MIHOYO_SDK_SECURITYTUNNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3069B0)
#define MIHOYO_SDK_SECURITYTUNNEL__ENQUEUEFILETASK_B__36_0_OFFSET UNITYSDK_OFFSET(0x1C307790)
#define MIHOYO_SDK_SECURITYTUNNEL__PING_B__66_0_OFFSET UNITYSDK_OFFSET(0x1C308240)
#define MIHOYO_SDK_SECURITYTUNNEL__SAFECONNECT_B__22_0_OFFSET UNITYSDK_OFFSET(0x1C307490)
#define MIHOYO_SDK_SECURITYTUNNEL__SAFEDISCONNECT_B__24_0_OFFSET UNITYSDK_OFFSET(0x1C307590)
#define MIHOYO_SDK_SECURITYTUNNEL__STARTRECEIVEPACKET_B__52_0_OFFSET UNITYSDK_OFFSET(0x1C308160)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYDISCONNCT_B__23_0_OFFSET UNITYSDK_OFFSET(0x1C307500)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYLOGIN_B__43_0_OFFSET UNITYSDK_OFFSET(0x1C3077A0)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYLOGOUT_B__44_0_OFFSET UNITYSDK_OFFSET(0x1C307CD0)
#define MIHOYO_SDK_SECURITYTUNNEL__TRYWRITE_B__59_0_OFFSET UNITYSDK_OFFSET(0x1C3081C0)
#define MIHOYO_SDK_SECURITYTUNNEL__WRITETHREAD_B__60_0_OFFSET UNITYSDK_OFFSET(0x1C3081D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_TypeDefinitionIndex = 37419;

	class SecurityTunnel : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_FileTransferDirectory()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_TypeDefinitionIndex)->GetStaticField(0x29BB0);
		}
		static ::System::Boolean* StaticGet_EnableSDKThreadPrefix()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_TypeDefinitionIndex)->GetStaticField(0x8870);
		}
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SecurityTunnel_File*>* files; // 0x10
		::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction* OnSDKEventCallback; // 0x18
		::MiHoYo::SDK::SecurityTunnel_ReadWriteLock* tcpLocker; // 0x20
		::System::Collections::Generic::Queue_1<::MiHoYo::SDK::SecurityTunnel_DataWrapper*>* pendingQueue; // 0x28
		::MiHoYo::SDK::SecurityTunnel_PacketIDGenerator* packetIDGenerator; // 0x30
		::System::String* rsaPublicKey; // 0x38
		::MiHoYo::SDK::SecurityTunnel_CryptoUtil* crypto; // 0x40
		::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction* OnServerShutdownCallback; // 0x48
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SecurityTunnel_PacketResponseCallback>* packetResponseCallbacks; // 0x50
		::MiHoYo::SDK::SecurityTunnel_ServerAddress currentAddress; // 0x58
		::System::Collections::Generic::Queue_1<::Il2CppArray<::System::Byte>*>* writeQueue; // 0x68
		::System::Net::Sockets::NetworkStream* tcpStream; // 0x70
		::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction* OnServerKickOffCallback; // 0x78
		::System::Timers::Timer* pingTimer; // 0x80
		::System::Net::Sockets::TcpClient* tcpClient; // 0x88
		::MiHoYo::SDK::SecurityTunnel_OnConnectedAction* OnConnected; // 0x90
		::MiHoYo::SDK::SecurityTunnel_OnReceivePacketAction* OnReceivePacket; // 0x98
		::System::Collections::Generic::Queue_1<::MiHoYo::SDK::SecurityTunnel_FileTask*>* fileTasks; // 0xA0
		::MiHoYo::SDK::SecurityTunnel_AuthInfo authInfo; // 0xA8
		::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction* OnDisconnected; // 0xE8
		::System::Object* locker; // 0xF0
		::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction* OnServerEventCallback; // 0xF8
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SecurityTunnel_ServerAddress>* addresses; // 0x100
		::System::TimeSpan SendTimeout; // 0x108
		::MiHoYo::SDK::SecurityTunnel_TunnelState _State_k__BackingField; // 0x110
		::System::Int32 maximimPingTimeoutCount; // 0x114
		::System::TimeSpan ResponseCallbackTimeout; // 0x118
		::System::TimeSpan ReceiveTimeout; // 0x120
		::System::TimeSpan ConnectTimeout; // 0x128
		::System::Boolean disconnectWhenPingTimeout; // 0x130
		::System::Boolean isSecretKeyExchanged; // 0x131
		::System::Boolean isFileTransfering; // 0x132
		::System::Boolean isPingTimerStarted; // 0x133
		::System::Boolean isWriting; // 0x134
		::System::Int32 currentPingTimeoutCount; // 0x138
		::System::UInt32 packetMagic; // 0x13C
		::System::TimeSpan PingInterval; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL__CCTOR_OFFSET))();
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
