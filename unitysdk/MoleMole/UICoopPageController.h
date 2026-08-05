#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_60638234271CCDB8_37;
class Class_2_C66E4DE78E6562C8;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UICOOPPAGECONTROLLER_BINDBADGE_OFFSET UNITYSDK_OFFSET(0x1803EC80)
#define MOLEMOLE_UICOOPPAGECONTROLLER_BINDBTNS_OFFSET UNITYSDK_OFFSET(0x1803E550)
#define MOLEMOLE_UICOOPPAGECONTROLLER_BINDEVENTS_OFFSET UNITYSDK_OFFSET(0x1803EBB0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x180403D0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1803E160)
#define MOLEMOLE_UICOOPPAGECONTROLLER_GOTOMAPQUEST_OFFSET UNITYSDK_OFFSET(0x18041640)
#define MOLEMOLE_UICOOPPAGECONTROLLER_INITSPACELISTDEFAULTINDEX_OFFSET UNITYSDK_OFFSET(0x1803E370)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKBATTLE_OFFSET UNITYSDK_OFFSET(0x18040800)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKCLUEBOARD_OFFSET UNITYSDK_OFFSET(0x18040A20)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKEMOJI_OFFSET UNITYSDK_OFFSET(0x18040B40)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKEQUIP_OFFSET UNITYSDK_OFFSET(0x18040CA0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x18040E80)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x18040670)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKSETTING_OFFSET UNITYSDK_OFFSET(0x18040490)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKSTORY_OFFSET UNITYSDK_OFFSET(0x18040F00)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKTASK_OFFSET UNITYSDK_OFFSET(0x18041020)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1803E170)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONLEVELREWARDNOTIFICATIONNODECHANGE_OFFSET UNITYSDK_OFFSET(0x18040790)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18040270)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18041A80)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1803E200)
#define MOLEMOLE_UICOOPPAGECONTROLLER_OPENMAP_OFFSET UNITYSDK_OFFSET(0x18041940)
#define MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHCONTRIBUTION_OFFSET UNITYSDK_OFFSET(0x1803F670)
#define MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHCOOPLOCK_OFFSET UNITYSDK_OFFSET(0x18040360)
#define MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHCOOPTIPS_OFFSET UNITYSDK_OFFSET(0x18040020)
#define MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHLEVEL_OFFSET UNITYSDK_OFFSET(0x1803F260)
#define MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHREWARDBTN_OFFSET UNITYSDK_OFFSET(0x1803FCE0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHTASK_OFFSET UNITYSDK_OFFSET(0x1803FB70)
#define MOLEMOLE_UICOOPPAGECONTROLLER__BINDEVENTS_B__17_0_OFFSET UNITYSDK_OFFSET(0x18041E80)
#define MOLEMOLE_UICOOPPAGECONTROLLER__BINDEVENTS_B__17_1_OFFSET UNITYSDK_OFFSET(0x18041E90)
#define MOLEMOLE_UICOOPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18041C00)
#define MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKBATTLE_B__26_0_OFFSET UNITYSDK_OFFSET(0x18041EA0)
#define MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKBATTLE_B__26_1_OFFSET UNITYSDK_OFFSET(0x18042170)
#define MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKBATTLE_B__26_2_OFFSET UNITYSDK_OFFSET(0x18041F00)
#define MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKCLUEBOARD_B__27_0_OFFSET UNITYSDK_OFFSET(0x18042240)
#define MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKLEVELREWARD_B__16_0_OFFSET UNITYSDK_OFFSET(0x18041C10)
#define MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKSTORY_B__31_0_OFFSET UNITYSDK_OFFSET(0x180424B0)
#define MOLEMOLE_UICOOPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18042720)
#define MOLEMOLE_UICOOPPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x180427B0)
#define MOLEMOLE_UICOOPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18042850)
#define MOLEMOLE_UICOOPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18042860)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopPageController_TypeDefinitionIndex = 88147;

	class UICoopPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::Int32 CoopBtnIndex = 0x0; // 0x0
		// static const ::System::Int32 TutorialBtnIndex = 0x1; // 0x0
		// static const ::System::String* bgModelPath; // 0x0
		::Class_2_60638234271CCDB8_37* _view; // 0x328
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _rewardBtn; // 0x330
		::MoleMole::MonoGamepadSpaceList* _spaceList; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshCoopLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHCOOPLOCK_OFFSET))(this);
		}

		::System::Void RefreshRewardBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHREWARDBTN_OFFSET))(this);
		}

		::System::Void RefreshCoopTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHCOOPTIPS_OFFSET))(this);
		}

		::System::Void InitSpaceListDefaultIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_INITSPACELISTDEFAULTINDEX_OFFSET))(this);
		}

		::System::Void BindBtns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_BINDBTNS_OFFSET))(this);
		}

		::System::Void OnClickSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKSETTING_OFFSET))(this);
		}

		::System::Void OnClickLevelReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKLEVELREWARD_OFFSET))(this);
		}

		::System::Void BindEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_BINDEVENTS_OFFSET))(this);
		}

		::System::Void BindBadge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_BINDBADGE_OFFSET))(this);
		}

		::System::Void OnLevelRewardNotificationNodeChange(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_ONLEVELREWARDNOTIFICATIONNODECHANGE_OFFSET))(this, count);
		}

		::Class_2_C66E4DE78E6562C8* get_Model()
		{
			return ((::Class_2_C66E4DE78E6562C8*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void RefreshLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHLEVEL_OFFSET))(this);
		}

		::System::Void RefreshContribution()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHCONTRIBUTION_OFFSET))(this);
		}

		::System::Void RefreshTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHTASK_OFFSET))(this);
		}

		::System::Void OnClickBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKBATTLE_OFFSET))(this);
		}

		::System::Void OnClickClueBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKCLUEBOARD_OFFSET))(this);
		}

		::System::Void OnClickEmoji()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKEMOJI_OFFSET))(this);
		}

		::System::Void OnClickEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKEQUIP_OFFSET))(this);
		}

		::System::Void OnClickInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKINFO_OFFSET))(this);
		}

		::System::Void OnClickStory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKSTORY_OFFSET))(this);
		}

		::System::Void OnClickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKTASK_OFFSET))(this);
		}

		::System::Void GotoMapQuest(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_GOTOMAPQUEST_OFFSET))(this, questID);
		}

		::System::Void OpenMap(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_OPENMAP_OFFSET))(this, questID);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnClickLevelReward_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKLEVELREWARD_B__16_0_OFFSET))(this);
		}

		::System::Void _BindEvents_b__17_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER__BINDEVENTS_B__17_0_OFFSET))(this, _);
		}

		::System::Void _BindEvents_b__17_1(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER__BINDEVENTS_B__17_1_OFFSET))(this, _);
		}

		::System::Void _OnClickBattle_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKBATTLE_B__26_0_OFFSET))(this);
		}

		::System::Void _OnClickBattle_b__26_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKBATTLE_B__26_2_OFFSET))(this);
		}

		::System::Void _OnClickBattle_b__26_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKBATTLE_B__26_1_OFFSET))(this);
		}

		::System::Void _OnClickClueBoard_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKCLUEBOARD_B__27_0_OFFSET))(this);
		}

		::System::Void _OnClickStory_b__31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKSTORY_B__31_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
