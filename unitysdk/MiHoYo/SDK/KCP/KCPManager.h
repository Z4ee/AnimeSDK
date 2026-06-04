#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KCP/KCPLogLevel.h"
#include "unitysdk/MiHoYo/SDK/KCPErrorCode.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_AuthInfo.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class IKCPChannel; }
namespace MiHoYo::SDK { class KCPClient_OnTimeoutDelegate; }
namespace MiHoYo::SDK::KCP { class KCPManager_OnLogErrorWithCodeAction; }
namespace MiHoYo::SDK::KCP { class KCPManager_OnLogMessageAction; }
namespace MiHoYo::SDK::KCP { class KCPManager_OnLogVerboseAction; }
namespace System { class String; }

#define MIHOYO_SDK_KCP_KCPMANAGER_ADD_ONLOGERRORWITHCODE_OFFSET UNITYSDK_OFFSET(0xA17BF30)
#define MIHOYO_SDK_KCP_KCPMANAGER_ADD_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0xA17BDD0)
#define MIHOYO_SDK_KCP_KCPMANAGER_ADD_ONLOGVERBOSE_OFFSET UNITYSDK_OFFSET(0xA17BC70)
#define MIHOYO_SDK_KCP_KCPMANAGER_CONNECTIMPL_OFFSET UNITYSDK_OFFSET(0xA17C5E0)
#define MIHOYO_SDK_KCP_KCPMANAGER_CONNECT_OFFSET UNITYSDK_OFFSET(0xA17C1B0)
#define MIHOYO_SDK_KCP_KCPMANAGER_DISCONNECTPROC_OFFSET UNITYSDK_OFFSET(0xA17C810)
#define MIHOYO_SDK_KCP_KCPMANAGER_DISCONNECT_OFFSET UNITYSDK_OFFSET(0xA17D9B0)
#define MIHOYO_SDK_KCP_KCPMANAGER_HEATBEATPROC_OFFSET UNITYSDK_OFFSET(0xA17D210)
#define MIHOYO_SDK_KCP_KCPMANAGER_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA17C090)
#define MIHOYO_SDK_KCP_KCPMANAGER_KCPKIBANAREPORT_OFFSET UNITYSDK_OFFSET(0xA17D070)
#define MIHOYO_SDK_KCP_KCPMANAGER_ONCONNECT_OFFSET UNITYSDK_OFFSET(0xA17CEB0)
#define MIHOYO_SDK_KCP_KCPMANAGER_ONDISCONNECT_OFFSET UNITYSDK_OFFSET(0xA17D170)
#define MIHOYO_SDK_KCP_KCPMANAGER_ONERROR_OFFSET UNITYSDK_OFFSET(0xA17D180)
#define MIHOYO_SDK_KCP_KCPMANAGER_ONLOG_OFFSET UNITYSDK_OFFSET(0xA17CFA0)
#define MIHOYO_SDK_KCP_KCPMANAGER_RECEIVEPACKETPROC_OFFSET UNITYSDK_OFFSET(0xA17D750)
#define MIHOYO_SDK_KCP_KCPMANAGER_REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0xA17C370)
#define MIHOYO_SDK_KCP_KCPMANAGER_REMOVE_ONLOGERRORWITHCODE_OFFSET UNITYSDK_OFFSET(0xA17BFE0)
#define MIHOYO_SDK_KCP_KCPMANAGER_REMOVE_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0xA17BE80)
#define MIHOYO_SDK_KCP_KCPMANAGER_REMOVE_ONLOGVERBOSE_OFFSET UNITYSDK_OFFSET(0xA17BD20)
#define MIHOYO_SDK_KCP_KCPMANAGER_STARTHEATBEAT_OFFSET UNITYSDK_OFFSET(0xA17CF20)
#define MIHOYO_SDK_KCP_KCPMANAGER_STARTRECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0xA17CCF0)
#define MIHOYO_SDK_KCP_KCPMANAGER_WAITHEATBEATENDED_OFFSET UNITYSDK_OFFSET(0xA17CE10)
#define MIHOYO_SDK_KCP_KCPMANAGER_WAITRECEIVERENDED_OFFSET UNITYSDK_OFFSET(0xA17CD70)
#define MIHOYO_SDK_KCP_KCPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA17C150)
#define MIHOYO_SDK_KCP_KCPMANAGER__DISCONNECT_B__28_0_OFFSET UNITYSDK_OFFSET(0xA17DBC0)
#define MIHOYO_SDK_KCP_KCPMANAGER__STARTHEATBEAT_B__25_0_OFFSET UNITYSDK_OFFSET(0xA17DBB0)
#define MIHOYO_SDK_KCP_KCPMANAGER__STARTRECEIVEPACKET_B__19_0_OFFSET UNITYSDK_OFFSET(0xA17DBA0)

namespace MiHoYo::SDK::KCP
{
	inline static constexpr unsigned int KCPManager_TypeDefinitionIndex = 44053;

	class KCPManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::KCP::KCPManager_OnLogMessageAction** StaticGet_OnLogMessage()
		{
			return (::MiHoYo::SDK::KCP::KCPManager_OnLogMessageAction**)Il2CppClass::FromTypeDefinitionIndex(KCPManager_TypeDefinitionIndex)->GetStaticField(0xDD90);
		}
		static ::MiHoYo::SDK::KCP::KCPManager_OnLogErrorWithCodeAction** StaticGet_OnLogErrorWithCode()
		{
			return (::MiHoYo::SDK::KCP::KCPManager_OnLogErrorWithCodeAction**)Il2CppClass::FromTypeDefinitionIndex(KCPManager_TypeDefinitionIndex)->GetStaticField(0xDD98);
		}
		static ::MiHoYo::SDK::KCP::KCPManager_OnLogVerboseAction** StaticGet_OnLogVerbose()
		{
			return (::MiHoYo::SDK::KCP::KCPManager_OnLogVerboseAction**)Il2CppClass::FromTypeDefinitionIndex(KCPManager_TypeDefinitionIndex)->GetStaticField(0xDDA0);
		}
		static ::MiHoYo::SDK::KCP::KCPManager** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::KCP::KCPManager**)Il2CppClass::FromTypeDefinitionIndex(KCPManager_TypeDefinitionIndex)->GetStaticField(0xDDA8);
		}
		// static const ::System::Int32 KCP_HEATBEAT_TIME_INTERVAL = 0xBB8; // 0x0
		::System::Object* m_lockDisconnect; // 0x10
		::System::Object* m_lockHeatbeat; // 0x18
		::MiHoYo::SDK::SecurityTunnel_AuthInfo m_authInfo; // 0x20
		::System::Object* m_lockReceiver; // 0x60
		::System::Int32 m_nRetryCount; // 0x68
		::System::Int32 m_nReconnectDuration; // 0x6C
		::System::Int32 m_nWaitRecvMsgTimeoutSec; // 0x70
		::System::Boolean m_bIsConnected; // 0x74
		::System::Boolean m_bDisconnect; // 0x75

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnLogVerbose(::MiHoYo::SDK::KCP::KCPManager_OnLogVerboseAction* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KCP::KCPManager_OnLogVerboseAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ADD_ONLOGVERBOSE_OFFSET))(a1);
		}

		static ::System::Void remove_OnLogVerbose(::MiHoYo::SDK::KCP::KCPManager_OnLogVerboseAction* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KCP::KCPManager_OnLogVerboseAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_REMOVE_ONLOGVERBOSE_OFFSET))(a1);
		}

		static ::System::Void add_OnLogMessage(::MiHoYo::SDK::KCP::KCPManager_OnLogMessageAction* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KCP::KCPManager_OnLogMessageAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ADD_ONLOGMESSAGE_OFFSET))(a1);
		}

		static ::System::Void remove_OnLogMessage(::MiHoYo::SDK::KCP::KCPManager_OnLogMessageAction* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KCP::KCPManager_OnLogMessageAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_REMOVE_ONLOGMESSAGE_OFFSET))(a1);
		}

		static ::System::Void add_OnLogErrorWithCode(::MiHoYo::SDK::KCP::KCPManager_OnLogErrorWithCodeAction* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KCP::KCPManager_OnLogErrorWithCodeAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ADD_ONLOGERRORWITHCODE_OFFSET))(a1);
		}

		static ::System::Void remove_OnLogErrorWithCode(::MiHoYo::SDK::KCP::KCPManager_OnLogErrorWithCodeAction* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KCP::KCPManager_OnLogErrorWithCodeAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_REMOVE_ONLOGERRORWITHCODE_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::KCP::KCPManager* Instance()
		{
			return ((::MiHoYo::SDK::KCP::KCPManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_INSTANCE_OFFSET))();
		}

		::System::Int32 Connect(::System::String* a1, ::System::UInt16 a2, ::MiHoYo::SDK::SecurityTunnel_AuthInfo a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::UInt16, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_CONNECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterEvent(::MiHoYo::SDK::KCPClient_OnTimeoutDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KCPClient_OnTimeoutDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_REGISTEREVENT_OFFSET))(this, a1);
		}

		::System::Void ConnectImpl(::System::String* a1, ::System::UInt16 a2, ::MiHoYo::SDK::SecurityTunnel_AuthInfo a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_CONNECTIMPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WaitReceiverEnded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_WAITRECEIVERENDED_OFFSET))(this);
		}

		::System::Void WaitHeatbeatEnded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_WAITHEATBEATENDED_OFFSET))(this);
		}

		::System::Void StartReceivePacket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_STARTRECEIVEPACKET_OFFSET))(this);
		}

		::System::Void OnConnect(::MiHoYo::SDK::IKCPChannel* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONCONNECT_OFFSET))(this, a1, a2);
		}

		::System::Void OnLog(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONLOG_OFFSET))(this, a1, a2);
		}

		::System::Void KCPKibanaReport(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::KCP::KCPLogLevel a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::KCP::KCPLogLevel, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_KCPKIBANAREPORT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnDisconnect(::MiHoYo::SDK::IKCPChannel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONDISCONNECT_OFFSET))(this, a1);
		}

		::System::Void OnError(::MiHoYo::SDK::KCPErrorCode a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KCPErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONERROR_OFFSET))(this, a1, a2);
		}

		::System::Void StartHeatbeat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_STARTHEATBEAT_OFFSET))(this);
		}

		::System::Void HeatbeatProc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_HEATBEATPROC_OFFSET))(this);
		}

		::System::Void ReceivePacketProc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_RECEIVEPACKETPROC_OFFSET))(this);
		}

		::System::Void Disconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_DISCONNECT_OFFSET))(this);
		}

		::System::Void DisconnectProc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_DISCONNECTPROC_OFFSET))(this);
		}

		::System::Void _StartReceivePacket_b__19_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER__STARTRECEIVEPACKET_B__19_0_OFFSET))(this, a1);
		}

		::System::Void _StartHeatbeat_b__25_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER__STARTHEATBEAT_B__25_0_OFFSET))(this, a1);
		}

		::System::Void _Disconnect_b__28_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER__DISCONNECT_B__28_0_OFFSET))(this, a1);
		}
	};
}
