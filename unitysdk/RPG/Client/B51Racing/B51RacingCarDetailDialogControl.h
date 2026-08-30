#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_0_16E4307DCC419505_1402;
class Class_0_16E4307DCC419505_1406;
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

#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL_ONPROPERTYINFOCLICK_OFFSET UNITYSDK_OFFSET(0xC84F160)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC84E960)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__BINDSTATITEMCONTROLS_OFFSET UNITYSDK_OFFSET(0xC84E4D0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC84F9E0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__GETCONFIGREPO_OFFSET UNITYSDK_OFFSET(0xC84F290)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__GETWINDOWSERVICE_OFFSET UNITYSDK_OFFSET(0xC84F1C0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__ONGETBUFFSKILLITEM_OFFSET UNITYSDK_OFFSET(0xC84F790)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC84E250)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHACTIVESKILL_OFFSET UNITYSDK_OFFSET(0xC84EA30)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHBUFFSKILLLIST_OFFSET UNITYSDK_OFFSET(0xC84EF90)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHDISPLAYMODE_OFFSET UNITYSDK_OFFSET(0xC84EE80)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHDRIVERBONUSSECTION_OFFSET UNITYSDK_OFFSET(0xC84F600)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHSTATBARS_OFFSET UNITYSDK_OFFSET(0xC84ED80)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__REFRESHTARGETSTATICONS_OFFSET UNITYSDK_OFFSET(0xC84F580)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDetailDialogControl_TypeDefinitionIndex = 80470;

	class B51RacingCarDetailDialogControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::Int32 _STAT_ITEM_COUNT = 0x5; // 0x0
		// static const ::System::String* _STATE_NORMAL; // 0x0
		// static const ::System::String* _STATE_TARGET; // 0x0
		// static const ::System::String* _STATE_BUFF; // 0x0
		::UnityEngine::UI::Image* _SkillIcon; // 0x38
		::RPG::Client::LocalizedText* _SkillNameText; // 0x40
		::RPG::Client::LocalizedText* _SkillLevelText; // 0x48
		::RPG::Client::LocalizedText* _SkillDescText; // 0x50
		::UnityEngine::UI::Slider* _SkillLevelBar; // 0x58
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemControl*>* _StatItemControls; // 0x60
		::RPG::Client::UIStateCtrl* _TitleContentStateCtrl; // 0x68
		::RPG::Client::LocalizedText* _BasePropTitleText; // 0x70
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListControl* _TargetValueIconListControl; // 0x78
		::UnityEngine::GameObject* _DriverBonusRoot; // 0x80
		::RPG::Client::UIStateCtrl* _DriverIconCtrl; // 0x88
		::RPG::Client::LocalizedText* _DriverBonusText; // 0x90
		::SuperScrollView::LoopListView2* _BuffSkillListView; // 0x98
		::UnityEngine::Transform* _FillOnEmptyList; // 0xA0
		::Class_0_16E4307DCC419505_1402* _ConfigRepo; // 0xA8
		::Class_0_16E4307DCC419505_1406* _WindowService; // 0xB0
		::System::Boolean _BuffSkillListInitialized; // 0xB8

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

		::Class_0_16E4307DCC419505_1402* _GetConfigRepo()
		{
			return ((::Class_0_16E4307DCC419505_1402*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__GETCONFIGREPO_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1406* _GetWindowService()
		{
			return ((::Class_0_16E4307DCC419505_1406*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGCONTROL__GETWINDOWSERVICE_OFFSET))(this);
		}
	};
}
