#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class MonoRankingAnim; }
namespace RPG::Client::B51Racing { class B51RacingScoreBoardPageViewModel; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC8968A0)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC897BD0)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0xC896740)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET UNITYSDK_OFFSET(0xC896430)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__HANDLEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xC897630)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ISRANKCHANGED_OFFSET UNITYSDK_OFFSET(0xC897A90)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC896520)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONGETRANKITEM_OFFSET UNITYSDK_OFFSET(0xC896E00)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC896200)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0xC8967E0)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__PLAYRANKCHANGEANIM_OFFSET UNITYSDK_OFFSET(0xC897990)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__PREPARERANKCHANGE_OFFSET UNITYSDK_OFFSET(0xC896BC0)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__REFRESHBTNRESTARTTEXT_OFFSET UNITYSDK_OFFSET(0xC896980)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__REFRESHRANKLIST_OFFSET UNITYSDK_OFFSET(0xC896D70)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__TRYPLAYCYCLEWINANIM_OFFSET UNITYSDK_OFFSET(0xC897B00)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingScoreBoardPageControl_TypeDefinitionIndex = 80641;

	class B51RacingScoreBoardPageControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::Int32 RANK_ITEM_PREFAB_INDEX = 0x0; // 0x0
		// static const ::System::String* ANIM_FADE_IN_WIN; // 0x0
		// static const ::System::String* ANIM_EVENT_PLAY_RANK_CHANGE; // 0x0
		::SuperScrollView::LoopListView2* _RankListView; // 0x38
		::RPG::Client::MonoRankingAnim* _RankingAnim; // 0x40
		::RPG::Client::LocalizedText* _NameText; // 0x48
		::UnityEngine::Animation* _CycleEndWinAnimation; // 0x50
		::RPG::Client::MonoAnimationTrigger* _FadeInAnimTrigger; // 0x58
		::RPG::Client::LocalizedText* _BtnRestartText; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZoneManager* _GetUINavigationZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET))(this);
		}

		::System::Void _OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONSTARTEXIT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void _RefreshRankList(::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__REFRESHRANKLIST_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopListViewItem2* _OnGetRankItem(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONGETRANKITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshBtnRestartText(::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__REFRESHBTNRESTARTTEXT_OFFSET))(this, a1);
		}

		::System::Void _HandleAnimationEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__HANDLEANIMATIONEVENT_OFFSET))(this, a1);
		}

		::System::Void _PrepareRankChange(::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__PREPARERANKCHANGE_OFFSET))(this, a1);
		}

		::System::Void _PlayRankChangeAnim(::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__PLAYRANKCHANGEANIM_OFFSET))(this, a1);
		}

		::System::Void _TryPlayCycleWinAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__TRYPLAYCYCLEWINANIM_OFFSET))(this);
		}

		static ::System::Boolean _IsRankChanged(::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ISRANKCHANGED_OFFSET))(a1);
		}
	};
}
