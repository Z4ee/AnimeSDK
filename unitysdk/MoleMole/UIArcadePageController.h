#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_7.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_FF2373C2349A5978.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_29B05041B716AB94;
class Class_1_81D34D116310A358;
class Class_2_208CC9941471731A_962;
class Class_2_9C4D889106D5C300;
class Class_2_DD0812B7B232D3F6;
class Class_3_6837F89516FFCB7B;
class Class_3_F92F6A6188E34427;
namespace MoleMole { class UIArcadeBasePlayChildWindowController; }
namespace MoleMole { class UIArcadeGamingChildWindowController; }
namespace MoleMole { class UIArcadeMenuChildWindowController; }
namespace MoleMole { class UIArcadeShop3DModelController; }
namespace MoleMole { class UIArcadeSinglePlayerChildWindowController; }
namespace MoleMole { class UIArcadeTeamChildWindowController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIARCADEPAGECONTROLLER_ADDBACKBTNACTION_OFFSET UNITYSDK_OFFSET(0x181C36D0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERARCADEMACHINEPHASEFROMENTRANCE_OFFSET UNITYSDK_OFFSET(0x181C6190)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERARCADEMACHINEPHASEFROMPLAYGAMENOANIM_OFFSET UNITYSDK_OFFSET(0x181C5E90)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERARCADEMACHINEPHASEFROMPLAYGAME_OFFSET UNITYSDK_OFFSET(0x181C5DB0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERARCADEMACHINEPHASEFROMSPINNINGTABLE_OFFSET UNITYSDK_OFFSET(0x181C5380)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERENTRANCEPHASEFROMSPINNINGTABLE_OFFSET UNITYSDK_OFFSET(0x181C4000)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERPLAYGAMEPHASEFROMARCADEMACHINENOANIM_OFFSET UNITYSDK_OFFSET(0x181C5D50)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERPLAYGAMEPHASEFROMARCADEMACHINE_OFFSET UNITYSDK_OFFSET(0x181C5C30)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERSPINNINGTABLEPHASEFROMARCADEMACHINE_OFFSET UNITYSDK_OFFSET(0x181C5470)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERSPINNINGTABLEPHASEFROMENTRANCEDIRECT_OFFSET UNITYSDK_OFFSET(0x181C2FA0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERSPINNINGTABLEPHASEFROMENTRANCE_OFFSET UNITYSDK_OFFSET(0x181C43A0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_GENARCADEGAMELIST_OFFSET UNITYSDK_OFFSET(0x181C9E50)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_GETARCADECOMMONGAMEIDLIST_OFFSET UNITYSDK_OFFSET(0x181C6760)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_GETCURARCADEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x181C3A60)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_GET_ARCADECONFIG_OFFSET UNITYSDK_OFFSET(0x181C1B40)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x181C1B30)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_GET_MULTIPLAYERSM_OFFSET UNITYSDK_OFFSET(0x181C1B50)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x181C1B20)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_INITARCADEGAMELIST_OFFSET UNITYSDK_OFFSET(0x181C8070)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_INITENTRANCEPHASE_OFFSET UNITYSDK_OFFSET(0x181C8320)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x181C1C80)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ISALLOWJUMPTOINVITETEAMROOM_OFFSET UNITYSDK_OFFSET(0x181C8020)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ISALLOWSHOWINVITE_OFFSET UNITYSDK_OFFSET(0x181C7F30)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ISINMULTIPLAYERMODE_OFFSET UNITYSDK_OFFSET(0x181C3A10)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_JOINROOMCLEAR_OFFSET UNITYSDK_OFFSET(0x181C3210)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ONARCADEEVENTTRIGGERHANDLE_OFFSET UNITYSDK_OFFSET(0x181C9920)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ONBACKBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x181C86A0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ONBATTLEABORT_OFFSET UNITYSDK_OFFSET(0x181C8950)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ONBATTLEREADY_OFFSET UNITYSDK_OFFSET(0x181C8EE0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ONBEKNICK_OFFSET UNITYSDK_OFFSET(0x181C8820)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x181C1B60)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x181C3410)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ONROOMINFOSYNC_OFFSET UNITYSDK_OFFSET(0x181C8C00)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x181C2910)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x181C2010)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x181C2070)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x181C1BF0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x181C2230)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_OPENORCLOSEGAMINGSELECTWIDGET_OFFSET UNITYSDK_OFFSET(0x181C5900)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_OPENORCLOSEMENUWIDGET_OFFSET UNITYSDK_OFFSET(0x181C83A0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_OPENORCLOSEPLAYWIDGET_OFFSET UNITYSDK_OFFSET(0x181C6A90)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_OPENORCLOSESINGLEPLAYERWIDGET_OFFSET UNITYSDK_OFFSET(0x181C5000)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_OPENORCLOSETEAMWIDGET_OFFSET UNITYSDK_OFFSET(0x181C49E0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_PLAYARCADEMACHINEPHASEALLFADEIN_OFFSET UNITYSDK_OFFSET(0x181C7570)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_PLAYARCADEMACHINEPHASESPECIALFADEINPOST_OFFSET UNITYSDK_OFFSET(0x181C7B30)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_PLAYARCADEMACHINEPHASESPECIALFADEINPRE_OFFSET UNITYSDK_OFFSET(0x181C4D60)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_PLAYSPINNINGTABLEPHASEALLFADEIN_OFFSET UNITYSDK_OFFSET(0x181C73F0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_REMOVEBACKBTNACTION_OFFSET UNITYSDK_OFFSET(0x181C3890)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_SAMPLEARCADEMACHINEPHASEALLFADEIN_OFFSET UNITYSDK_OFFSET(0x181C5F00)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_SETARCADEMACHINEPHASEBOTTOMAREAACTIVE_OFFSET UNITYSDK_OFFSET(0x181C7810)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_SETBACKBTNACTIVE_OFFSET UNITYSDK_OFFSET(0x181C3660)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_SETMINIGAMESTATE_OFFSET UNITYSDK_OFFSET(0x181C39B0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_SHOWINVITE_OFFSET UNITYSDK_OFFSET(0x181C7E30)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_TRYCREATEARCADEMACHINEPHASEWIDGET_OFFSET UNITYSDK_OFFSET(0x181C4710)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_TRYENTERGAMEPHASENOANIM_OFFSET UNITYSDK_OFFSET(0x181C7250)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_TRYENTERGAMEPHASE_OFFSET UNITYSDK_OFFSET(0x181C70A0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_TRYEXITGAMEPHASE_OFFSET UNITYSDK_OFFSET(0x181C67B0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_TRYJOININVITETEAMROOM_OFFSET UNITYSDK_OFFSET(0x181C91E0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_TRYJOINROOM_OFFSET UNITYSDK_OFFSET(0x181C9770)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_TRYOPENACHIEVEMENTDIALOG_OFFSET UNITYSDK_OFFSET(0x181C3AB0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_TRYOPENMAINRANKDIALOG_OFFSET UNITYSDK_OFFSET(0x181C3CB0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER_TRYSHOWPARTNERDATETIPS_OFFSET UNITYSDK_OFFSET(0x181C2570)
#define MOLEMOLE_UIARCADEPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x181CA310)
#define MOLEMOLE_UIARCADEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x181CA1D0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER__ISALLOWSHOWINVITE_B__64_0_OFFSET UNITYSDK_OFFSET(0x181CA370)
#define MOLEMOLE_UIARCADEPAGECONTROLLER__ONBEKNICK_B__74_0_OFFSET UNITYSDK_OFFSET(0x181CA380)
#define MOLEMOLE_UIARCADEPAGECONTROLLER__ONSHOW_B__32_0_OFFSET UNITYSDK_OFFSET(0x181CA320)
#define MOLEMOLE_UIARCADEPAGECONTROLLER__TRYJOININVITETEAMROOM_B__79_0_OFFSET UNITYSDK_OFFSET(0x181CA6B0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER__TRYJOININVITETEAMROOM_B__79_2_OFFSET UNITYSDK_OFFSET(0x181CA700)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x181CAAD0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x181CAB60)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x181CABF0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x181CAC90)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x181CACA0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x181CACB0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x181CACC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePageController_TypeDefinitionIndex = 60562;

	class UIArcadePageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::System::Int32* StaticGet_MIN_ARCADE_MACHINE_ITEM_NUM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIArcadePageController_TypeDefinitionIndex)->GetStaticField(0xED70);
		}
		::Class_2_9C4D889106D5C300* _view; // 0x328
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _datePartnerFairyTimeDict; // 0x330
		::Class_2_DD0812B7B232D3F6* _uiArcadeModel; // 0x338
		::System::Collections::Generic::List_1<::System::Int32>* _arcadeCommonGameIDList; // 0x340
		::MoleMole::UIArcadeShop3DModelController* _arcadeShop3DModelController; // 0x348
		::MoleMole::UIArcadeMenuChildWindowController* _menuWidget; // 0x350
		::MoleMole::UIArcadeGamingChildWindowController* _gamingSelectWidget; // 0x358
		::MoleMole::UIArcadeSinglePlayerChildWindowController* _singlePlayerWidget; // 0x360
		::MoleMole::UIArcadeTeamChildWindowController* _teamWidget; // 0x368
		::MoleMole::UIArcadeBasePlayChildWindowController* _playWidget; // 0x370
		::Enum_3_FF2373C2349A5978 _curArcadePhaseType; // 0x378
		::System::Boolean _isInMultiPlayerMode; // 0x37C
		::System::Int32 _gamePlayerMode; // 0x380
		::Class_2_208CC9941471731A_962* _arcadeConfig; // 0x388
		::Class_1_29B05041B716AB94* _multiplayerSM; // 0x390
		::System::Collections::Generic::Dictionary_2<::Enum_3_0A3761FE34514D6C_7, ::System::Boolean>* _rankGetResultDict; // 0x398
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::UIBaseController*, ::System::Action*>>* _backBtnClickedActionList; // 0x3A0
		::System::Boolean _isShowingInvite; // 0x3A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Class_2_9C4D889106D5C300* get_View()
		{
			return ((::Class_2_9C4D889106D5C300*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_GET_VIEW_OFFSET))(this);
		}

		::Enum_3_205B03D40B9BD873 get_MessageMatchPage()
		{
			return ((::Enum_3_205B03D40B9BD873(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_962* get_ArcadeConfig()
		{
			return ((::Class_2_208CC9941471731A_962*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_GET_ARCADECONFIG_OFFSET))(this);
		}

		::Class_1_29B05041B716AB94* get_MultiplayerSM()
		{
			return ((::Class_1_29B05041B716AB94*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_GET_MULTIPLAYERSM_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void SetBackBtnActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_SETBACKBTNACTIVE_OFFSET))(this, isActive);
		}

		::System::Void AddBackBtnAction(::MoleMole::UIBaseController* controller, ::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ADDBACKBTNACTION_OFFSET))(this, controller, action);
		}

		::System::Void RemoveBackBtnAction(::MoleMole::UIBaseController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_REMOVEBACKBTNACTION_OFFSET))(this, controller);
		}

		::System::Void SetMiniGameState(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_SETMINIGAMESTATE_OFFSET))(this, state);
		}

		::System::Boolean IsInMultiPlayerMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ISINMULTIPLAYERMODE_OFFSET))(this);
		}

		::Enum_3_FF2373C2349A5978 GetCurArcadePhaseType()
		{
			return ((::Enum_3_FF2373C2349A5978(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_GETCURARCADEPHASETYPE_OFFSET))(this);
		}

		::System::Void TryOpenAchievementDialog(::System::UInt32 gameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_TRYOPENACHIEVEMENTDIALOG_OFFSET))(this, gameID);
		}

		::System::Void TryOpenMainRankDialog(::System::UInt32 gameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_TRYOPENMAINRANKDIALOG_OFFSET))(this, gameID);
		}

		::System::Void EnterEntrancePhaseFromSpinningTable(::System::Action* finishCB, ::System::Boolean muteFade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERENTRANCEPHASEFROMSPINNINGTABLE_OFFSET))(this, finishCB, muteFade);
		}

		::System::Void EnterSpinningTablePhaseFromEntrance(::System::Int32 newGamePlayerMode, ::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERSPINNINGTABLEPHASEFROMENTRANCE_OFFSET))(this, newGamePlayerMode, finishCB);
		}

		::System::Void EnterSpinningTablePhaseFromEntranceDirect(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERSPINNINGTABLEPHASEFROMENTRANCEDIRECT_OFFSET))(this, finishCB);
		}

		::System::Void TryCreateArcadeMachinePhaseWidget(::System::Int32 arcadeGameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_TRYCREATEARCADEMACHINEPHASEWIDGET_OFFSET))(this, arcadeGameID);
		}

		::System::Void EnterArcadeMachinePhaseFromSpinningTable(::System::Int32 arcadeGameID, ::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERARCADEMACHINEPHASEFROMSPINNINGTABLE_OFFSET))(this, arcadeGameID, finishCB);
		}

		::System::Void EnterSpinningTablePhaseFromArcadeMachine(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERSPINNINGTABLEPHASEFROMARCADEMACHINE_OFFSET))(this, finishCB);
		}

		::System::Void EnterPlayGamePhaseFromArcadeMachine(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERPLAYGAMEPHASEFROMARCADEMACHINE_OFFSET))(this, finishCB);
		}

		::System::Void EnterPlayGamePhaseFromArcadeMachineNoAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERPLAYGAMEPHASEFROMARCADEMACHINENOANIM_OFFSET))(this);
		}

		::System::Void EnterArcadeMachinePhaseFromPlayGame(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERARCADEMACHINEPHASEFROMPLAYGAME_OFFSET))(this, finishCB);
		}

		::System::Void EnterArcadeMachinePhaseFromPlayGameNoAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERARCADEMACHINEPHASEFROMPLAYGAMENOANIM_OFFSET))(this);
		}

		::System::Void EnterArcadeMachinePhaseFromEntrance(::System::Int32 arcadeId, ::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ENTERARCADEMACHINEPHASEFROMENTRANCE_OFFSET))(this, arcadeId, finishCB);
		}

		::System::Void TryExitGamePhase(::System::Action* finishCB, ::System::Boolean isContinue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_TRYEXITGAMEPHASE_OFFSET))(this, finishCB, isContinue);
		}

		::System::Void TryEnterGamePhase(::System::Int32 arcadeGameID, ::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_TRYENTERGAMEPHASE_OFFSET))(this, arcadeGameID, finishCB);
		}

		::System::Void TryEnterGamePhaseNoAnim(::System::Int32 arcadeGameID, ::System::Action* finishCB, ::System::Action* error)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_TRYENTERGAMEPHASENOANIM_OFFSET))(this, arcadeGameID, finishCB, error);
		}

		::System::Void PlaySpinningTablePhaseAllFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_PLAYSPINNINGTABLEPHASEALLFADEIN_OFFSET))(this);
		}

		::System::Void PlayArcadeMachinePhaseAllFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_PLAYARCADEMACHINEPHASEALLFADEIN_OFFSET))(this);
		}

		::System::Void SampleArcadeMachinePhaseAllFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_SAMPLEARCADEMACHINEPHASEALLFADEIN_OFFSET))(this);
		}

		::System::Void SetArcadeMachinePhaseBottomAreaActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_SETARCADEMACHINEPHASEBOTTOMAREAACTIVE_OFFSET))(this, isActive);
		}

		::System::Void PlayArcadeMachinePhaseSpecialFadeInPre()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_PLAYARCADEMACHINEPHASESPECIALFADEINPRE_OFFSET))(this);
		}

		::System::Void PlayArcadeMachinePhaseSpecialFadeInPost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_PLAYARCADEMACHINEPHASESPECIALFADEINPOST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetArcadeCommonGameIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_GETARCADECOMMONGAMEIDLIST_OFFSET))(this);
		}

		::System::Void ShowInvite(::Class_3_F92F6A6188E34427* nextInvite, ::System::Action* onAcceptShowAction, ::System::Action* recursiveShowInvite)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F92F6A6188E34427*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_SHOWINVITE_OFFSET))(this, nextInvite, onAcceptShowAction, recursiveShowInvite);
		}

		::System::Boolean IsAllowShowInvite(::System::Action*& onAcceptShowAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ISALLOWSHOWINVITE_OFFSET))(this, onAcceptShowAction);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void InitArcadeGameList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_INITARCADEGAMELIST_OFFSET))(this);
		}

		::System::Void InitEntrancePhase(::System::Boolean firstIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_INITENTRANCEPHASE_OFFSET))(this, firstIn);
		}

		::System::Void OnBackBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ONBACKBTNCLICKED_OFFSET))(this);
		}

		::System::Void OpenOrCloseMenuWidget(::System::Boolean isOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_OPENORCLOSEMENUWIDGET_OFFSET))(this, isOpen);
		}

		::System::Void OpenOrCloseGamingSelectWidget(::System::Boolean isOpen, ::System::Int32 gamePlayerMode, ::System::Int32 arcadeId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_OPENORCLOSEGAMINGSELECTWIDGET_OFFSET))(this, isOpen, gamePlayerMode, arcadeId);
		}

		::System::Void OpenOrCloseSinglePlayerWidget(::System::Boolean isOpen, ::System::Int32 arcadeGameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_OPENORCLOSESINGLEPLAYERWIDGET_OFFSET))(this, isOpen, arcadeGameID);
		}

		::System::Void OpenOrCloseTeamWidget(::System::Boolean isOpen, ::System::Int32 arcadeGameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_OPENORCLOSETEAMWIDGET_OFFSET))(this, isOpen, arcadeGameID);
		}

		::System::Void OpenOrClosePlayWidget(::System::Boolean isOpen, ::System::Int32 arcadeGameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_OPENORCLOSEPLAYWIDGET_OFFSET))(this, isOpen, arcadeGameID);
		}

		::System::Void OnBeKnick(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ONBEKNICK_OFFSET))(this, obj);
		}

		::System::Void OnBattleAbort(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ONBATTLEABORT_OFFSET))(this, args);
		}

		::System::Void OnRoomInfoSync(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ONROOMINFOSYNC_OFFSET))(this, args);
		}

		::System::Void OnBattleReady(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ONBATTLEREADY_OFFSET))(this, args);
		}

		::System::Boolean IsAllowJumpToInviteTeamRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ISALLOWJUMPTOINVITETEAMROOM_OFFSET))(this);
		}

		::System::Boolean TryJoinInviteTeamRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_TRYJOININVITETEAMROOM_OFFSET))(this);
		}

		::System::Void TryJoinRoom(::Class_1_81D34D116310A358* param)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_81D34D116310A358*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_TRYJOINROOM_OFFSET))(this, param);
		}

		::System::Void JoinRoomClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_JOINROOMCLEAR_OFFSET))(this);
		}

		::System::Void TryShowPartnerDateTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_TRYSHOWPARTNERDATETIPS_OFFSET))(this);
		}

		::System::Void OnArcadeEventTriggerHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_ONARCADEEVENTTRIGGERHANDLE_OFFSET))(this, obj);
		}

		::System::Void GenArcadeGameList(::System::Int32 gamePlayerMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER_GENARCADEGAMELIST_OFFSET))(this, gamePlayerMode);
		}

		::System::Void _OnShow_b__32_0(::Class_3_6837F89516FFCB7B* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_6837F89516FFCB7B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER__ONSHOW_B__32_0_OFFSET))(this, roomInfo);
		}

		::System::Void _IsAllowShowInvite_b__64_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER__ISALLOWSHOWINVITE_B__64_0_OFFSET))(this);
		}

		::System::Void _OnBeKnick_b__74_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER__ONBEKNICK_B__74_0_OFFSET))(this);
		}

		::System::Void _TryJoinInviteTeamRoom_b__79_0(::Class_3_6837F89516FFCB7B* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_6837F89516FFCB7B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER__TRYJOININVITETEAMROOM_B__79_0_OFFSET))(this, roomInfo);
		}

		::System::Void _TryJoinInviteTeamRoom_b__79_2(::Class_3_6837F89516FFCB7B* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_6837F89516FFCB7B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER__TRYJOININVITETEAMROOM_B__79_2_OFFSET))(this, roomInfo);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
