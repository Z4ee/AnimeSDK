#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"

class Class_1_6B41D5D37BA0605F;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_CLIENTSTARTUPPHASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA091930)
#define RPG_CLIENT_CLIENTSTARTUPPHASE_ENTER_OFFSET UNITYSDK_OFFSET(0xA091BB0)
#define RPG_CLIENT_CLIENTSTARTUPPHASE_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xA092020)
#define RPG_CLIENT_CLIENTSTARTUPPHASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA091B50)
#define RPG_CLIENT_CLIENTSTARTUPPHASE_LEAVE_OFFSET UNITYSDK_OFFSET(0xA091A70)
#define RPG_CLIENT_CLIENTSTARTUPPHASE_TICK_OFFSET UNITYSDK_OFFSET(0xA091AF0)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__CHECKGLOBALDISPATCHSTATE_OFFSET UNITYSDK_OFFSET(0xA092B30)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA091880)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__FETCHGLOBALDISPATCHINFO_OFFSET UNITYSDK_OFFSET(0xA092F40)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__GETSERVERPINGS_OFFSET UNITYSDK_OFFSET(0xA093210)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__GLOBALFINISHED_OFFSET UNITYSDK_OFFSET(0xA093300)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__HANDLESPLASHEXCEPTIONS_OFFSET UNITYSDK_OFFSET(0xA0930E0)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__ONEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA0922F0)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__ONGAMELOGOSHOW_OFFSET UNITYSDK_OFFSET(0xA092990)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__ONGAMESPLASHEND_OFFSET UNITYSDK_OFFSET(0xA092070)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__SHOWDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xA092870)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__SHOWGAMESTARTUPMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA092260)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__SHOWSTARTUPSPLASHPAGE_OFFSET UNITYSDK_OFFSET(0xA091F90)
#define RPG_CLIENT_CLIENTSTARTUPPHASE___FETCHGLOBALDISPATCHINFO_B__15_0_OFFSET UNITYSDK_OFFSET(0xA0934C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientStartupPhase_TypeDefinitionIndex = 56383;

	class ClientStartupPhase : public ::RPG::Client::LoginPhase
	{
	public:
		static ::System::Boolean* StaticGet_IgnoreSplash()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ClientStartupPhase_TypeDefinitionIndex)->GetStaticField(0x13DC0);
		}
		::UnityEngine::Coroutine* fetchCoroutine; // 0x28
		::System::UInt32 _FullScreenBlockUID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* pNextPhase)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE_LEAVE_OFFSET))(this, pNextPhase);
		}

		::System::Void Tick(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE_TICK_OFFSET))(this, time);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE_ENTER_OFFSET))(this);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnGameSplashEnd()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__ONGAMESPLASHEND_OFFSET))(this);
		}

		::System::Void _OnException(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__ONEXCEPTION_OFFSET))(this, ex);
		}

		::System::Void _ShowDebugInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__SHOWDEBUGINFO_OFFSET))(this);
		}

		::System::Void _OnGameLogoShow(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__ONGAMELOGOSHOW_OFFSET))(this, arg);
		}

		::RPG::Client::Promises::IPromise* _ShowStartupSplashPage()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__SHOWSTARTUPSPLASHPAGE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowGameStartupMainPage()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__SHOWGAMESTARTUPMAINPAGE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CheckGlobalDispatchState(::System::Boolean success)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__CHECKGLOBALDISPATCHSTATE_OFFSET))(this, success);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _FetchGlobalDispatchInfo()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__FETCHGLOBALDISPATCHINFO_OFFSET))(this);
		}

		::System::Void _HandleSplashExceptions(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__HANDLESPLASHEXCEPTIONS_OFFSET))(this, ex);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _GetServerPings(::System::Boolean succeed)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__GETSERVERPINGS_OFFSET))(this, succeed);
		}

		::System::Void _GlobalFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__GLOBALFINISHED_OFFSET))(this);
		}

		::System::Void __FetchGlobalDispatchInfo_b__15_0(::System::Action_1<::System::Boolean>* resolve, ::System::Action_1<::System::Exception*>* reject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___FETCHGLOBALDISPATCHINFO_B__15_0_OFFSET))(this, resolve, reject);
		}
	};
}
