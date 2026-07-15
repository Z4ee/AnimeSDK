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

#define RPG_CLIENT_ENTERGAMEPHASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18D8CD60)
#define RPG_CLIENT_ENTERGAMEPHASE_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x18D90510)
#define RPG_CLIENT_ENTERGAMEPHASE_ENTER_OFFSET UNITYSDK_OFFSET(0x18D8D070)
#define RPG_CLIENT_ENTERGAMEPHASE_FINISHLOGIN_OFFSET UNITYSDK_OFFSET(0x18D90410)
#define RPG_CLIENT_ENTERGAMEPHASE_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x18D8F330)
#define RPG_CLIENT_ENTERGAMEPHASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18D8D010)
#define RPG_CLIENT_ENTERGAMEPHASE_LEAVE_OFFSET UNITYSDK_OFFSET(0x18D8F250)
#define RPG_CLIENT_ENTERGAMEPHASE_PS_PSNCHECK_OFFSET UNITYSDK_OFFSET(0x18D90280)
#define RPG_CLIENT_ENTERGAMEPHASE_RESETTIMEOUTTIME_OFFSET UNITYSDK_OFFSET(0x18D8F4B0)
#define RPG_CLIENT_ENTERGAMEPHASE_TICK_OFFSET UNITYSDK_OFFSET(0x18D8CDE0)
#define RPG_CLIENT_ENTERGAMEPHASE_TRYQUITBATTLEWHENLOGIN_OFFSET UNITYSDK_OFFSET(0x18D905E0)
#define RPG_CLIENT_ENTERGAMEPHASE__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x18D8D800)
#define RPG_CLIENT_ENTERGAMEPHASE__CHECKMISSIONRES_OFFSET UNITYSDK_OFFSET(0x18D8EC50)
#define RPG_CLIENT_ENTERGAMEPHASE__CHECKSERVERSTATE_OFFSET UNITYSDK_OFFSET(0x18D8DF40)
#define RPG_CLIENT_ENTERGAMEPHASE__CMDIMPORTANTPACKETRECV_OFFSET UNITYSDK_OFFSET(0x18D8F380)
#define RPG_CLIENT_ENTERGAMEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18D8CBB0)
#define RPG_CLIENT_ENTERGAMEPHASE__ENABLELOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x18D8D9F0)
#define RPG_CLIENT_ENTERGAMEPHASE__FINISHENTERANIM_OFFSET UNITYSDK_OFFSET(0x18D8DEB0)
#define RPG_CLIENT_ENTERGAMEPHASE__LOGINEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x18D90700)
#define RPG_CLIENT_ENTERGAMEPHASE__LOGINREPORTMSG_OFFSET UNITYSDK_OFFSET(0x18D8F710)
#define RPG_CLIENT_ENTERGAMEPHASE__ONCONFIRMENTER_OFFSET UNITYSDK_OFFSET(0x18D8F510)
#define RPG_CLIENT_ENTERGAMEPHASE__ONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18D90910)
#define RPG_CLIENT_ENTERGAMEPHASE__ONFINISHENTERANIM_OFFSET UNITYSDK_OFFSET(0x18D8DE50)
#define RPG_CLIENT_ENTERGAMEPHASE__ONNETCONTINUE_OFFSET UNITYSDK_OFFSET(0x18D8FB00)
#define RPG_CLIENT_ENTERGAMEPHASE__RELOADASSETREFMANIFEST_OFFSET UNITYSDK_OFFSET(0x18D90300)
#define RPG_CLIENT_ENTERGAMEPHASE__SETUPFUNCTIONBTN_OFFSET UNITYSDK_OFFSET(0x18D8D730)
#define RPG_CLIENT_ENTERGAMEPHASE__STARTLOGIN_OFFSET UNITYSDK_OFFSET(0x18D8FB70)
#define RPG_CLIENT_ENTERGAMEPHASE__SUBPACKAGECHECKED_OFFSET UNITYSDK_OFFSET(0x18D8EA90)
#define RPG_CLIENT_ENTERGAMEPHASE__SUBPACKAGEMISSIONGOTTED_OFFSET UNITYSDK_OFFSET(0x18D8E540)
#define RPG_CLIENT_ENTERGAMEPHASE__TABLEINITED_OFFSET UNITYSDK_OFFSET(0x18D8E270)
#define RPG_CLIENT_ENTERGAMEPHASE__TRYSAVESELECTEDSERVER_OFFSET UNITYSDK_OFFSET(0x18D8F8B0)
#define RPG_CLIENT_ENTERGAMEPHASE___SUBPACKAGECHECKED_B__15_0_OFFSET UNITYSDK_OFFSET(0x18D90C30)

namespace RPG::Client
{
	inline static constexpr unsigned int EnterGamePhase_TypeDefinitionIndex = 58410;

	class EnterGamePhase : public ::RPG::Client::LoginPhase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Int32>* WaitPacketMap; // 0x28
		::UnityEngine::Coroutine* _AudioInitCoroutine; // 0x30
		::System::Collections::Generic::List_1<::System::UInt16>* WaitPacketQueue; // 0x38
		::RPG::Client::Promises::Promise* loginConfirmPromise; // 0x40
		::RPG::Client::Promises::Promise* finishEnterAnimPromise; // 0x48
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_LATEUPDATE_OFFSET))(this, a1);
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

		::System::Void _OnFinishEnterAnim(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__ONFINISHENTERANIM_OFFSET))(this, a1);
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

		::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_LEAVE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdImportantPacketRecv(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__CMDIMPORTANTPACKETRECV_OFFSET))(this, a1, a2);
		}

		::System::Void ResetTimeOutTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE_RESETTIMEOUTTIME_OFFSET))(this);
		}

		::System::Void _OnConfirmEnter(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__ONCONFIRMENTER_OFFSET))(this, a1);
		}

		::System::Void _TrySaveSelectedServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__TRYSAVESELECTEDSERVER_OFFSET))(this);
		}

		::System::String* _LoginReportMsg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__LOGINREPORTMSG_OFFSET))(this);
		}

		::System::Void _OnNetContinue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__ONNETCONTINUE_OFFSET))(this, a1);
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

		::System::Void _LoginExceptionHandler(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__LOGINEXCEPTIONHANDLER_OFFSET))(this, a1);
		}

		::System::Void _OnException(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE__ONEXCEPTION_OFFSET))(this, a1);
		}

		::System::Void __SubPackageChecked_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE___SUBPACKAGECHECKED_B__15_0_OFFSET))(this);
		}
	};
}
