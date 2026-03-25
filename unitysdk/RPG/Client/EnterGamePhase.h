#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"

class Class_1_6B41D5D37BA0605F;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_ENTERGAMEPHASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95FDEF0)
#define RPG_CLIENT_ENTERGAMEPHASE_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x9601480)
#define RPG_CLIENT_ENTERGAMEPHASE_ENTER_OFFSET UNITYSDK_OFFSET(0x95FE1F0)
#define RPG_CLIENT_ENTERGAMEPHASE_FINISHLOGIN_OFFSET UNITYSDK_OFFSET(0x9601380)
#define RPG_CLIENT_ENTERGAMEPHASE_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x9600150)
#define RPG_CLIENT_ENTERGAMEPHASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x95FE190)
#define RPG_CLIENT_ENTERGAMEPHASE_LEAVE_OFFSET UNITYSDK_OFFSET(0x96000D0)
#define RPG_CLIENT_ENTERGAMEPHASE_PS_PSNCHECK_OFFSET UNITYSDK_OFFSET(0x96011F0)
#define RPG_CLIENT_ENTERGAMEPHASE_RESETTIMEOUTTIME_OFFSET UNITYSDK_OFFSET(0x96003F0)
#define RPG_CLIENT_ENTERGAMEPHASE_TICK_OFFSET UNITYSDK_OFFSET(0x95FDF70)
#define RPG_CLIENT_ENTERGAMEPHASE_TRYQUITBATTLEWHENLOGIN_OFFSET UNITYSDK_OFFSET(0x9601550)
#define RPG_CLIENT_ENTERGAMEPHASE__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x96001A0)
#define RPG_CLIENT_ENTERGAMEPHASE__CHECKMISSIONRES_OFFSET UNITYSDK_OFFSET(0x95FFB00)
#define RPG_CLIENT_ENTERGAMEPHASE__CHECKSERVERSTATE_OFFSET UNITYSDK_OFFSET(0x95FEDB0)
#define RPG_CLIENT_ENTERGAMEPHASE__CMDIMPORTANTPACKETRECV_OFFSET UNITYSDK_OFFSET(0x9600330)
#define RPG_CLIENT_ENTERGAMEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x95FDDC0)
#define RPG_CLIENT_ENTERGAMEPHASE__ENABLELOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x95FE880)
#define RPG_CLIENT_ENTERGAMEPHASE__FINISHENTERANIM_OFFSET UNITYSDK_OFFSET(0x95FED20)
#define RPG_CLIENT_ENTERGAMEPHASE__LOGINEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x9601670)
#define RPG_CLIENT_ENTERGAMEPHASE__LOGINREPORTMSG_OFFSET UNITYSDK_OFFSET(0x9600650)
#define RPG_CLIENT_ENTERGAMEPHASE__ONCONFIRMENTER_OFFSET UNITYSDK_OFFSET(0x9600450)
#define RPG_CLIENT_ENTERGAMEPHASE__ONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9601830)
#define RPG_CLIENT_ENTERGAMEPHASE__ONFINISHENTERANIM_OFFSET UNITYSDK_OFFSET(0x95FECC0)
#define RPG_CLIENT_ENTERGAMEPHASE__ONNETCONTINUE_OFFSET UNITYSDK_OFFSET(0x9600AC0)
#define RPG_CLIENT_ENTERGAMEPHASE__RELOADASSETREFMANIFEST_OFFSET UNITYSDK_OFFSET(0x9601270)
#define RPG_CLIENT_ENTERGAMEPHASE__SETUPFUNCTIONBTN_OFFSET UNITYSDK_OFFSET(0x95FE7B0)
#define RPG_CLIENT_ENTERGAMEPHASE__STARTLOGIN_OFFSET UNITYSDK_OFFSET(0x9600B30)
#define RPG_CLIENT_ENTERGAMEPHASE__SUBPACKAGECHECKED_OFFSET UNITYSDK_OFFSET(0x95FF940)
#define RPG_CLIENT_ENTERGAMEPHASE__SUBPACKAGEMISSIONGOTTED_OFFSET UNITYSDK_OFFSET(0x95FF440)
#define RPG_CLIENT_ENTERGAMEPHASE__TABLEINITED_OFFSET UNITYSDK_OFFSET(0x95FF0F0)
#define RPG_CLIENT_ENTERGAMEPHASE__TRYSAVESELECTEDSERVER_OFFSET UNITYSDK_OFFSET(0x9600860)
#define RPG_CLIENT_ENTERGAMEPHASE___SUBPACKAGECHECKED_B__15_0_OFFSET UNITYSDK_OFFSET(0x9601AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int EnterGamePhase_TypeDefinitionIndex = 49568;

	class EnterGamePhase : public ::RPG::Client::LoginPhase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Int32>* WaitPacketMap; // 0x28
		::RPG::Client::Promises::Promise* finishEnterAnimPromise; // 0x30
		::UnityEngine::Coroutine* _AudioInitCoroutine; // 0x38
		::System::Collections::Generic::List_1<::System::UInt16>* WaitPacketQueue; // 0x40
		::RPG::Client::Promises::Promise* loginConfirmPromise; // 0x48
		::System::UInt32 SubpackageSubmissionID; // 0x50
		::System::Single _ConnectTimeOutTs; // 0x54
		::System::Single _TimeOutSpan; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_TICK_OFFSET))(this, time);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_ENTER_OFFSET))(this);
		}

		::System::Void _SetupFunctionBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__SETUPFUNCTIONBTN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _EnableLoginButton()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__ENABLELOGINBUTTON_OFFSET))(this);
		}

		::System::Void _OnFinishEnterAnim(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__ONFINISHENTERANIM_OFFSET))(this, arg);
		}

		::RPG::Client::Promises::IPromise* _FinishEnterAnim()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__FINISHENTERANIM_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CheckServerState()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__CHECKSERVERSTATE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TableInited()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__TABLEINITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _SubPackageMissionGotted()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__SUBPACKAGEMISSIONGOTTED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _SubPackageChecked()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__SUBPACKAGECHECKED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CheckMissionRes()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__CHECKMISSIONRES_OFFSET))(this);
		}

		::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* pNextPhase)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_LEAVE_OFFSET))(this, pNextPhase);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdImportantPacketRecv(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__CMDIMPORTANTPACKETRECV_OFFSET))(this, cmd, rspObject);
		}

		::System::Void ResetTimeOutTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_RESETTIMEOUTTIME_OFFSET))(this);
		}

		::System::Void _OnConfirmEnter(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__ONCONFIRMENTER_OFFSET))(this, arg);
		}

		::System::Void _TrySaveSelectedServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__TRYSAVESELECTEDSERVER_OFFSET))(this);
		}

		::System::String* _LoginReportMsg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__LOGINREPORTMSG_OFFSET))(this);
		}

		::System::Void _OnNetContinue(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__ONNETCONTINUE_OFFSET))(this, arg);
		}

		::RPG::Client::Promises::IPromise* _StartLogin()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__STARTLOGIN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PS_PSNCheck()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_PS_PSNCHECK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ReloadAssetRefManifest()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__RELOADASSETREFMANIFEST_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* FinishLogin()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_FINISHLOGIN_OFFSET))(this);
		}

		::System::Void EnterGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_ENTERGAME_OFFSET))(this);
		}

		::System::Void TryQuitBattleWhenLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_TRYQUITBATTLEWHENLOGIN_OFFSET))(this);
		}

		::System::Void _LoginExceptionHandler(::System::Object* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__LOGINEXCEPTIONHANDLER_OFFSET))(this, ex);
		}

		::System::Void _OnException(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__ONEXCEPTION_OFFSET))(this, ex);
		}

		::System::Void __SubPackageChecked_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE___SUBPACKAGECHECKED_B__15_0_OFFSET))(this);
		}
	};
}
