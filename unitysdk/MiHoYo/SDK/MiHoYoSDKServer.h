#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ClientType.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/MiHoYo/SDK/MiHoYoSDKServer_LogLevel.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_ErrorCode.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_PacketCommand.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_PacketFlag.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_ServerAddress.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class MiHoYoSDKGameRoleModel; }
namespace MiHoYo::SDK { class MiHoYoSDKServer_GameParameterModel; }
namespace MiHoYo::SDK { class MiHoYoSDKServer_LoginResultModel; }
namespace MiHoYo::SDK { class MiHoYoSDKServer_NetworkResponseModel; }
namespace MiHoYo::SDK { class MiHoYoSDKServer_OnConnectDelegate; }
namespace MiHoYo::SDK { class SecurityTunnel; }
namespace MiHoYo::SDK { class SecurityTunnel_OnConnectedAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnDisconnectedAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnLogErrorAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnLogErrorWithCodeAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnLogMessageAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnLogVerboseAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnSDKEventCallbackAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnServerEventCallbackAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnServerKickOffCallbackAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnServerShutdownCallbackAction; }
namespace MiHoYo::SDK { class SecurityTunnel_Packet; }
namespace MiHoYo::SDK { class SecurityTunnel_ResponseCallbackAction; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class MemoryStream; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0xA1AE180)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONCONNECTRESULT_OFFSET UNITYSDK_OFFSET(0xA1AE080)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xA1AE280)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONGETMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1AE580)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGERRORWITHCODE_OFFSET UNITYSDK_OFFSET(0xA1AEB80)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGERROR_OFFSET UNITYSDK_OFFSET(0xA1AEA80)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1AE980)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGVERBOSE_OFFSET UNITYSDK_OFFSET(0xA1AE880)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSDKEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1AE380)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSERVEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1AE480)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSERVERKICKOFF_OFFSET UNITYSDK_OFFSET(0xA1AE680)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSERVERSHUTDOWN_OFFSET UNITYSDK_OFFSET(0xA1AE780)
#define MIHOYO_SDK_MIHOYOSDKSERVER_CONNECT_OFFSET UNITYSDK_OFFSET(0xA1AEC80)
#define MIHOYO_SDK_MIHOYOSDKSERVER_DEFAULTIPLIST_OFFSET UNITYSDK_OFFSET(0xA1B1E40)
#define MIHOYO_SDK_MIHOYOSDKSERVER_DISCONNECTTCP_OFFSET UNITYSDK_OFFSET(0xA1AFA10)
#define MIHOYO_SDK_MIHOYOSDKSERVER_DISCONNECT_OFFSET UNITYSDK_OFFSET(0xA1AF7B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_GETGATEADDRESSURL_OFFSET UNITYSDK_OFFSET(0xA1B0FD0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_GETGATEADDRESS_OFFSET UNITYSDK_OFFSET(0xA1AED10)
#define MIHOYO_SDK_MIHOYOSDKSERVER_GETKIBANAREPORTURL_OFFSET UNITYSDK_OFFSET(0xA1B13C0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_GETPUBLICKEY_OFFSET UNITYSDK_OFFSET(0xA1B1370)
#define MIHOYO_SDK_MIHOYOSDKSERVER_GETREQUEST_OFFSET UNITYSDK_OFFSET(0xA1B16F0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA1AD900)
#define MIHOYO_SDK_MIHOYOSDKSERVER_GET_OFFSET UNITYSDK_OFFSET(0xA1B4C30)
#define MIHOYO_SDK_MIHOYOSDKSERVER_INVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0xA1B0320)
#define MIHOYO_SDK_MIHOYOSDKSERVER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1AFAC0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_KIBANAREPORTKCPONMAINTHREAD_OFFSET UNITYSDK_OFFSET(0xA1B1930)
#define MIHOYO_SDK_MIHOYOSDKSERVER_KIBANAREPORT_OFFSET UNITYSDK_OFFSET(0xA1ADBB0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1B5340)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA1ADE20)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1B4F60)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETCONNECTED_OFFSET UNITYSDK_OFFSET(0xA1B3C60)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETCONNECTRESULT_OFFSET UNITYSDK_OFFSET(0xA1B21E0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xA1B3D00)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETGATEADDRESSFAILED_OFFSET UNITYSDK_OFFSET(0xA1B1BB0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGERRORWITHCODE_OFFSET UNITYSDK_OFFSET(0xA1B4040)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGERROR_OFFSET UNITYSDK_OFFSET(0xA1B3F60)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1B3E80)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGVERBOSE_OFFSET UNITYSDK_OFFSET(0xA1B3DA0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSDKEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1B4120)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSERVEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1B4210)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSERVERKICKOFF_OFFSET UNITYSDK_OFFSET(0xA1B43F0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSERVERSHUTDOWN_OFFSET UNITYSDK_OFFSET(0xA1B4490)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETTIMEOUT_OFFSET UNITYSDK_OFFSET(0xA1B52E0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONMESSAGERESPONSE_OFFSET UNITYSDK_OFFSET(0xA1B4300)
#define MIHOYO_SDK_MIHOYOSDKSERVER_POSTREQUEST_OFFSET UNITYSDK_OFFSET(0xA1B4CE0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_POST_OFFSET UNITYSDK_OFFSET(0xA1B4B80)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0xA1B3460)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0xA1AE200)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONCONNECTRESULT_OFFSET UNITYSDK_OFFSET(0xA1AE100)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xA1AE300)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONGETMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1AE600)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGERRORWITHCODE_OFFSET UNITYSDK_OFFSET(0xA1AEC00)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGERROR_OFFSET UNITYSDK_OFFSET(0xA1AEB00)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1AEA00)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGVERBOSE_OFFSET UNITYSDK_OFFSET(0xA1AE900)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSDKEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1AE400)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSERVEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1AE500)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSERVERKICKOFF_OFFSET UNITYSDK_OFFSET(0xA1AE700)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSERVERSHUTDOWN_OFFSET UNITYSDK_OFFSET(0xA1AE800)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SAVEIPADDRESS_OFFSET UNITYSDK_OFFSET(0xA1B1A30)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE2SDK_OFFSET UNITYSDK_OFFSET(0xA1AEFB0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE2SERVER_OFFSET UNITYSDK_OFFSET(0xA1AEE60)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE__1_OFFSET UNITYSDK_OFFSET(0xA1AF3D0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE__2_OFFSET UNITYSDK_OFFSET(0xA1AF600)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0xA1AF100)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SETENV_OFFSET UNITYSDK_OFFSET(0xA1B0120)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SETGAMEPARAMETERS_OFFSET UNITYSDK_OFFSET(0xA1B0070)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SETGAMEROLE_OFFSET UNITYSDK_OFFSET(0xA1AFF20)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SETLOGINRESULT_OFFSET UNITYSDK_OFFSET(0xA1B0360)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SETSDKINIT_OFFSET UNITYSDK_OFFSET(0xA1B0310)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SETSERVERID_OFFSET UNITYSDK_OFFSET(0xA1AFFD0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA1ADE10)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SHAREDHEADERS_OFFSET UNITYSDK_OFFSET(0xA1B4530)
#define MIHOYO_SDK_MIHOYOSDKSERVER_STARTSERCURITYTUNNEL_OFFSET UNITYSDK_OFFSET(0xA1B2350)
#define MIHOYO_SDK_MIHOYOSDKSERVER_TESTERRORLOG_OFFSET UNITYSDK_OFFSET(0xA1B0FB0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_TRYLOGOUT_OFFSET UNITYSDK_OFFSET(0xA1ADF50)
#define MIHOYO_SDK_MIHOYOSDKSERVER_UNREGISTEREVENT_OFFSET UNITYSDK_OFFSET(0xA1B2C60)
#define MIHOYO_SDK_MIHOYOSDKSERVER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1B5380)
#define MIHOYO_SDK_MIHOYOSDKSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0xA1B5360)
#define MIHOYO_SDK_MIHOYOSDKSERVER__GETGATEADDRESS_B__83_0_OFFSET UNITYSDK_OFFSET(0xA1B5410)
#define MIHOYO_SDK_MIHOYOSDKSERVER__ONGETCONNECTED_B__92_0_OFFSET UNITYSDK_OFFSET(0xA1B5750)
#define MIHOYO_SDK_MIHOYOSDKSERVER__ONGETDISCONNECTED_B__93_0_OFFSET UNITYSDK_OFFSET(0xA1B5AF0)
#define MIHOYO_SDK_MIHOYOSDKSERVER__ONGETSERVERKICKOFF_B__101_0_OFFSET UNITYSDK_OFFSET(0xA1B5C00)
#define MIHOYO_SDK_MIHOYOSDKSERVER__ONGETSERVERSHUTDOWN_B__102_0_OFFSET UNITYSDK_OFFSET(0xA1B5D10)
#define MIHOYO_SDK_MIHOYOSDKSERVER__SENDMESSAGE_B__65_0_OFFSET UNITYSDK_OFFSET(0xA1B53E0)
#define MIHOYO_SDK_MIHOYOSDKSERVER__SENDMESSAGE_B__66_0_OFFSET UNITYSDK_OFFSET(0xA1B53F0)
#define MIHOYO_SDK_MIHOYOSDKSERVER__SENDMESSAGE_B__67_0_OFFSET UNITYSDK_OFFSET(0xA1B5400)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_TypeDefinitionIndex = 43724;

	class MiHoYoSDKServer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKServer** StaticGet__instance()
		{
			return (::MiHoYo::SDK::MiHoYoSDKServer**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0xFC60);
		}
		static ::MiHoYo::SDK::MiHoYoSDKServer_LoginResultModel** StaticGet_loginResult()
		{
			return (::MiHoYo::SDK::MiHoYoSDKServer_LoginResultModel**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0xFC68);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_IPList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0xFC70);
		}
		static ::MiHoYo::SDK::ClientType* StaticGet_clientType()
		{
			return (::MiHoYo::SDK::ClientType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x4F20);
		}
		static ::System::Boolean* StaticGet_enableIOSKibanaReport()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x4F24);
		}
		static ::System::Boolean* StaticGet_enableIOSCustomPool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x4F25);
		}
		static ::System::Boolean* StaticGet_enableAndroidCustomPool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x4F26);
		}
		static ::System::Boolean* StaticGet_enableAndroidKibanaReport()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x4F27);
		}
		static ::System::Boolean* StaticGet_enableCustomPool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x4F28);
		}
		static ::System::Boolean* StaticGet_enableKibanaReport()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x4F29);
		}
		// static const ::System::Int32 TimeOutValue = 0x80000000; // 0x0
		// static const ::System::Int32 ExceptionValue = 0x80000001; // 0x0
		::System::String* IPListPersistenceKeyPrefix; // 0x18
		::System::DateTime dispatchBeginTime; // 0x20
		::System::DateTime tcpBeginTime; // 0x28
		::MiHoYo::SDK::MiHoYoSDKServer_OnConnectDelegate* OnConnectResult; // 0x30
		::MiHoYo::SDK::SecurityTunnel_OnConnectedAction* OnConnected; // 0x38
		::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction* OnDisconnected; // 0x40
		::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction* OnSDKEventCallback; // 0x48
		::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction* OnServerEventCallback; // 0x50
		::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* OnGetMessage; // 0x58
		::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction* OnServerKickOff; // 0x60
		::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction* OnServerShutdown; // 0x68
		::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction* OnLogVerbose; // 0x70
		::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction* OnLogMessage; // 0x78
		::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction* OnLogError; // 0x80
		::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction* OnLogErrorWithCode; // 0x88
		::MiHoYo::SDK::SecurityTunnel* tunnel; // 0x90
		::MiHoYo::SDK::EnvType env; // 0x98
		::MiHoYo::SDK::MiHoYoSDKGameRoleModel* gameRole; // 0xA0
		::MiHoYo::SDK::MiHoYoSDKServer_GameParameterModel* gameParameter; // 0xA8
		::System::Boolean isInit; // 0xB0
		::System::Int32 loginCallbackIndex; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::MiHoYoSDKServer* get_Instance()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKServer*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::MiHoYoSDKServer* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::MiHoYoSDKServer*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONDESTROY_OFFSET))(this);
		}

		::System::Void add_OnConnectResult(::MiHoYo::SDK::MiHoYoSDKServer_OnConnectDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKServer_OnConnectDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONCONNECTRESULT_OFFSET))(this, a1);
		}

		::System::Void remove_OnConnectResult(::MiHoYo::SDK::MiHoYoSDKServer_OnConnectDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKServer_OnConnectDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONCONNECTRESULT_OFFSET))(this, a1);
		}

		::System::Void add_OnConnected(::MiHoYo::SDK::SecurityTunnel_OnConnectedAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnConnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONCONNECTED_OFFSET))(this, a1);
		}

		::System::Void remove_OnConnected(::MiHoYo::SDK::SecurityTunnel_OnConnectedAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnConnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONCONNECTED_OFFSET))(this, a1);
		}

		::System::Void add_OnDisconnected(::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONDISCONNECTED_OFFSET))(this, a1);
		}

		::System::Void remove_OnDisconnected(::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONDISCONNECTED_OFFSET))(this, a1);
		}

		::System::Void add_OnSDKEventCallback(::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSDKEVENTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_OnSDKEventCallback(::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSDKEVENTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void add_OnServerEventCallback(::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSERVEREVENTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_OnServerEventCallback(::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSERVEREVENTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void add_OnGetMessage(::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONGETMESSAGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnGetMessage(::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONGETMESSAGE_OFFSET))(this, a1);
		}

		::System::Void add_OnServerKickOff(::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSERVERKICKOFF_OFFSET))(this, a1);
		}

		::System::Void remove_OnServerKickOff(::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSERVERKICKOFF_OFFSET))(this, a1);
		}

		::System::Void add_OnServerShutdown(::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSERVERSHUTDOWN_OFFSET))(this, a1);
		}

		::System::Void remove_OnServerShutdown(::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSERVERSHUTDOWN_OFFSET))(this, a1);
		}

		::System::Void add_OnLogVerbose(::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGVERBOSE_OFFSET))(this, a1);
		}

		::System::Void remove_OnLogVerbose(::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGVERBOSE_OFFSET))(this, a1);
		}

		::System::Void add_OnLogMessage(::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGMESSAGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnLogMessage(::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGMESSAGE_OFFSET))(this, a1);
		}

		::System::Void add_OnLogError(::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGERROR_OFFSET))(this, a1);
		}

		::System::Void remove_OnLogError(::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGERROR_OFFSET))(this, a1);
		}

		::System::Void add_OnLogErrorWithCode(::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGERRORWITHCODE_OFFSET))(this, a1);
		}

		::System::Void remove_OnLogErrorWithCode(::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGERRORWITHCODE_OFFSET))(this, a1);
		}

		::System::Void Connect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_CONNECT_OFFSET))(this);
		}

		::System::Void SendMessage2Server(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE2SERVER_OFFSET))(this, a1, a2);
		}

		::System::Void SendMessage2SDK(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE2SDK_OFFSET))(this, a1, a2);
		}

		::System::Void SendMessage_(::MiHoYo::SDK::SecurityTunnel_PacketFlag a1, ::MiHoYo::SDK::SecurityTunnel_PacketCommand a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_PacketFlag, ::MiHoYo::SDK::SecurityTunnel_PacketCommand, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE__OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendMessage__1(::MiHoYo::SDK::SecurityTunnel_PacketFlag a1, ::MiHoYo::SDK::SecurityTunnel_PacketCommand a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_PacketFlag, ::MiHoYo::SDK::SecurityTunnel_PacketCommand, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE__1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendMessage__2(::System::IO::MemoryStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE__2_OFFSET))(this, a1);
		}

		::System::Void Disconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_DISCONNECT_OFFSET))(this);
		}

		::System::Void DisconnectTCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_DISCONNECTTCP_OFFSET))(this);
		}

		::System::Void TryLogout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_TRYLOGOUT_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetSDKInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SETSDKINIT_OFFSET))(this);
		}

		::System::Void InvokeCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_INVOKECALLBACK_OFFSET))(this, a1, a2);
		}

		static ::System::Void SetLoginResult(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SETLOGINRESULT_OFFSET))(a1);
		}

		::System::Void TestErrorLog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_TESTERRORLOG_OFFSET))(this);
		}

		::System::Void SetEnv(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SETENV_OFFSET))(this, a1);
		}

		::System::String* GetGateAddressURL(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_GETGATEADDRESSURL_OFFSET))(this, a1);
		}

		::System::String* GetPublicKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_GETPUBLICKEY_OFFSET))(this);
		}

		::System::String* GetKibanaReportURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_GETKIBANAREPORTURL_OFFSET))(this);
		}

		::System::Void SetGameRole(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SETGAMEROLE_OFFSET))(this, a1);
		}

		::System::Void SetServerId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SETSERVERID_OFFSET))(this, a1);
		}

		::System::Void SetGameParameters(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SETGAMEPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void GetGateAddress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_GETGATEADDRESS_OFFSET))(this);
		}

		::System::Void KibanaReportKCPOnMainThread(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::MiHoYoSDKServer_LogLevel a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::MiHoYoSDKServer_LogLevel, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_KIBANAREPORTKCPONMAINTHREAD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SaveIPAddress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SAVEIPADDRESS_OFFSET))(this);
		}

		::System::Void OnGetGateAddressFailed(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETGATEADDRESSFAILED_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::String*>* DefaultIPList()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_DEFAULTIPLIST_OFFSET))(this);
		}

		::System::Void OnGetConnectResult(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETCONNECTRESULT_OFFSET))(this, a1, a2);
		}

		::System::Void StartSercurityTunnel(::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_STARTSERCURITYTUNNEL_OFFSET))(this, a1);
		}

		::System::Void RegisterEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REGISTEREVENT_OFFSET))(this);
		}

		::System::Void UnregisterEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_UNREGISTEREVENT_OFFSET))(this);
		}

		::System::Void OnGetConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETCONNECTED_OFFSET))(this);
		}

		::System::Void OnGetDisconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETDISCONNECTED_OFFSET))(this);
		}

		::System::Void OnGetLogVerbose(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGVERBOSE_OFFSET))(this, a1);
		}

		::System::Void OnGetLogMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGMESSAGE_OFFSET))(this, a1);
		}

		::System::Void OnGetLogError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGERROR_OFFSET))(this, a1);
		}

		::System::Void OnGetLogErrorWithCode(::MiHoYo::SDK::SecurityTunnel_ErrorCode a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_ErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGERRORWITHCODE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetSDKEventCallback(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSDKEVENTCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGetServerEventCallback(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSERVEREVENTCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnMessageResponse(::System::Boolean a1, ::MiHoYo::SDK::SecurityTunnel_Packet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONMESSAGERESPONSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetServerKickOff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSERVERKICKOFF_OFFSET))(this);
		}

		::System::Void OnGetServerShutdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSERVERSHUTDOWN_OFFSET))(this);
		}

		::System::Void KibanaReport(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::MiHoYoSDKServer_LogLevel a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::MiHoYoSDKServer_LogLevel, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_KIBANAREPORT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SharedHeaders()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SHAREDHEADERS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Post(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3, ::System::Action* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_POST_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Collections::IEnumerator* Get(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Action_1<::System::String*>* a3, ::System::Action* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_GET_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PostRequest(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*>* a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_POSTREQUEST_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GetRequest(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Action_1<::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*>* a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_GETREQUEST_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel* OnGetCallback(::System::String* a1)
		{
			return ((::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETCALLBACK_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel* OnGetTimeOut()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETTIMEOUT_OFFSET))(this);
		}

		::System::Void OnCallback(::System::Action_1<::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*>* a1, ::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*>*, ::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void _SendMessage_b__65_0(::System::Boolean a1, ::MiHoYo::SDK::SecurityTunnel_Packet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__SENDMESSAGE_B__65_0_OFFSET))(this, a1, a2);
		}

		::System::Void _SendMessage_b__66_0(::System::Boolean a1, ::MiHoYo::SDK::SecurityTunnel_Packet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__SENDMESSAGE_B__66_0_OFFSET))(this, a1, a2);
		}

		::System::Void _SendMessage_b__67_0(::System::Boolean a1, ::MiHoYo::SDK::SecurityTunnel_Packet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__SENDMESSAGE_B__67_0_OFFSET))(this, a1, a2);
		}

		::System::Void _GetGateAddress_b__83_0(::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__GETGATEADDRESS_B__83_0_OFFSET))(this, a1);
		}

		::System::Void _OnGetConnected_b__92_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__ONGETCONNECTED_B__92_0_OFFSET))(this);
		}

		::System::Void _OnGetDisconnected_b__93_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__ONGETDISCONNECTED_B__93_0_OFFSET))(this);
		}

		::System::Void _OnGetServerKickOff_b__101_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__ONGETSERVERKICKOFF_B__101_0_OFFSET))(this);
		}

		::System::Void _OnGetServerShutdown_b__102_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__ONGETSERVERSHUTDOWN_B__102_0_OFFSET))(this);
		}
	};
}
