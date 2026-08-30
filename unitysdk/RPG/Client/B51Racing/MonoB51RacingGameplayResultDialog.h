#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/EB51RacingResultState.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_0_16E4307DCC419505_1411;
class Class_0_16E4307DCC419505_1414;
class Class_1_243AEB71B7D38FD2;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingGameplayResultDialogViewModel; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG_ONCHALLENGEBACKCLICK_OFFSET UNITYSDK_OFFSET(0xC8A1040)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG_ONCONTINUECLICK_OFFSET UNITYSDK_OFFSET(0xC8A0AD0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG_ONRESTARTCLICK_OFFSET UNITYSDK_OFFSET(0xC8A1240)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG_ONSEASONBACKCLICK_OFFSET UNITYSDK_OFFSET(0xC8A0DD0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC89F990)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__APPLYRESULTSTATE_OFFSET UNITYSDK_OFFSET(0xC89FA80)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__CANEXITRESULT_OFFSET UNITYSDK_OFFSET(0xC8A0F90)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0xC8A1AE0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0xC89F350)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__GETCAMERASERVICE_OFFSET UNITYSDK_OFFSET(0xC8A1480)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__GETCUSTOMFADEINANIMNAME_OFFSET UNITYSDK_OFFSET(0xC8A1530)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__GETMATCHFLOWSERVICE_OFFSET UNITYSDK_OFFSET(0xC8A0D30)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__GETSCENESERVICE_OFFSET UNITYSDK_OFFSET(0xC89F8E0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__HANDLEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xC8A15E0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__ONBACKPRESSED_OFFSET UNITYSDK_OFFSET(0xC8A1A30)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC89F3F0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC89F7B0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__ONGETRANKLISTITEM_OFFSET UNITYSDK_OFFSET(0xC8A1800)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC89EEC0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__REFRESHINTERACTIONAREA_OFFSET UNITYSDK_OFFSET(0xC8A0020)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__REFRESHRANKLIST_OFFSET UNITYSDK_OFFSET(0xC89FE60)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__REFRESHTITLEAREA_OFFSET UNITYSDK_OFFSET(0xC89FCE0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__SETUPGAMEPADNAVIGATION_OFFSET UNITYSDK_OFFSET(0xC8A07F0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__SWITCHTORESULTSCENE_OFFSET UNITYSDK_OFFSET(0xC8A1690)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int MonoB51RacingGameplayResultDialog_TypeDefinitionIndex = 80621;

	class MonoB51RacingGameplayResultDialog : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* STATE_WIN; // 0x0
		// static const ::System::String* STATE_LOSE; // 0x0
		// static const ::System::String* ANIM_FADE_IN_WIN; // 0x0
		// static const ::System::String* ANIM_FADE_IN_LOSE; // 0x0
		// static const ::System::String* ANIM_EVENT_SCENE_SWITCH; // 0x0
		// static const ::System::String* RESULT_CAMERA_NAME; // 0x0
		// static const ::System::String* RESULT_CAMERA_ANIM_NAME_WIN; // 0x0
		// static const ::System::String* RESULT_CAMERA_ANIM_NAME_LOSE; // 0x0
		// static const ::System::Int32 RANK_ITEM_PREFAB_INDEX = 0x0; // 0x0
		// static const ::System::Int32 DIVIDER_ITEM_PREFAB_INDEX = 0x1; // 0x0
		::RPG::Client::LocalizedText* _OrderNumText; // 0x38
		::RPG::Client::LocalizedText* _OrderNumChildText; // 0x40
		::RPG::Client::LocalizedText* _OrderNumWinText; // 0x48
		::RPG::Client::LocalizedText* _OrderNumLoseText; // 0x50
		::RPG::Client::LocalizedText* _NameText; // 0x58
		::RPG::Client::LocalizedText* _HintPanelText; // 0x60
		::RPG::Client::UIStateCtrl* _RootStateCtrl; // 0x68
		::RPG::Client::MonoAnimationTrigger* _RootAnimTrigger; // 0x70
		::RPG::Client::AnimatorButton* _BtnEmptyClose; // 0x78
		::UnityEngine::Transform* _BtnNode; // 0x80
		::UnityEngine::Transform* _BtnRootSeason; // 0x88
		::UnityEngine::Transform* _BtnRootChallenge; // 0x90
		::RPG::Client::AnimatorButton* _BtnBackForSeason; // 0x98
		::RPG::Client::AnimatorButton* _BtnRestartForSeason; // 0xA0
		::RPG::Client::AnimatorButton* _BtnBackForChallenge; // 0xA8
		::RPG::Client::AnimatorButton* _BtnRestartForChallenge; // 0xB0
		::UnityEngine::Transform* _WinEffectBg; // 0xB8
		::UnityEngine::Transform* _LoseEffectBg; // 0xC0
		::UnityEngine::Transform* _BtnPanel; // 0xC8
		::UnityEngine::Transform* _HintPanel; // 0xD0
		::SuperScrollView::LoopListView2* _RankListView; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__ONDESTROY_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG_SETUPVIEW_OFFSET))(this);
		}

		::System::Void OnContinueClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG_ONCONTINUECLICK_OFFSET))(this);
		}

		::System::Void OnSeasonBackClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG_ONSEASONBACKCLICK_OFFSET))(this);
		}

		::System::Void OnChallengeBackClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG_ONCHALLENGEBACKCLICK_OFFSET))(this);
		}

		::System::Boolean _CanExitResult(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__CANEXITRESULT_OFFSET))(this, a1);
		}

		::System::Void OnRestartClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG_ONRESTARTCLICK_OFFSET))(this);
		}

		::System::String* _GetCustomFadeInAnimName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__GETCUSTOMFADEINANIMNAME_OFFSET))(this);
		}

		::System::Void _HandleAnimationEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__HANDLEANIMATIONEVENT_OFFSET))(this, a1);
		}

		::System::Void _SwitchToResultScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__SWITCHTORESULTSCENE_OFFSET))(this);
		}

		::System::Void _ApplyResultState(::RPG::Client::B51Racing::EB51RacingResultState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::EB51RacingResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__APPLYRESULTSTATE_OFFSET))(this, a1);
		}

		::System::Void _RefreshTitleArea(::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__REFRESHTITLEAREA_OFFSET))(this, a1);
		}

		::System::Void _RefreshInteractionArea(::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__REFRESHINTERACTIONAREA_OFFSET))(this, a1);
		}

		::System::Void _RefreshRankList(::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__REFRESHRANKLIST_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopListViewItem2* _OnGetRankListItem(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__ONGETRANKLISTITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetupGamePadNavigation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__SETUPGAMEPADNAVIGATION_OFFSET))(this);
		}

		::System::Boolean _OnBackPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__ONBACKPRESSED_OFFSET))(this);
		}

		::Class_1_243AEB71B7D38FD2* _GetMatchFlowService()
		{
			return ((::Class_1_243AEB71B7D38FD2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__GETMATCHFLOWSERVICE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1414* _GetCameraService()
		{
			return ((::Class_0_16E4307DCC419505_1414*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__GETCAMERASERVICE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1411* _GetSceneService()
		{
			return ((::Class_0_16E4307DCC419505_1411*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGGAMEPLAYRESULTDIALOG__GETSCENESERVICE_OFFSET))(this);
		}
	};
}
