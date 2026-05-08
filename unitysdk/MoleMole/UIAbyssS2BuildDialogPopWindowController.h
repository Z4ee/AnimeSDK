#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_0_16E4307DCC419505_296;
class Class_1_0D6706375CDAAE8C;
class Class_2_79AE422BA06F6D26_104;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIAbyssS2BuildDialogContext; }
namespace MoleMole { class UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralToggleWidgetControllerWithModel; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_BUILDINLEVELITEMPACKAGEINFO_OFFSET UNITYSDK_OFFSET(0x16076660)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_CREATEITEMROW_OFFSET UNITYSDK_OFFSET(0x16076500)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_CREATERELICROW_OFFSET UNITYSDK_OFFSET(0x160765B0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_CREATETITLEROW_OFFSET UNITYSDK_OFFSET(0x16076450)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GETITEMCTRL_OFFSET UNITYSDK_OFFSET(0x12F1FAF0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET UNITYSDK_OFFSET(0x16076310)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GETVALIDINDEX_OFFSET UNITYSDK_OFFSET(0x12F200C0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16075640)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GET__ISBRIEFDESC_OFFSET UNITYSDK_OFFSET(0x12F202E0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GET__MAXINDEX_OFFSET UNITYSDK_OFFSET(0x12F202C0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_INITBRIEFTOGGLE_OFFSET UNITYSDK_OFFSET(0x160758F0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16076000)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16076C90)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x160767E0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x16076D20)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x160769D0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONTOGGLECHANGE_OFFSET UNITYSDK_OFFSET(0x16076100)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16076090)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16075650)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16075780)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_REFRESHITEMVIEW_OFFSET UNITYSDK_OFFSET(0x16075CE0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_SELECTITEM_OFFSET UNITYSDK_OFFSET(0x12F1FCF0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_SETDEFAULTSELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x12F1F8B0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_SETITEMSCROLLWIDGETFUNC_OFFSET UNITYSDK_OFFSET(0x16075B30)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12F20500)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER__SETDEFAULTSELECTEDITEM_B__20_0_OFFSET UNITYSDK_OFFSET(0x12F20590)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12F205A0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x12F20640)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x12F20700)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x12F20B40)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12F20BC0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F20BD0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12F20BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2BuildDialogPopWindowController_TypeDefinitionIndex = 46567;

	class UIAbyssS2BuildDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_104* _view; // 0x310
		::System::Int32 _currSelectIndex; // 0x318
		::System::Int32 _minIndex; // 0x31C
		::MoleMole::UIAbyssS2BuildDialogContext* _context; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase*>* _itemInfos; // 0x328
		::MoleMole::UIGeneralToggleWidgetControllerWithModel* _briefToggle; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitBriefToggle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_INITBRIEFTOGGLE_OFFSET))(this);
		}

		::System::Void OnToggleChange(::System::Boolean inOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONTOGGLECHANGE_OFFSET))(this, inOn);
		}

		::System::Void SetItemScrollWidgetFunc(::MonoUITableScrollV2* scroll)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_SETITEMSCROLLWIDGETFUNC_OFFSET))(this, scroll);
		}

		::System::Int32 GetTemplateIndexFromData(::System::Int32 dataIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET))(this, dataIndex);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateTitleRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_CREATETITLEROW_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateItemRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_CREATEITEMROW_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateRelicRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_CREATERELICROW_OFFSET))(this, arg);
		}

		::MoleMole::UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase* BuildInLevelItemPackageInfo(::Class_1_0D6706375CDAAE8C* item)
		{
			return ((::MoleMole::UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase*(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_BUILDINLEVELITEMPACKAGEINFO_OFFSET))(this, item);
		}

		::System::Void RefreshItemView(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_REFRESHITEMVIEW_OFFSET))(this, items);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnItemSelect(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONITEMSELECT_OFFSET))(this, index);
		}

		::System::Void SetDefaultSelectedItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_SETDEFAULTSELECTEDITEM_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_296* GetItemCtrl(::System::Int32 index)
		{
			return ((::Class_0_16E4307DCC419505_296*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GETITEMCTRL_OFFSET))(this, index);
		}

		::System::Void SelectItem(::System::Int32 index, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_SELECTITEM_OFFSET))(this, index, force);
		}

		::System::Int32 GetValidIndex(::System::Int32 start, ::System::Int32 end, ::System::Boolean order, ::System::Boolean loop)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GETVALIDINDEX_OFFSET))(this, start, end, order, loop);
		}

		::System::Boolean get__isBriefDesc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GET__ISBRIEFDESC_OFFSET))(this);
		}

		::System::Int32 get__maxIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GET__MAXINDEX_OFFSET))(this);
		}

		::System::Void _SetDefaultSelectedItem_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER__SETDEFAULTSELECTEDITEM_B__20_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
