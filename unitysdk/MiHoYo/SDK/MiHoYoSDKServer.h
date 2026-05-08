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

#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A4A0030)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONCONNECTRESULT_OFFSET UNITYSDK_OFFSET(0x1A49FF30)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A4A0130)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONGETMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A4A0430)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGERRORWITHCODE_OFFSET UNITYSDK_OFFSET(0x1A4A0A30)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGERROR_OFFSET UNITYSDK_OFFSET(0x1A4A0930)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A4A0830)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGVERBOSE_OFFSET UNITYSDK_OFFSET(0x1A4A0730)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSDKEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4A0230)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSERVEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4A0330)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSERVERKICKOFF_OFFSET UNITYSDK_OFFSET(0x1A4A0530)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSERVERSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1A4A0630)
#define MIHOYO_SDK_MIHOYOSDKSERVER_CONNECT_OFFSET UNITYSDK_OFFSET(0x1A4A0B30)
#define MIHOYO_SDK_MIHOYOSDKSERVER_DEFAULTIPLIST_OFFSET UNITYSDK_OFFSET(0x1A4A2BF0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_DISCONNECTTCP_OFFSET UNITYSDK_OFFSET(0x1A4A1420)
#define MIHOYO_SDK_MIHOYOSDKSERVER_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x1A4A11E0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_GETGATEADDRESSURL_OFFSET UNITYSDK_OFFSET(0x1A4A1F10)
#define MIHOYO_SDK_MIHOYOSDKSERVER_GETGATEADDRESS_OFFSET UNITYSDK_OFFSET(0x1A4A0BC0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_GETKIBANAREPORTURL_OFFSET UNITYSDK_OFFSET(0x1A4A2320)
#define MIHOYO_SDK_MIHOYOSDKSERVER_GETPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x1A4A22D0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_GETREQUEST_OFFSET UNITYSDK_OFFSET(0x1A4A2380)
#define MIHOYO_SDK_MIHOYOSDKSERVER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A49F770)
#define MIHOYO_SDK_MIHOYOSDKSERVER_GET_OFFSET UNITYSDK_OFFSET(0x1A4A5690)
#define MIHOYO_SDK_MIHOYOSDKSERVER_INVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4A1C90)
#define MIHOYO_SDK_MIHOYOSDKSERVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A4A14C0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_KIBANAREPORTKCPONMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1A4A25D0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_KIBANAREPORT_OFFSET UNITYSDK_OFFSET(0x1A49FBA0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4A5DE0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A49FE30)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4A5990)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A4A4820)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETCONNECTRESULT_OFFSET UNITYSDK_OFFSET(0x1A4A3070)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A4A48A0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETGATEADDRESSFAILED_OFFSET UNITYSDK_OFFSET(0x1A4A2960)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGERRORWITHCODE_OFFSET UNITYSDK_OFFSET(0x1A4A4B60)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGERROR_OFFSET UNITYSDK_OFFSET(0x1A4A4AA0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A4A49E0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGVERBOSE_OFFSET UNITYSDK_OFFSET(0x1A4A4920)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSDKEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4A4C30)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSERVEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4A4D00)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSERVERKICKOFF_OFFSET UNITYSDK_OFFSET(0x1A4A4E90)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSERVERSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1A4A4F10)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONGETTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A4A5D80)
#define MIHOYO_SDK_MIHOYOSDKSERVER_ONMESSAGERESPONSE_OFFSET UNITYSDK_OFFSET(0x1A4A4DD0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_POSTREQUEST_OFFSET UNITYSDK_OFFSET(0x1A4A5730)
#define MIHOYO_SDK_MIHOYOSDKSERVER_POST_OFFSET UNITYSDK_OFFSET(0x1A4A55F0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0x1A4A4110)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A4A00B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONCONNECTRESULT_OFFSET UNITYSDK_OFFSET(0x1A49FFB0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A4A01B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONGETMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A4A04B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGERRORWITHCODE_OFFSET UNITYSDK_OFFSET(0x1A4A0AB0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGERROR_OFFSET UNITYSDK_OFFSET(0x1A4A09B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A4A08B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGVERBOSE_OFFSET UNITYSDK_OFFSET(0x1A4A07B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSDKEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4A02B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSERVEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4A03B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSERVERKICKOFF_OFFSET UNITYSDK_OFFSET(0x1A4A05B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSERVERSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1A4A06B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SAVEIPADDRESS_OFFSET UNITYSDK_OFFSET(0x1A4A26B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE2SDK_OFFSET UNITYSDK_OFFSET(0x1A4A0D90)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE2SERVER_OFFSET UNITYSDK_OFFSET(0x1A4A0D00)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE__1_OFFSET UNITYSDK_OFFSET(0x1A4A0F80)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE__2_OFFSET UNITYSDK_OFFSET(0x1A4A1100)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x1A4A0E20)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SETENV_OFFSET UNITYSDK_OFFSET(0x1A4A1AF0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SETGAMEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1A4A1A40)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SETGAMEROLE_OFFSET UNITYSDK_OFFSET(0x1A4A18C0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SETLOGINRESULT_OFFSET UNITYSDK_OFFSET(0x1A4A1D00)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SETSDKINIT_OFFSET UNITYSDK_OFFSET(0x1A4A1C80)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SETSERVERID_OFFSET UNITYSDK_OFFSET(0x1A4A1970)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A49FE20)
#define MIHOYO_SDK_MIHOYOSDKSERVER_SHAREDHEADERS_OFFSET UNITYSDK_OFFSET(0x1A4A4F90)
#define MIHOYO_SDK_MIHOYOSDKSERVER_STARTSERCURITYTUNNEL_OFFSET UNITYSDK_OFFSET(0x1A4A3520)
#define MIHOYO_SDK_MIHOYOSDKSERVER_TESTERRORLOG_OFFSET UNITYSDK_OFFSET(0x1A4A1EF0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_TRYLOGOUT_OFFSET UNITYSDK_OFFSET(0x1A49FEB0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_UNREGISTEREVENT_OFFSET UNITYSDK_OFFSET(0x1A4A3A00)
#define MIHOYO_SDK_MIHOYOSDKSERVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4A5EC0)
#define MIHOYO_SDK_MIHOYOSDKSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4A5E30)
#define MIHOYO_SDK_MIHOYOSDKSERVER__GETGATEADDRESS_B__83_0_OFFSET UNITYSDK_OFFSET(0x1A4A5F90)
#define MIHOYO_SDK_MIHOYOSDKSERVER__ONGETCONNECTED_B__92_0_OFFSET UNITYSDK_OFFSET(0x1A4A6240)
#define MIHOYO_SDK_MIHOYOSDKSERVER__ONGETDISCONNECTED_B__93_0_OFFSET UNITYSDK_OFFSET(0x1A4A63F0)
#define MIHOYO_SDK_MIHOYOSDKSERVER__ONGETSERVERKICKOFF_B__101_0_OFFSET UNITYSDK_OFFSET(0x1A4A6460)
#define MIHOYO_SDK_MIHOYOSDKSERVER__ONGETSERVERSHUTDOWN_B__102_0_OFFSET UNITYSDK_OFFSET(0x1A4A64D0)
#define MIHOYO_SDK_MIHOYOSDKSERVER__SENDMESSAGE_B__65_0_OFFSET UNITYSDK_OFFSET(0x1A4A5F60)
#define MIHOYO_SDK_MIHOYOSDKSERVER__SENDMESSAGE_B__66_0_OFFSET UNITYSDK_OFFSET(0x1A4A5F70)
#define MIHOYO_SDK_MIHOYOSDKSERVER__SENDMESSAGE_B__67_0_OFFSET UNITYSDK_OFFSET(0x1A4A5F80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_TypeDefinitionIndex = 35135;

	class MiHoYoSDKServer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKServer_LoginResultModel** StaticGet_loginResult()
		{
			return (::MiHoYo::SDK::MiHoYoSDKServer_LoginResultModel**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x267C0);
		}
		static ::MiHoYo::SDK::MiHoYoSDKServer** StaticGet__instance()
		{
			return (::MiHoYo::SDK::MiHoYoSDKServer**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x267C8);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_IPList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x267D0);
		}
		static ::MiHoYo::SDK::ClientType* StaticGet_clientType()
		{
			return (::MiHoYo::SDK::ClientType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x8310);
		}
		static ::System::Boolean* StaticGet_enableAndroidKibanaReport()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x8314);
		}
		static ::System::Boolean* StaticGet_enableIOSKibanaReport()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x8315);
		}
		static ::System::Boolean* StaticGet_enableKibanaReport()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x8316);
		}
		static ::System::Boolean* StaticGet_enableAndroidCustomPool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x8317);
		}
		static ::System::Boolean* StaticGet_enableIOSCustomPool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x8318);
		}
		static ::System::Boolean* StaticGet_enableCustomPool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_TypeDefinitionIndex)->GetStaticField(0x8319);
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

		static ::System::Void set_Instance(::MiHoYo::SDK::MiHoYoSDKServer* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::MiHoYoSDKServer*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONDESTROY_OFFSET))(this);
		}

		::System::Void add_OnConnectResult(::MiHoYo::SDK::MiHoYoSDKServer_OnConnectDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKServer_OnConnectDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONCONNECTRESULT_OFFSET))(this, value);
		}

		::System::Void remove_OnConnectResult(::MiHoYo::SDK::MiHoYoSDKServer_OnConnectDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKServer_OnConnectDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONCONNECTRESULT_OFFSET))(this, value);
		}

		::System::Void add_OnConnected(::MiHoYo::SDK::SecurityTunnel_OnConnectedAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnConnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONCONNECTED_OFFSET))(this, value);
		}

		::System::Void remove_OnConnected(::MiHoYo::SDK::SecurityTunnel_OnConnectedAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnConnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONCONNECTED_OFFSET))(this, value);
		}

		::System::Void add_OnDisconnected(::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONDISCONNECTED_OFFSET))(this, value);
		}

		::System::Void remove_OnDisconnected(::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnDisconnectedAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONDISCONNECTED_OFFSET))(this, value);
		}

		::System::Void add_OnSDKEventCallback(::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSDKEVENTCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_OnSDKEventCallback(::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnSDKEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSDKEVENTCALLBACK_OFFSET))(this, value);
		}

		::System::Void add_OnServerEventCallback(::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSERVEREVENTCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_OnServerEventCallback(::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerEventCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSERVEREVENTCALLBACK_OFFSET))(this, value);
		}

		::System::Void add_OnGetMessage(::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONGETMESSAGE_OFFSET))(this, value);
		}

		::System::Void remove_OnGetMessage(::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONGETMESSAGE_OFFSET))(this, value);
		}

		::System::Void add_OnServerKickOff(::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSERVERKICKOFF_OFFSET))(this, value);
		}

		::System::Void remove_OnServerKickOff(::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerKickOffCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSERVERKICKOFF_OFFSET))(this, value);
		}

		::System::Void add_OnServerShutdown(::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONSERVERSHUTDOWN_OFFSET))(this, value);
		}

		::System::Void remove_OnServerShutdown(::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnServerShutdownCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONSERVERSHUTDOWN_OFFSET))(this, value);
		}

		::System::Void add_OnLogVerbose(::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGVERBOSE_OFFSET))(this, value);
		}

		::System::Void remove_OnLogVerbose(::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGVERBOSE_OFFSET))(this, value);
		}

		::System::Void add_OnLogMessage(::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGMESSAGE_OFFSET))(this, value);
		}

		::System::Void remove_OnLogMessage(::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGMESSAGE_OFFSET))(this, value);
		}

		::System::Void add_OnLogError(::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGERROR_OFFSET))(this, value);
		}

		::System::Void remove_OnLogError(::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGERROR_OFFSET))(this, value);
		}

		::System::Void add_OnLogErrorWithCode(::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ADD_ONLOGERRORWITHCODE_OFFSET))(this, value);
		}

		::System::Void remove_OnLogErrorWithCode(::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_REMOVE_ONLOGERRORWITHCODE_OFFSET))(this, value);
		}

		::System::Void Connect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_CONNECT_OFFSET))(this);
		}

		::System::Void SendMessage2Server(::System::Int32 evt, ::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE2SERVER_OFFSET))(this, evt, bytes);
		}

		::System::Void SendMessage2SDK(::System::Int32 evt, ::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE2SDK_OFFSET))(this, evt, bytes);
		}

		::System::Void SendMessage_(::MiHoYo::SDK::SecurityTunnel_PacketFlag packetFlag, ::MiHoYo::SDK::SecurityTunnel_PacketCommand secureMessage, ::System::String* body)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_PacketFlag, ::MiHoYo::SDK::SecurityTunnel_PacketCommand, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE__OFFSET))(this, packetFlag, secureMessage, body);
		}

		::System::Void SendMessage__1(::MiHoYo::SDK::SecurityTunnel_PacketFlag packetFlag, ::MiHoYo::SDK::SecurityTunnel_PacketCommand secureMessage, ::Il2CppArray<::System::Byte>* body)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_PacketFlag, ::MiHoYo::SDK::SecurityTunnel_PacketCommand, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE__1_OFFSET))(this, packetFlag, secureMessage, body);
		}

		::System::Void SendMessage__2(::System::IO::MemoryStream* memoryStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SENDMESSAGE__2_OFFSET))(this, memoryStream);
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

		::System::Void Invoke(::System::String* funcName, ::System::String* args, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_INVOKE_OFFSET))(this, funcName, args, index);
		}

		::System::Void SetSDKInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SETSDKINIT_OFFSET))(this);
		}

		::System::Void InvokeCallback(::System::Int32 index, ::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_INVOKECALLBACK_OFFSET))(this, index, data);
		}

		static ::System::Void SetLoginResult(::System::String* dataString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SETLOGINRESULT_OFFSET))(dataString);
		}

		::System::Void TestErrorLog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_TESTERRORLOG_OFFSET))(this);
		}

		::System::Void SetEnv(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SETENV_OFFSET))(this, args);
		}

		::System::String* GetGateAddressURL(::System::String* strPath)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_GETGATEADDRESSURL_OFFSET))(this, strPath);
		}

		::System::String* GetPublicKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_GETPUBLICKEY_OFFSET))(this);
		}

		::System::String* GetKibanaReportURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_GETKIBANAREPORTURL_OFFSET))(this);
		}

		::System::Void SetGameRole(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SETGAMEROLE_OFFSET))(this, args);
		}

		::System::Void SetServerId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SETSERVERID_OFFSET))(this, value);
		}

		::System::Void SetGameParameters(::System::String* dataString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SETGAMEPARAMETERS_OFFSET))(this, dataString);
		}

		::System::Void GetGateAddress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_GETGATEADDRESS_OFFSET))(this);
		}

		::System::Void KibanaReportKCPOnMainThread(::System::String* eventStr, ::System::String* msg, ::MiHoYo::SDK::MiHoYoSDKServer_LogLevel logLevel, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::MiHoYoSDKServer_LogLevel, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_KIBANAREPORTKCPONMAINTHREAD_OFFSET))(this, eventStr, msg, logLevel, code);
		}

		::System::Void SaveIPAddress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SAVEIPADDRESS_OFFSET))(this);
		}

		::System::Void OnGetGateAddressFailed(::System::Int32 retCode, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETGATEADDRESSFAILED_OFFSET))(this, retCode, message);
		}

		::Il2CppArray<::System::String*>* DefaultIPList()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_DEFAULTIPLIST_OFFSET))(this);
		}

		::System::Void OnGetConnectResult(::System::Int32 retCode, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETCONNECTRESULT_OFFSET))(this, retCode, message);
		}

		::System::Void StartSercurityTunnel(::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>* servers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_STARTSERCURITYTUNNEL_OFFSET))(this, servers);
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

		::System::Void OnGetLogVerbose(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGVERBOSE_OFFSET))(this, message);
		}

		::System::Void OnGetLogMessage(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGMESSAGE_OFFSET))(this, message);
		}

		::System::Void OnGetLogError(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGERROR_OFFSET))(this, message);
		}

		::System::Void OnGetLogErrorWithCode(::MiHoYo::SDK::SecurityTunnel_ErrorCode code, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_ErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETLOGERRORWITHCODE_OFFSET))(this, code, message);
		}

		::System::Void OnGetSDKEventCallback(::System::Int32 evt, ::Il2CppArray<::System::Byte>* bytes, ::System::UInt32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSDKEVENTCALLBACK_OFFSET))(this, evt, bytes, length);
		}

		::System::Void OnGetServerEventCallback(::System::Int32 evt, ::Il2CppArray<::System::Byte>* bytes, ::System::UInt32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSERVEREVENTCALLBACK_OFFSET))(this, evt, bytes, length);
		}

		::System::Void OnMessageResponse(::System::Boolean isSuccess, ::MiHoYo::SDK::SecurityTunnel_Packet* packet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONMESSAGERESPONSE_OFFSET))(this, isSuccess, packet);
		}

		::System::Void OnGetServerKickOff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSERVERKICKOFF_OFFSET))(this);
		}

		::System::Void OnGetServerShutdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETSERVERSHUTDOWN_OFFSET))(this);
		}

		::System::Void KibanaReport(::System::String* eventStr, ::System::String* msg, ::MiHoYo::SDK::MiHoYoSDKServer_LogLevel logLevel, ::System::Int32 code, ::System::String* moduleType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::MiHoYoSDKServer_LogLevel, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_KIBANAREPORT_OFFSET))(this, eventStr, msg, logLevel, code, moduleType);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SharedHeaders()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_SHAREDHEADERS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Post(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_POST_OFFSET))(this, requestUrl, bodyString, callback, timeoutCallback, timeoutSecond, retryTime);
		}

		::System::Collections::IEnumerator* Get(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_GET_OFFSET))(this, requestUrl, query, callback, timeoutCallback, timeoutSecond, retryTime);
		}

		::System::Void PostRequest(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_1<::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*>* callback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_POSTREQUEST_OFFSET))(this, requestUrl, bodyString, callback, timeoutSecond, retryTime);
		}

		::System::Void GetRequest(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::Action_1<::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*>* callback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_GETREQUEST_OFFSET))(this, requestUrl, query, callback, timeoutSecond, retryTime);
		}

		::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel* OnGetCallback(::System::String* responseString)
		{
			return ((::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETCALLBACK_OFFSET))(this, responseString);
		}

		::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel* OnGetTimeOut()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONGETTIMEOUT_OFFSET))(this);
		}

		::System::Void OnCallback(::System::Action_1<::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*>* callback, ::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*>*, ::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_ONCALLBACK_OFFSET))(this, callback, response);
		}

		::System::Void _SendMessage_b__65_0(::System::Boolean isSuccess, ::MiHoYo::SDK::SecurityTunnel_Packet* responsePacket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__SENDMESSAGE_B__65_0_OFFSET))(this, isSuccess, responsePacket);
		}

		::System::Void _SendMessage_b__66_0(::System::Boolean isSuccess, ::MiHoYo::SDK::SecurityTunnel_Packet* responsePacket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__SENDMESSAGE_B__66_0_OFFSET))(this, isSuccess, responsePacket);
		}

		::System::Void _SendMessage_b__67_0(::System::Boolean isSuccess, ::MiHoYo::SDK::SecurityTunnel_Packet* responsePacket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__SENDMESSAGE_B__67_0_OFFSET))(this, isSuccess, responsePacket);
		}

		::System::Void _GetGateAddress_b__83_0(::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__GETGATEADDRESS_B__83_0_OFFSET))(this, model);
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
