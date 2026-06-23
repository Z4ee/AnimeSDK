#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_60638234271CCDB8_64;
class Class_2_C04F87C132BA9A06;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UICOOPPAGECONTROLLER_BINDBADGE_OFFSET UNITYSDK_OFFSET(0x166B3420)
#define MOLEMOLE_UICOOPPAGECONTROLLER_BINDBTNS_OFFSET UNITYSDK_OFFSET(0x166B2CF0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_BINDEVENTS_OFFSET UNITYSDK_OFFSET(0x166B3350)
#define MOLEMOLE_UICOOPPAGECONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x166B4B40)
#define MOLEMOLE_UICOOPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x166B2900)
#define MOLEMOLE_UICOOPPAGECONTROLLER_GOTOMAPQUEST_OFFSET UNITYSDK_OFFSET(0x166B5DB0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_INITSPACELISTDEFAULTINDEX_OFFSET UNITYSDK_OFFSET(0x166B2B10)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKBATTLE_OFFSET UNITYSDK_OFFSET(0x166B4F70)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKCLUEBOARD_OFFSET UNITYSDK_OFFSET(0x166B5190)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKEMOJI_OFFSET UNITYSDK_OFFSET(0x166B52B0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKEQUIP_OFFSET UNITYSDK_OFFSET(0x166B5410)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x166B55F0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x166B4DE0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKSETTING_OFFSET UNITYSDK_OFFSET(0x166B4C00)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKSTORY_OFFSET UNITYSDK_OFFSET(0x166B5670)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCLICKTASK_OFFSET UNITYSDK_OFFSET(0x166B5790)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x166B2910)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONLEVELREWARDNOTIFICATIONNODECHANGE_OFFSET UNITYSDK_OFFSET(0x166B4F00)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x166B49E0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166B61F0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166B29A0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_OPENMAP_OFFSET UNITYSDK_OFFSET(0x166B60B0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHCONTRIBUTION_OFFSET UNITYSDK_OFFSET(0x166B3DF0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHCOOPLOCK_OFFSET UNITYSDK_OFFSET(0x166B4AD0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHCOOPTIPS_OFFSET UNITYSDK_OFFSET(0x166B4790)
#define MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHLEVEL_OFFSET UNITYSDK_OFFSET(0x166B39F0)
#define MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHREWARDBTN_OFFSET UNITYSDK_OFFSET(0x166B4450)
#define MOLEMOLE_UICOOPPAGECONTROLLER_REFRESHTASK_OFFSET UNITYSDK_OFFSET(0x166B42E0)
#define MOLEMOLE_UICOOPPAGECONTROLLER__BINDEVENTS_B__17_0_OFFSET UNITYSDK_OFFSET(0x166B65F0)
#define MOLEMOLE_UICOOPPAGECONTROLLER__BINDEVENTS_B__17_1_OFFSET UNITYSDK_OFFSET(0x166B6600)
#define MOLEMOLE_UICOOPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x166B6370)
#define MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKBATTLE_B__26_0_OFFSET UNITYSDK_OFFSET(0x166B6610)
#define MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKBATTLE_B__26_1_OFFSET UNITYSDK_OFFSET(0x166B68E0)
#define MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKBATTLE_B__26_2_OFFSET UNITYSDK_OFFSET(0x166B6670)
#define MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKCLUEBOARD_B__27_0_OFFSET UNITYSDK_OFFSET(0x166B69B0)
#define MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKLEVELREWARD_B__16_0_OFFSET UNITYSDK_OFFSET(0x166B6380)
#define MOLEMOLE_UICOOPPAGECONTROLLER__ONCLICKSTORY_B__31_0_OFFSET UNITYSDK_OFFSET(0x166B6C20)
#define MOLEMOLE_UICOOPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x166B6E90)
#define MOLEMOLE_UICOOPPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x166B6F20)
#define MOLEMOLE_UICOOPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166B6FC0)
#define MOLEMOLE_UICOOPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166B6FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopPageController_TypeDefinitionIndex = 49261;

	class UICoopPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::Int32 CoopBtnIndex = 0x0; // 0x0
		// static const ::System::Int32 TutorialBtnIndex = 0x1; // 0x0
		// static const ::System::String* bgModelPath; // 0x0
		::Class_2_60638234271CCDB8_64* _view; // 0x328
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

		::Class_2_C04F87C132BA9A06* get_Model()
		{
			return ((::Class_2_C04F87C132BA9A06*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER_GET_MODEL_OFFSET))(this);
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
