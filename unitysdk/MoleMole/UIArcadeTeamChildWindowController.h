#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIArcadeTeamChildWindowController_ReadyState.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79AE422BA06F6D26_87;
class Class_3_A2FA498259515937;
class Class_3_BD0D4E12B5237B0A;
namespace MoleMole { class UIArcadeFriendInvitePopWindowController; }
namespace MoleMole { class UIArcadeMenuSelectRowWidgetController; }
namespace MoleMole { class UIArcadePageController; }
namespace MoleMole { class UIArcadeShop3DModelController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_BACKTOLIST_OFFSET UNITYSDK_OFFSET(0x14E4EFE0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_CLEARHEADSTATE_OFFSET UNITYSDK_OFFSET(0x14E50AB0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_CLOSEMENUPOP_OFFSET UNITYSDK_OFFSET(0x14E49340)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ENTERPLAYGAMEPHASE_OFFSET UNITYSDK_OFFSET(0x14E4ACB0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_GETPLAYERBYPOS_OFFSET UNITYSDK_OFFSET(0x14E4E090)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14E48C50)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_INITGAMEINFO_OFFSET UNITYSDK_OFFSET(0x14E49E40)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x14E48CB0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ISBLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x14E4EF40)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONACHIEVEMENTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x14E4F230)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONASKCHANGEPOSRESULT_OFFSET UNITYSDK_OFFSET(0x14E4FE30)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONBATTLEABORT_OFFSET UNITYSDK_OFFSET(0x14E51400)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONBATTLEREADY_OFFSET UNITYSDK_OFFSET(0x14E50C00)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONBEASKCHANGEPOS_OFFSET UNITYSDK_OFFSET(0x14E500E0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONCLICKINVITEHANDLER_OFFSET UNITYSDK_OFFSET(0x14E4EA40)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONCLICKKICKOFFHANDLER_OFFSET UNITYSDK_OFFSET(0x14E4E670)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONCLICKSWITCHHANDLER_OFFSET UNITYSDK_OFFSET(0x14E4EB80)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x14E4EE60)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E49860)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x14E49B90)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14E49B00)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONMAINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x14E4F330)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONPLAYERHEADROWBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x14E4D7F0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONRANKBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x14E4F130)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONREADYBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x14E4F480)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONROOMINFOSYNC_OFFSET UNITYSDK_OFFSET(0x14E50410)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14E491C0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E498F0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E48C60)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E490B0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYALLFADEINANIM_OFFSET UNITYSDK_OFFSET(0x14E4ADB0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYALLFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x14E4D1F0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYMATCHINGANIM_OFFSET UNITYSDK_OFFSET(0x14E4F870)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYMATCHINGSOUND_OFFSET UNITYSDK_OFFSET(0x14E4F990)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYROOTANIM_OFFSET UNITYSDK_OFFSET(0x14E4B690)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYSPECIALFADEINPOSTANIM_OFFSET UNITYSDK_OFFSET(0x14E4CFB0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYSPECIALFADEINPREANIM_OFFSET UNITYSDK_OFFSET(0x14E4CE60)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYSPECIALFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x14E4D270)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_REFRESHCONSUME_OFFSET UNITYSDK_OFFSET(0x14E4D360)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_REFRESHHEAD_OFFSET UNITYSDK_OFFSET(0x14E4B810)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_REFRESHMATCHBTN_OFFSET UNITYSDK_OFFSET(0x14E4E240)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14E4A250)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SAMPLEALLFADEINANIM_OFFSET UNITYSDK_OFFSET(0x14E4CC60)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SETBOTTOMAREAACTIVE_OFFSET UNITYSDK_OFFSET(0x14E4D2F0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SETHEADINFOLOCK_OFFSET UNITYSDK_OFFSET(0x14E508E0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SETREADYSTATEWITHMATCHINGANIM_OFFSET UNITYSDK_OFFSET(0x14E497E0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SETREADYSTATE_OFFSET UNITYSDK_OFFSET(0x14E4D420)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SETREFCONTROLLER_OFFSET UNITYSDK_OFFSET(0x14E49D80)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SHOWERRORMESSAGEWITHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x14E517E0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SHOWERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x14E51640)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SHOWFRIENDINVITEPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x14E4EA90)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__BACKTOLIST_B__45_0_OFFSET UNITYSDK_OFFSET(0x14E52320)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E51AC0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14E519A0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__ENTERPLAYGAMEPHASE_B__37_0_OFFSET UNITYSDK_OFFSET(0x14E52080)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__INITVIEW_B__21_0_OFFSET UNITYSDK_OFFSET(0x14E51BE0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__ONASKCHANGEPOSRESULT_B__46_0_OFFSET UNITYSDK_OFFSET(0x14E52350)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__ONBATTLEREADY_G__COMATCHREADY_49_0_OFFSET UNITYSDK_OFFSET(0x14E513B0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__ONREADYBTNCLICKED_B__36_0_OFFSET UNITYSDK_OFFSET(0x14E51EE0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__ONREADYBTNCLICKED_B__36_1_OFFSET UNITYSDK_OFFSET(0x14E51FF0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__PLAYMATCHINGANIM_G__COSTARTMATCHING_41_2_OFFSET UNITYSDK_OFFSET(0x14E522D0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__PLAYMATCHINGANIM_G__PLAYMATCHINGANIMINTERNAL_41_0_OFFSET UNITYSDK_OFFSET(0x14E4FBB0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__PLAYMATCHINGANIM_G__STOPMATCHINGANIMINTERNAL_41_1_OFFSET UNITYSDK_OFFSET(0x14E4FC80)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__PLAYSPECIALFADEINPOSTANIM_B__17_0_OFFSET UNITYSDK_OFFSET(0x14E51AD0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__PLAYSPECIALFADEINPOSTANIM_G__COPLAYANIMSEQUENCE_17_1_OFFSET UNITYSDK_OFFSET(0x14E51B90)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E52360)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14E523F0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14E52420)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E524E0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E524F0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E52500)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeTeamChildWindowController_TypeDefinitionIndex = 77458;

	class UIArcadeTeamChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_MAX_ONLINE_PLAYER_NUM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIArcadeTeamChildWindowController_TypeDefinitionIndex)->GetStaticField(0xFF10);
		}
		// static const ::System::String* CHANGE_POS_ICON; // 0x0
		// static const ::System::String* ADD_ICON; // 0x0
		// static const ::System::String* KICK_ICON; // 0x0
		// static const ::System::Single FadeInAnimDelay; // 0x0
		// static const ::System::Single FadeInAnimInterval; // 0x0
		// static const ::System::Single MatchSuccessAnimDelay; // 0x0
		// static const ::System::Single MatchingAnimDelay; // 0x0
		::Class_2_79AE422BA06F6D26_87* _view; // 0x310
		::System::Boolean _matchingSoundPlaying; // 0x318
		::MoleMole::UIArcadeMenuSelectRowWidgetController* _titleMenuWidget; // 0x320
		::MoleMole::UIArcadePageController* _arcadePageController; // 0x328
		::MoleMole::UIArcadeShop3DModelController* _arcadeShop3DModelController; // 0x330
		::System::Int32 _arcadeGameID; // 0x338
		::MoleMole::UIArcadeTeamChildWindowController_ReadyState _readyState; // 0x33C
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* _playerHeadRowWidgetList; // 0x340
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* _playerHeadRowWidgetCacheList; // 0x348
		::UnityEngine::Coroutine* _coroutineMatchingAnim; // 0x350
		::System::Boolean _isPlayingReadyAnim; // 0x358
		::System::Boolean _isPlayingFadeOut; // 0x359
		::System::Single _arrowAnimTime; // 0x35C
		::System::Boolean _isMatchingLockBattleInfoUpdate; // 0x360
		::System::Collections::Generic::List_1<::System::Int32>* _matchIndexList; // 0x368
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _menuPopWindow; // 0x370
		::MoleMole::UIGeneralTipsPopWindowController* _tipPop; // 0x378
		::MoleMole::UIArcadeFriendInvitePopWindowController* _inviteFriendPop; // 0x380
		::System::Int32 _changingPosTargetPos; // 0x388

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void SetRefController(::MoleMole::UIArcadePageController* arcadePageController, ::MoleMole::UIArcadeShop3DModelController* arcadeShop3DModelController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIArcadePageController*, ::MoleMole::UIArcadeShop3DModelController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SETREFCONTROLLER_OFFSET))(this, arcadePageController, arcadeShop3DModelController);
		}

		::System::Void InitGameInfo(::System::Int32 arcadeGameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_INITGAMEINFO_OFFSET))(this, arcadeGameID);
		}

		::System::Void PlayAllFadeInAnim(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYALLFADEINANIM_OFFSET))(this, action);
		}

		::System::Void SampleAllFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SAMPLEALLFADEINANIM_OFFSET))(this);
		}

		::System::Void PlaySpecialFadeInPreAnim(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYSPECIALFADEINPREANIM_OFFSET))(this, action);
		}

		::System::Void PlaySpecialFadeInPostAnim(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYSPECIALFADEINPOSTANIM_OFFSET))(this, action);
		}

		::System::Void PlayAllFadeOutAnim(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYALLFADEOUTANIM_OFFSET))(this, action);
		}

		::System::Void PlaySpecialFadeOutAnim(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYSPECIALFADEOUTANIM_OFFSET))(this, action);
		}

		::System::Void SetBottomAreaActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SETBOTTOMAREAACTIVE_OFFSET))(this, isActive);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnInfoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONINFOBTNCLICK_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnPlayerHeadRowBtnClicked(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONPLAYERHEADROWBTNCLICKED_OFFSET))(this, index);
		}

		::System::Void RefreshConsume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_REFRESHCONSUME_OFFSET))(this);
		}

		::System::Void RefreshMatchBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_REFRESHMATCHBTN_OFFSET))(this);
		}

		::System::Void CloseMenuPop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_CLOSEMENUPOP_OFFSET))(this);
		}

		::System::Void OnClickKickoffHandler(::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONCLICKKICKOFFHANDLER_OFFSET))(this, pos);
		}

		::System::Void OnClickInviteHandler(::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONCLICKINVITEHANDLER_OFFSET))(this, pos);
		}

		::System::Void ShowFriendInvitePopWindow(::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SHOWFRIENDINVITEPOPWINDOW_OFFSET))(this, pos);
		}

		::System::Void OnClickSwitchHandler(::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONCLICKSWITCHHANDLER_OFFSET))(this, pos);
		}

		::System::Void OnCloseBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnRankBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONRANKBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnAchievementBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONACHIEVEMENTBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnMainBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONMAINBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnReadyBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONREADYBTNCLICKED_OFFSET))(this);
		}

		::System::Void EnterPlayGamePhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ENTERPLAYGAMEPHASE_OFFSET))(this);
		}

		::System::Boolean IsBlockInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ISBLOCKINPUT_OFFSET))(this);
		}

		::System::Void SetReadyState(::MoleMole::UIArcadeTeamChildWindowController_ReadyState readyState, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIArcadeTeamChildWindowController_ReadyState, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SETREADYSTATE_OFFSET))(this, readyState, force);
		}

		::System::Void SetReadyStateWithMatchingAnim(::MoleMole::UIArcadeTeamChildWindowController_ReadyState readyState, ::System::Boolean updateText)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIArcadeTeamChildWindowController_ReadyState, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SETREADYSTATEWITHMATCHINGANIM_OFFSET))(this, readyState, updateText);
		}

		::System::Void PlayMatchingAnim(::System::Boolean isReady)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYMATCHINGANIM_OFFSET))(this, isReady);
		}

		::System::Void PlayMatchingSound(::System::Boolean ready)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYMATCHINGSOUND_OFFSET))(this, ready);
		}

		::System::Void PlayRootAnim(::System::String* animName, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_PLAYROOTANIM_OFFSET))(this, animName, callback);
		}

		::System::Void BackToList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_BACKTOLIST_OFFSET))(this);
		}

		::System::Void OnAskChangePosResult(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONASKCHANGEPOSRESULT_OFFSET))(this, obj);
		}

		::System::Void OnBeAskChangePos(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONBEASKCHANGEPOS_OFFSET))(this, obj);
		}

		::System::Void OnRoomInfoSync(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONROOMINFOSYNC_OFFSET))(this, args);
		}

		::System::Void OnBattleReady(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONBATTLEREADY_OFFSET))(this, args);
		}

		::System::Void OnBattleAbort(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_ONBATTLEABORT_OFFSET))(this, args);
		}

		::System::Void SetHeadInfoLock(::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SETHEADINFOLOCK_OFFSET))(this, isLock);
		}

		::System::Void ClearHeadState(::Class_3_A2FA498259515937* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_A2FA498259515937*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_CLEARHEADSTATE_OFFSET))(this, roomInfo);
		}

		::System::Void RefreshHead(::Class_3_A2FA498259515937* roomInfo, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_A2FA498259515937*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_REFRESHHEAD_OFFSET))(this, roomInfo, force);
		}

		::Class_3_BD0D4E12B5237B0A* GetPlayerByPos(::Class_3_A2FA498259515937* roomInfo, ::System::Int32 pos)
		{
			return ((::Class_3_BD0D4E12B5237B0A*(*)(::PVOID, ::Class_3_A2FA498259515937*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_GETPLAYERBYPOS_OFFSET))(this, roomInfo, pos);
		}

		::System::Void ShowErrorMessage(::System::String* msg, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SHOWERRORMESSAGE_OFFSET))(this, msg, callback);
		}

		::System::Void ShowErrorMessageWithTimeout(::System::String* msg, ::System::Int32 sec, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER_SHOWERRORMESSAGEWITHTIMEOUT_OFFSET))(this, msg, sec, callback);
		}

		::System::Void _PlaySpecialFadeInPostAnim_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__PLAYSPECIALFADEINPOSTANIM_B__17_0_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _PlaySpecialFadeInPostAnim_g__CoPlayAnimSequence_17_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__PLAYSPECIALFADEINPOSTANIM_G__COPLAYANIMSEQUENCE_17_1_OFFSET))(this);
		}

		::System::Void _InitView_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__INITVIEW_B__21_0_OFFSET))(this);
		}

		::System::Void _OnReadyBtnClicked_b__36_0(::System::Boolean isReasonTimeLimit, ::System::Int32 limitTimeInSecs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__ONREADYBTNCLICKED_B__36_0_OFFSET))(this, isReasonTimeLimit, limitTimeInSecs);
		}

		::System::Void _OnReadyBtnClicked_b__36_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__ONREADYBTNCLICKED_B__36_1_OFFSET))(this);
		}

		::System::Void _EnterPlayGamePhase_b__37_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__ENTERPLAYGAMEPHASE_B__37_0_OFFSET))(this);
		}

		::System::Void _PlayMatchingAnim_g__PlayMatchingAnimInternal_41_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__PLAYMATCHINGANIM_G__PLAYMATCHINGANIMINTERNAL_41_0_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _PlayMatchingAnim_g__CoStartMatching_41_2()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__PLAYMATCHINGANIM_G__COSTARTMATCHING_41_2_OFFSET))(this);
		}

		::System::Void _PlayMatchingAnim_g__StopMatchingAnimInternal_41_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__PLAYMATCHINGANIM_G__STOPMATCHINGANIMINTERNAL_41_1_OFFSET))(this);
		}

		::System::Void _BackToList_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__BACKTOLIST_B__45_0_OFFSET))(this);
		}

		::System::Void _OnAskChangePosResult_b__46_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__ONASKCHANGEPOSRESULT_B__46_0_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _OnBattleReady_g__CoMatchReady_49_0(::System::Action* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER__ONBATTLEREADY_G__COMATCHREADY_49_0_OFFSET))(this, callback);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
