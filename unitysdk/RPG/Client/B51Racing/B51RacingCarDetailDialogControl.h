#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_0_16E4307DCC419505_1612;
class Class_0_16E4307DCC419505_726;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingCarDetailDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarStatItemControl; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListControl; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL_ONPROPERTYINFOCLICK_OFFSET UNITYSDK_OFFSET(0xC716C80)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC7163D0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__BINDSTATITEMCONTROLS_OFFSET UNITYSDK_OFFSET(0xC715F40)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC7174E0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__GETCONFIGREPO_OFFSET UNITYSDK_OFFSET(0xC716DB0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__GETWINDOWSERVICE_OFFSET UNITYSDK_OFFSET(0xC716CE0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__ONGETBUFFSKILLITEM_OFFSET UNITYSDK_OFFSET(0xC717290)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC715CC0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHACTIVESKILL_OFFSET UNITYSDK_OFFSET(0xC7164A0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHBUFFSKILLLIST_OFFSET UNITYSDK_OFFSET(0xC716AB0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHDISPLAYMODE_OFFSET UNITYSDK_OFFSET(0xC7169A0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHDRIVERBONUSSECTION_OFFSET UNITYSDK_OFFSET(0xC717100)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHSTATBARS_OFFSET UNITYSDK_OFFSET(0xC7168A0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHTARGETSTATICONS_OFFSET UNITYSDK_OFFSET(0xC717080)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDetailDialogControl_TypeDefinitionIndex = 81797;

	class B51RacingCarDetailDialogControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::Int32 _STAT_ITEM_COUNT = 0x5; // 0x0
		// static const ::System::String* _STATE_NORMAL; // 0x0
		// static const ::System::String* _STATE_TARGET; // 0x0
		// static const ::System::String* _STATE_BUFF; // 0x0
		::UnityEngine::UI::Image* _SkillIcon; // 0x40
		::RPG::Client::LocalizedText* _SkillNameText; // 0x48
		::RPG::Client::LocalizedText* _SkillLevelText; // 0x50
		::RPG::Client::LocalizedText* _SkillDescText; // 0x58
		::UnityEngine::UI::Slider* _SkillLevelBar; // 0x60
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemControl*>* _StatItemControls; // 0x68
		::RPG::Client::UIStateCtrl* _TitleContentStateCtrl; // 0x70
		::RPG::Client::LocalizedText* _BasePropTitleText; // 0x78
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListControl* _TargetValueIconListControl; // 0x80
		::UnityEngine::GameObject* _DriverBonusRoot; // 0x88
		::RPG::Client::UIStateCtrl* _DriverIconCtrl; // 0x90
		::RPG::Client::LocalizedText* _DriverBonusText; // 0x98
		::SuperScrollView::LoopListView2* _BuffSkillListView; // 0xA0
		::UnityEngine::Transform* _FillOnEmptyList; // 0xA8
		::Class_0_16E4307DCC419505_726* _ConfigRepo; // 0xB0
		::Class_0_16E4307DCC419505_1612* _WindowService; // 0xB8
		::System::Boolean _BuffSkillListInitialized; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _BindStatItemControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__BINDSTATITEMCONTROLS_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void OnPropertyInfoClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL_ONPROPERTYINFOCLICK_OFFSET))(this);
		}

		::System::Void _RefreshActiveSkill(::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHACTIVESKILL_OFFSET))(this, a1);
		}

		::System::Void _RefreshStatBars(::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHSTATBARS_OFFSET))(this, a1);
		}

		::System::Void _RefreshDisplayMode(::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHDISPLAYMODE_OFFSET))(this, a1);
		}

		::System::Void _RefreshTargetStatIcons(::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHTARGETSTATICONS_OFFSET))(this, a1);
		}

		::System::Void _RefreshDriverBonusSection(::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHDRIVERBONUSSECTION_OFFSET))(this, a1);
		}

		::System::Void _RefreshBuffSkillList(::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHBUFFSKILLLIST_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopListViewItem2* _OnGetBuffSkillItem(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__ONGETBUFFSKILLITEM_OFFSET))(this, a1, a2, a3);
		}

		::Class_0_16E4307DCC419505_726* _GetConfigRepo()
		{
			return ((::Class_0_16E4307DCC419505_726*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__GETCONFIGREPO_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1612* _GetWindowService()
		{
			return ((::Class_0_16E4307DCC419505_1612*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__GETWINDOWSERVICE_OFFSET))(this);
		}
	};
}
