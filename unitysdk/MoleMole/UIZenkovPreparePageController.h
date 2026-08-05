#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_9F36F0CF0780ECE5.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_8EB75F7DCE6C3DAB;
class Class_2_AF5BA1C65F12F4B1;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_CLOSEITEMINFOWIDGET_OFFSET UNITYSDK_OFFSET(0x11E4BD20)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_FINDFOCUSITEMICON_OFFSET UNITYSDK_OFFSET(0x11E4D5C0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_GAMEPADHANDLECLOSEITEMINFOPANEL_OFFSET UNITYSDK_OFFSET(0x11E4B630)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_GET_LSTGAMEPADMODULE_OFFSET UNITYSDK_OFFSET(0x11E49A30)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x11E499B0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11E499C0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_HANDLEQUICKBTN_OFFSET UNITYSDK_OFFSET(0x11E4DC80)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONCLOSEITEMINFOWIDGET_OFFSET UNITYSDK_OFFSET(0x11E51080)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11E49A40)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x11E4BFE0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x11E4C050)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x11E4C0D0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x11E4A510)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x11E4E440)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11E4E530)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONKOVBAGSYNCFORSOUND_OFFSET UNITYSDK_OFFSET(0x11E51FD0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x11E525A0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONOPENITEMINFOWIDGET_OFFSET UNITYSDK_OFFSET(0x11E4D3B0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONPREINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11E50450)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11E4A2A0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x11E51D00)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E51EF0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E49AE0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11E49CD0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_RECORDOPENORREFRESHITEMINFOWIDGETGAMEPADMODULE_OFFSET UNITYSDK_OFFSET(0x11E4D490)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_REFRESHDYNAMICMONOINPUTKEYTEXTMAP_OFFSET UNITYSDK_OFFSET(0x11E4CC80)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_RESETITEMICONSELECTUNFOCUS_OFFSET UNITYSDK_OFFSET(0x11E50EF0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_SETGAMEPADFOCUSTOEQUIPSLOT_OFFSET UNITYSDK_OFFSET(0x11E51A30)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_SETGAMEPADFOCUSTOROLESLOT_OFFSET UNITYSDK_OFFSET(0x11E51460)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_SETGAMEPADLEFTSCROLLVIEWFOCUS_OFFSET UNITYSDK_OFFSET(0x11E50F50)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_SETITEMICONSELECTUNFOCUS_OFFSET UNITYSDK_OFFSET(0x11E4FDD0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_SETITEMINFOWIDGETFOCUS_OFFSET UNITYSDK_OFFSET(0x11E50980)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_SNAPSHOTBAGCOUNTS_OFFSET UNITYSDK_OFFSET(0x11E49FC0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11E4A460)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11E52760)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER__ONOPENITEMINFOWIDGET_B__34_0_OFFSET UNITYSDK_OFFSET(0x11E529E0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11E52A00)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x11E52AA0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x11E52BE0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x11E52B30)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x11E52C90)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x11E52D70)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11E52E60)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x11E52E90)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONPREINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11E52F20)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11E52FD0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x11E52FE0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E530A0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E530B0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11E530C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPreparePageController_TypeDefinitionIndex = 80716;

	class UIZenkovPreparePageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* NameOfItemListModule; // 0x0
		// static const ::System::String* NameOfTeamEquipmentListModule; // 0x0
		// static const ::System::String* NameOfTeamAvatarListModule; // 0x0
		// static const ::System::String* NameOfRightPanelFlagModule; // 0x0
		// static const ::System::String* NameOfBagBtnModule; // 0x0
		// static const ::System::String* NameOfLeftScrollViewModule; // 0x0
		// static const ::System::String* NameOfLeftBtnListModule; // 0x0
		// static const ::System::String* NameOfLeftTabBtnListModule; // 0x0
		// static const ::System::String* NameOfSafeBoxModule; // 0x0
		// static const ::System::String* NameOfZenkovItemInfoWidgetModule; // 0x0
		// static const ::System::String* NameOfZenkovItemInfoBtnsPopupModule; // 0x0
		// static const ::System::String* NameOfZenkovPrepareRoleWidget; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* _defaultModuleNames; // 0x318
		::System::Collections::Generic::List_1<::System::String*>* _secondModuleNames; // 0x320
		::System::Collections::Generic::List_1<::System::String*>* _finalModuleNames; // 0x328
		::MoleMole::MonoGamepadModule* _lstGamepadModule; // 0x330
		::MoleMole::MonoGamepadModule* _openItemInfoModule; // 0x338
		::System::Boolean _isFocusBag; // 0x340
		::System::Action_1<::System::Object*>* _onDragStartForGrabSound; // 0x348
		::Class_2_AF5BA1C65F12F4B1* _zenkovModelForSound; // 0x350
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _prevBagValidCounts; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_8EB75F7DCE6C3DAB* get__viewModel()
		{
			return ((::Class_2_8EB75F7DCE6C3DAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule* get_LstGamepadModule()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_GET_LSTGAMEPADMODULE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule* OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* gamepadModule, ::MoleMole::MonoGamepadModule* navTarget, ::Enum_3_9F36F0CF0780ECE5 navDir, ::MoleMole::InputActionEvent inputEvent)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, gamepadModule, navTarget, navDir, inputEvent);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnOpenItemInfoWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONOPENITEMINFOWIDGET_OFFSET))(this);
		}

		::System::Void RefreshDynamicMonoInputKeyTextMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_REFRESHDYNAMICMONOINPUTKEYTEXTMAP_OFFSET))(this);
		}

		::System::Boolean HandleQuickBtn(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_HANDLEQUICKBTN_OFFSET))(this, inputAction);
		}

		::System::Void GamepadHandleCloseItemInfoPanel(::UnityEngine::Transform* itemTrans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_GAMEPADHANDLECLOSEITEMINFOPANEL_OFFSET))(this, itemTrans);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::MoleMole::UIZenkovItemIconBtnWidgetController* FindFocusItemIcon()
		{
			return ((::MoleMole::UIZenkovItemIconBtnWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_FINDFOCUSITEMICON_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean OnPreInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONPREINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void SetItemInfoWidgetFocus(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_SETITEMINFOWIDGETFOCUS_OFFSET))(this, isFocus);
		}

		::System::Void SetItemIconSelectUnfocus(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_SETITEMICONSELECTUNFOCUS_OFFSET))(this, gamepadModule, isFocus);
		}

		::System::Void ResetItemIconSelectUnfocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_RESETITEMICONSELECTUNFOCUS_OFFSET))(this);
		}

		::System::Void SetGamepadLeftScrollViewFocus(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_SETGAMEPADLEFTSCROLLVIEWFOCUS_OFFSET))(this, isFocus);
		}

		::System::Void OnCloseItemInfoWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONCLOSEITEMINFOWIDGET_OFFSET))(this);
		}

		::System::Void CloseItemInfoWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_CLOSEITEMINFOWIDGET_OFFSET))(this);
		}

		::System::Void SetGamepadFocusToRoleSlot(::System::Int32 roleIndex, ::System::Boolean isWeapon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_SETGAMEPADFOCUSTOROLESLOT_OFFSET))(this, roleIndex, isWeapon);
		}

		::System::Void SetGamepadFocusToEquipSlot(::System::Int32 ctrlIndex, ::System::Boolean isItemArea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_SETGAMEPADFOCUSTOEQUIPSLOT_OFFSET))(this, ctrlIndex, isItemArea);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SnapshotBagCounts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_SNAPSHOTBAGCOUNTS_OFFSET))(this);
		}

		::System::Void OnKovBagSyncForSound(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONKOVBAGSYNCFORSOUND_OFFSET))(this, args);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void RecordOpenOrRefreshItemInfoWidgetGamepadModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_RECORDOPENORREFRESHITEMINFOWIDGETGAMEPADMODULE_OFFSET))(this);
		}

		::System::Void _OnOpenItemInfoWidget_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER__ONOPENITEMINFOWIDGET_B__34_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, P0, P1, P2, P3);
		}

		::MoleMole::MonoGamepadModule* __base_OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* P0, ::MoleMole::MonoGamepadModule* P1, ::Enum_3_9F36F0CF0780ECE5 P2, ::MoleMole::InputActionEvent P3)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Boolean __base_OnPreInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONPREINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
