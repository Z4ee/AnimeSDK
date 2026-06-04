#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class LoginModule_PlayerLoginSuccessNotifyParams; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_LOGINMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE5FCA0)
#define RPG_CLIENT_LOGINMODULE_FORCESYNCGAMESTATE_OFFSET UNITYSDK_OFFSET(0xBE638E0)
#define RPG_CLIENT_LOGINMODULE_GET_ISRELAYLOGIN_OFFSET UNITYSDK_OFFSET(0xBE63DA0)
#define RPG_CLIENT_LOGINMODULE_GET_LOGINSESSIONID_OFFSET UNITYSDK_OFFSET(0xBE63D80)
#define RPG_CLIENT_LOGINMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xBE5FAB0)
#define RPG_CLIENT_LOGINMODULE_RECONNECTRESETDATA_OFFSET UNITYSDK_OFFSET(0xBE626B0)
#define RPG_CLIENT_LOGINMODULE_SET_LOGINSESSIONID_OFFSET UNITYSDK_OFFSET(0xBE63D90)
#define RPG_CLIENT_LOGINMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBE5F880)
#define RPG_CLIENT_LOGINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBE5F860)
#define RPG_CLIENT_LOGINMODULE__DOSENDALLPACKETSREQUESTSAFTERPLAYERLOGIN_OFFSET UNITYSDK_OFFSET(0xBE60E20)
#define RPG_CLIENT_LOGINMODULE__ONCMDREGIONSTOPSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBE63A00)
#define RPG_CLIENT_LOGINMODULE__ONLOGINOVERSEAREALNAMECHECK_OFFSET UNITYSDK_OFFSET(0xBE63D10)
#define RPG_CLIENT_LOGINMODULE__ONMDKWILLENTERGAMERESULT_OFFSET UNITYSDK_OFFSET(0xBE60310)
#define RPG_CLIENT_LOGINMODULE__ONNETWORKDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xBE5FCE0)
#define RPG_CLIENT_LOGINMODULE__ONPLAYERFORCESYNCGAMESTATEFINISHSCRSP_OFFSET UNITYSDK_OFFSET(0xBE63C40)
#define RPG_CLIENT_LOGINMODULE__ONPLAYERLOGINFINISHSCRSP_OFFSET UNITYSDK_OFFSET(0xBE62940)
#define RPG_CLIENT_LOGINMODULE__ONPLAYERLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0xBE5FE20)
#define RPG_CLIENT_LOGINMODULE__ONPLAYERTOKENGOT_OFFSET UNITYSDK_OFFSET(0xBE5FD70)
#define RPG_CLIENT_LOGINMODULE__PLAYERLOGINSUCCESSPROCESS_OFFSET UNITYSDK_OFFSET(0xBE60830)
#define RPG_CLIENT_LOGINMODULE__SENDALLPACKETSREQUESTSAFTERPLAYERLOGIN_OFFSET UNITYSDK_OFFSET(0xBE625F0)
#define RPG_CLIENT_LOGINMODULE__SENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0xBE62B10)
#define RPG_CLIENT_LOGINMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE63EA0)
#define RPG_CLIENT_LOGINMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xBE63E20)
#define RPG_CLIENT_LOGINMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBE63DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoginModule_TypeDefinitionIndex = 61497;

	class LoginModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::LoginModule_PlayerLoginSuccessNotifyParams* _LoginSuccessParam; // 0x10
		::System::String* _OverSeaRealNameCheckUrl; // 0x18
		::System::String* _LoginSessionID_k__BackingField; // 0x20
		::System::Boolean DuringLogin; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnNetworkDisconnected(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONNETWORKDISCONNECTED_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerTokenGot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONPLAYERTOKENGOT_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerLoginSuccess(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONPLAYERLOGINSUCCESS_OFFSET))(this, a1);
		}

		::System::Void _OnMDKWillEnterGameResult(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONMDKWILLENTERGAMERESULT_OFFSET))(this, a1);
		}

		::System::Void _DoSendAllPacketsRequestsAfterPlayerLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__DOSENDALLPACKETSREQUESTSAFTERPLAYERLOGIN_OFFSET))(this);
		}

		::System::Void _SendAllPacketsRequestsAfterPlayerLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__SENDALLPACKETSREQUESTSAFTERPLAYERLOGIN_OFFSET))(this);
		}

		::System::Void _PlayerLoginSuccessProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__PLAYERLOGINSUCCESSPROCESS_OFFSET))(this);
		}

		::System::Void _OnPlayerLoginFinishScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONPLAYERLOGINFINISHSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _SendPacketsAfterLoginFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__SENDPACKETSAFTERLOGINFINISHED_OFFSET))(this);
		}

		::System::Void ReconnectResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_RECONNECTRESETDATA_OFFSET))(this);
		}

		::System::Void ForceSyncGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_FORCESYNCGAMESTATE_OFFSET))(this);
		}

		::System::Void _OnCmdRegionStopScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONCMDREGIONSTOPSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPlayerForceSyncGameStateFinishScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONPLAYERFORCESYNCGAMESTATEFINISHSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnLoginOverSeaRealNameCheck(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONLOGINOVERSEAREALNAMECHECK_OFFSET))(this, a1);
		}

		::System::String* get_LoginSessionID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_GET_LOGINSESSIONID_OFFSET))(this);
		}

		::System::Void set_LoginSessionID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_SET_LOGINSESSIONID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRelayLogin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_GET_ISRELAYLOGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
