#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_F88C6BB7AF47AD69;
class Class_2_79F6D62CE30E3F8E_65;
class Class_2_A29AABB3C13F614B;
namespace MoleMole { class TheGunGoBattleContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UITheGunGoBattlePopWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_GETLISTDATA_OFFSET UNITYSDK_OFFSET(0x11E1E020)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_GETQUESTINDEX_OFFSET UNITYSDK_OFFSET(0x11E1E120)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x11E1D010)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_GOTOMAINCITY_OFFSET UNITYSDK_OFFSET(0x11E1F280)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONACTIVITYCLOSE_OFFSET UNITYSDK_OFFSET(0x11E1F880)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONCLICKLEVELITEM_OFFSET UNITYSDK_OFFSET(0x11E1EC90)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONCLICKMAIN_OFFSET UNITYSDK_OFFSET(0x11E1EDE0)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E1D020)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x11E1DF80)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E1D9E0)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E1D0B0)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11E1DA50)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_OPENINFO_OFFSET UNITYSDK_OFFSET(0x11E1EF10)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_REFRESHTABNEW_OFFSET UNITYSDK_OFFSET(0x11E1E6F0)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_REFRESHTABTRACK_OFFSET UNITYSDK_OFFSET(0x11E1E610)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_REFRESHTAB_OFFSET UNITYSDK_OFFSET(0x11E1DDE0)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_SETPAGEMODE_OFFSET UNITYSDK_OFFSET(0x11E1E220)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_SHOWGOBATTLE_OFFSET UNITYSDK_OFFSET(0x11E1F140)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_TRACKQUESTGROUP_OFFSET UNITYSDK_OFFSET(0x11E1F3A0)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11E1FA70)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER__ONUIINIT_B__14_0_OFFSET UNITYSDK_OFFSET(0x11E1FA80)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER__ONUIINIT_B__14_1_OFFSET UNITYSDK_OFFSET(0x11E1FA90)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER__ONUIINIT_B__14_2_OFFSET UNITYSDK_OFFSET(0x11E1FAA0)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER__ONUIINIT_B__14_3_OFFSET UNITYSDK_OFFSET(0x11E1FAB0)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER__ONUIINIT_B__14_4_OFFSET UNITYSDK_OFFSET(0x11E1FAC0)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E1FAD0)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x11E1FB60)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E1FC20)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E1FC30)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11E1FC40)

namespace MoleMole
{
	inline static constexpr unsigned int UITheGunMainPageController_TypeDefinitionIndex = 46648;

	class UITheGunMainPageController : public ::MoleMole::UIWindowController
	{
	public:
		::UnityEngine::GameObject* BGNormal; // 0x318
		::UnityEngine::GameObject* BGHard; // 0x320
		::MoleMole::UITheGunGoBattlePopWindowController* goBattlePop; // 0x328
		::MoleMole::TheGunGoBattleContext* popContex; // 0x330
		::System::Int32 currentTab; // 0x338
		::Class_2_A29AABB3C13F614B* model; // 0x340
		::System::Int32 activityID; // 0x348
		::MoleMole::UIGeneralNewHintWidgetController* _newHintCtrlNormal; // 0x350
		::MoleMole::UIGeneralNewHintWidgetController* _newHintCtrlHard; // 0x358
		::Class_2_79F6D62CE30E3F8E_65* _view; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_F88C6BB7AF47AD69*>* GetListData(::System::Int32 tab)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_F88C6BB7AF47AD69*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_GETLISTDATA_OFFSET))(this, tab);
		}

		::System::Int32 GetQuestIndex(::System::Int32 tab, ::System::Int32 questID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_GETQUESTINDEX_OFFSET))(this, tab, questID);
		}

		::System::Void SetPageMode(::System::Int32 focusTab, ::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_SETPAGEMODE_OFFSET))(this, focusTab, questID);
		}

		::System::Void RefreshTab(::System::Int32 focusTab)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_REFRESHTAB_OFFSET))(this, focusTab);
		}

		::System::Void RefreshTabTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_REFRESHTABTRACK_OFFSET))(this);
		}

		::System::Void RefreshTabNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_REFRESHTABNEW_OFFSET))(this);
		}

		::System::Void OnClickLevelItem(::System::EventArgs* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONCLICKLEVELITEM_OFFSET))(this, item);
		}

		::System::Void OnClickMain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONCLICKMAIN_OFFSET))(this);
		}

		::System::Void OpenInfo(::System::Action* closeCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_OPENINFO_OFFSET))(this, closeCb);
		}

		::System::Void ShowGoBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_SHOWGOBATTLE_OFFSET))(this);
		}

		::System::Void GotoMainCity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_GOTOMAINCITY_OFFSET))(this);
		}

		::System::Void TrackQuestGroup(::System::Int32 questGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_TRACKQUESTGROUP_OFFSET))(this, questGroup);
		}

		::System::Void OnActivityClose(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_ONACTIVITYCLOSE_OFFSET))(this, obj);
		}

		::System::Void _OnUIInit_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER__ONUIINIT_B__14_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__14_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER__ONUIINIT_B__14_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__14_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER__ONUIINIT_B__14_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__14_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER__ONUIINIT_B__14_3_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__14_4(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER__ONUIINIT_B__14_4_OFFSET))(this, _);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
