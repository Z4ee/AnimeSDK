#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_181;
class Class_2_79AE422BA06F6D26_150;
class Class_2_AE698B0D84539104;
class UIWidgetGroup;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISummerSelectLevelItemWidgetController_ItemData; }
namespace MoleMole { class UISummerSelectLevelPageController_PanelData; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_CANCELTABREDSIGN_OFFSET UNITYSDK_OFFSET(0x119F5E20)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_CREATELEVELRANKWIDGETGROUP_OFFSET UNITYSDK_OFFSET(0x119F7B70)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x119F6150)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x119F5520)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_GOTOMAINPANELBUTTON_OFFSET UNITYSDK_OFFSET(0x119F8C50)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x119F5530)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x119F7C00)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONGOTOSELECTEQUIPPANELBUTTON_OFFSET UNITYSDK_OFFSET(0x119F8820)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONPOPULARITYICONBUTTON_OFFSET UNITYSDK_OFFSET(0x119F8EF0)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x119F7D40)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONSTARTBATTLEBUTTON_OFFSET UNITYSDK_OFFSET(0x119F8E70)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONSUMMERSELECTEQUIPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x119F8F50)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONTOGGLEPRECHECK_OFFSET UNITYSDK_OFFSET(0x119F8B10)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONTOGGLE_OFFSET UNITYSDK_OFFSET(0x119F88C0)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x119F5DB0)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x119F5670)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x119F6160)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_SELECTITEMONOPEN_OFFSET UNITYSDK_OFFSET(0x119F77F0)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_SETPANELDATA_OFFSET UNITYSDK_OFFSET(0x119F6AB0)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_SETTABREDSIGN_OFFSET UNITYSDK_OFFSET(0x119F6FB0)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_SHOWEQUIPBYDATA_OFFSET UNITYSDK_OFFSET(0x119F8460)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_SHOWGOTOMAINPANELBUTTON_OFFSET UNITYSDK_OFFSET(0x119F7570)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_SHOWSCORE_OFFSET UNITYSDK_OFFSET(0x119F7F50)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x119F8FA0)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x119F9040)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x119F90D0)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x119F91C0)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x119F91D0)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x119F91E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerSelectLevelPageController_TypeDefinitionIndex = 60745;

	class UISummerSelectLevelPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_79AE422BA06F6D26_150* _view; // 0x328
		::Class_2_AE698B0D84539104* _model; // 0x330
		::MoleMole::UISummerSelectLevelPageController_PanelData* _panelData; // 0x338
		::UIWidgetGroup* _itemGroup; // 0x340
		::UIWidgetGroup* _levelRankItemGroup; // 0x348
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UISummerSelectLevelItemWidgetController_ItemData*>*>* _panelDataList; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UISummerSelectLevelItemWidgetController_ItemData*>* _currentDataList; // 0x358
		::MoleMole::UISummerSelectLevelItemWidgetController_ItemData* _currentItemData; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Enum_3_205B03D40B9BD873 get_MessageMatchPage()
		{
			return ((::Enum_3_205B03D40B9BD873(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::UIWidgetGroup* CreateLevelRankWidgetGroup(::UnityEngine::RectTransform* parent)
		{
			return ((::UIWidgetGroup*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_CREATELEVELRANKWIDGETGROUP_OFFSET))(this, parent);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void ShowGoToMainPanelButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_SHOWGOTOMAINPANELBUTTON_OFFSET))(this);
		}

		::System::Void SetPanelData(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_181*>* LevelList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_181*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_SETPANELDATA_OFFSET))(this, LevelList);
		}

		::System::Void SelectItemOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_SELECTITEMONOPEN_OFFSET))(this);
		}

		::System::Void OnSelectItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONSELECTITEM_OFFSET))(this, index);
		}

		::System::Void ShowScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_SHOWSCORE_OFFSET))(this);
		}

		::System::Void ShowEquipByData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_SHOWEQUIPBYDATA_OFFSET))(this);
		}

		::System::Void OnGotoSelectEquipPanelButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONGOTOSELECTEQUIPPANELBUTTON_OFFSET))(this);
		}

		::System::Void OnToggle(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONTOGGLE_OFFSET))(this, index);
		}

		::System::Boolean OnTogglePreCheck(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONTOGGLEPRECHECK_OFFSET))(this, index);
		}

		::System::Void SetTabRedSign()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_SETTABREDSIGN_OFFSET))(this);
		}

		::System::Void CancelTabRedSign()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_CANCELTABREDSIGN_OFFSET))(this);
		}

		::System::Void GoToMainPanelButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_GOTOMAINPANELBUTTON_OFFSET))(this);
		}

		::System::Void OnStartBattleButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONSTARTBATTLEBUTTON_OFFSET))(this);
		}

		::System::Void OnPopularityIconButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONPOPULARITYICONBUTTON_OFFSET))(this);
		}

		::System::Void OnSummerSelectEquipChangeEvent(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_ONSUMMERSELECTEQUIPCHANGEEVENT_OFFSET))(this, obj);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
