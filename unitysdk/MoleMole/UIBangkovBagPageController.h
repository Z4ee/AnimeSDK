#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_9F36F0CF0780ECE5.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/MoleMole/UIBangkovItemInfoWidgetController_ItemInfoFromDirection.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_1710A4EE34865C78;
class Class_1_C54A1F138794C67E;
class Class_2_D1CED082B4F1459A;
class Class_2_D7B307E13A4FE07F;
class Class_3_C3F0E3B5AB5977AE;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBangkovItemInfoWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelTipsWidgetController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_BACKTOBAGPAGE_OFFSET UNITYSDK_OFFSET(0x16EDBE60)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CHANGEITEMFOCUSTONEXT_OFFSET UNITYSDK_OFFSET(0x16EE01D0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CLOSEITEMINFOSLOTANIMATED_OFFSET UNITYSDK_OFFSET(0x16EDDA40)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CONTAINSINSELECTEDITEM_1_OFFSET UNITYSDK_OFFSET(0x16EDC4C0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CONTAINSINSELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x16EDC050)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GAMEPADINIT_OFFSET UNITYSDK_OFFSET(0x16EDB660)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16EDA690)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16EDA6A0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x16EE2170)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_MASKISOPENED_OFFSET UNITYSDK_OFFSET(0x16EDFC10)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONCLICKBANGKOVITEMV1_OFFSET UNITYSDK_OFFSET(0x16EDDE20)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONCLICKBANGKOVITEMV2_OFFSET UNITYSDK_OFFSET(0x16EDE420)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONCLICKBANGKOVITEM_OFFSET UNITYSDK_OFFSET(0x16EDDCE0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16EDA710)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x16EE1D20)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16EE2540)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x16EE2470)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16EE3180)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16EE3810)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONITEMINFOSLOTCLOSED_OFFSET UNITYSDK_OFFSET(0x16EE17F0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONITEMINFOWIDGETCLOSE_OFFSET UNITYSDK_OFFSET(0x16EE1AC0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONKOVBAGSYNCFORSOUND_OFFSET UNITYSDK_OFFSET(0x16EE4240)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16EDBDF0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16EE3FC0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EE4120)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EDA890)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16EDAF80)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_OPENITEMINFOPANEL_OFFSET UNITYSDK_OFFSET(0x16EDCE20)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_OPENMASKITEMINFO_OFFSET UNITYSDK_OFFSET(0x16EDF010)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_PICKITEM_OFFSET UNITYSDK_OFFSET(0x16EDFFF0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_PREPAREPRIMARYFROMEXTERNALICONCLICK_OFFSET UNITYSDK_OFFSET(0x16EDEFC0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_REMOVESELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x16EDC930)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_REQUESTCLOSEITEMINFOPOPUPFROMOUTSIDECLICK_OFFSET UNITYSDK_OFFSET(0x16EE3F20)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_REQUESTNESTEDGIFTPREVIEW_OFFSET UNITYSDK_OFFSET(0x16EE0270)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_RESOLVEITEMINFOLAYOUTROOT_OFFSET UNITYSDK_OFFSET(0x16EE1510)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_SELECTQUEST_OFFSET UNITYSDK_OFFSET(0x16EDBFA0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_SETHIDEONCE_OFFSET UNITYSDK_OFFSET(0x16EE3B80)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_SNAPSHOTBAGCOUNTS_OFFSET UNITYSDK_OFFSET(0x16EDABA0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_TICKITEMINFOOUTSIDECLICKIFNEEDED_OFFSET UNITYSDK_OFFSET(0x16EDAEF0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_UPDATEHINTKEYACTIVE_OFFSET UNITYSDK_OFFSET(0x16EDDC40)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16EDAE50)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE4700)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER__ONUIINIT_B__14_0_OFFSET UNITYSDK_OFFSET(0x16EE4800)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x16EE4810)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16EE48A0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x16EE4940)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16EE49D0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x16EE4A80)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16EE4B60)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16EE4C50)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16EE4C80)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16EE4D10)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EE4DD0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EE4DE0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16EE4DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagPageController_TypeDefinitionIndex = 40330;

	class UIBangkovBagPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* BagTabBtns; // 0x0
		// static const ::System::String* BagScrollView; // 0x0
		// static const ::System::String* BagRegion; // 0x0
		// static const ::System::String* RightRegion; // 0x0
		// static const ::System::String* BoxWrapper; // 0x0
		// static const ::System::Single BagItemInfoNestedGap; // 0x0
		::Class_1_C54A1F138794C67E* _buddyBeingHitCloser; // 0x318
		::System::Boolean hideOnce; // 0x320
		::Il2CppArray<::MoleMole::UIBangkovItemInfoWidgetController*>* _itemInfoBySlot; // 0x328
		::MoleMole::UIItemIconBtnWidgetController* _lastSelectedItemIconController; // 0x330
		::MoleMole::UIItemIconBtnWidgetController* _lastSelectedNestedIcon; // 0x338
		::MoleMole::UIInLevelTipsWidgetController* _errorTips; // 0x340
		::System::Action_1<::System::Object*>* _onDragStartForGrabSound; // 0x348
		::Class_2_D1CED082B4F1459A* _bangkovModelForSound; // 0x350
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _prevBagValidCounts; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_D7B307E13A4FE07F* get__viewModel()
		{
			return ((::Class_2_D7B307E13A4FE07F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void TickItemInfoOutsideClickIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_TICKITEMINFOOUTSIDECLICKIFNEEDED_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void GamepadInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GAMEPADINIT_OFFSET))(this);
		}

		::System::Void BackToBagPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_BACKTOBAGPAGE_OFFSET))(this);
		}

		::System::Void SelectQuest(::Class_1_1710A4EE34865C78* qeust)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1710A4EE34865C78*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_SELECTQUEST_OFFSET))(this, qeust);
		}

		::System::Boolean ContainsInSelectedItem(::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo itemInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CONTAINSINSELECTEDITEM_OFFSET))(this, itemInfo);
		}

		::System::Boolean ContainsInSelectedItem_1(::Class_3_C3F0E3B5AB5977AE* itemIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CONTAINSINSELECTEDITEM_1_OFFSET))(this, itemIndex);
		}

		::System::Void RemoveSelectedItem(::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo itemInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_REMOVESELECTEDITEM_OFFSET))(this, itemInfo);
		}

		::System::Void OpenItemInfoPanel(::MoleMole::UIItemIconBtnWidgetController* ctrl, ::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*, ::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_OPENITEMINFOPANEL_OFFSET))(this, ctrl, direction);
		}

		::System::Void OnClickBangkovItem(::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo localBangkovItemInfo, ::MoleMole::UIItemIconBtnWidgetController* iconController, ::UnityEngine::RectTransform* itemInfoParentOverride)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo, ::MoleMole::UIItemIconBtnWidgetController*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONCLICKBANGKOVITEM_OFFSET))(this, localBangkovItemInfo, iconController, itemInfoParentOverride);
		}

		::System::Void OnClickBangkovItemV2(::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo localBangkovItemInfo, ::MoleMole::UIItemIconBtnWidgetController* iconController, ::UnityEngine::RectTransform* itemInfoParentOverride)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo, ::MoleMole::UIItemIconBtnWidgetController*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONCLICKBANGKOVITEMV2_OFFSET))(this, localBangkovItemInfo, iconController, itemInfoParentOverride);
		}

		::System::Void PickItem(::Class_3_C3F0E3B5AB5977AE* target)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_PICKITEM_OFFSET))(this, target);
		}

		::System::Boolean ChangeItemFocusToNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CHANGEITEMFOCUSTONEXT_OFFSET))(this);
		}

		::System::Void OnClickBangkovItemV1(::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo localBangkovItemInfo, ::MoleMole::UIItemIconBtnWidgetController* iconController, ::UnityEngine::RectTransform* itemInfoParentOverride)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo, ::MoleMole::UIItemIconBtnWidgetController*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONCLICKBANGKOVITEMV1_OFFSET))(this, localBangkovItemInfo, iconController, itemInfoParentOverride);
		}

		::System::Void OpenMaskItemInfo(::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo localBangkovItemInfo, ::UnityEngine::RectTransform* itemInfoParentOverride)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_OPENMASKITEMINFO_OFFSET))(this, localBangkovItemInfo, itemInfoParentOverride);
		}

		::System::Void UpdateHintKeyActive(::System::Boolean flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_UPDATEHINTKEYACTIVE_OFFSET))(this, flag);
		}

		::System::Void PreparePrimaryFromExternalIconClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_PREPAREPRIMARYFROMEXTERNALICONCLICK_OFFSET))(this);
		}

		::System::Void RequestNestedGiftPreview(::MoleMole::UIBangkovItemInfoWidgetController* fromWidget, ::System::Int32 previewItemId, ::MoleMole::UIItemIconBtnWidgetController* iconCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovItemInfoWidgetController*, ::System::Int32, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_REQUESTNESTEDGIFTPREVIEW_OFFSET))(this, fromWidget, previewItemId, iconCtrl);
		}

		::UnityEngine::RectTransform* ResolveItemInfoLayoutRoot(::MoleMole::UIBangkovItemInfoWidgetController* fromWidget)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::MoleMole::UIBangkovItemInfoWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_RESOLVEITEMINFOLAYOUTROOT_OFFSET))(this, fromWidget);
		}

		::System::Void CloseItemInfoSlotAnimated(::System::Int32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CLOSEITEMINFOSLOTANIMATED_OFFSET))(this, slot);
		}

		::System::Void OnItemInfoSlotClosed(::System::Int32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONITEMINFOSLOTCLOSED_OFFSET))(this, slot);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::MoleMole::MonoGamepadModule* OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* gamepadModule, ::MoleMole::MonoGamepadModule* navTarget, ::Enum_3_9F36F0CF0780ECE5 navDir, ::MoleMole::InputActionEvent inputEvent)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, gamepadModule, navTarget, navDir, inputEvent);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void SetHideOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_SETHIDEONCE_OFFSET))(this);
		}

		::System::Void MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_MASKCLOSE_OFFSET))(this);
		}

		::System::Void RequestCloseItemInfoPopupFromOutsideClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_REQUESTCLOSEITEMINFOPOPUPFROMOUTSIDECLICK_OFFSET))(this);
		}

		::System::Boolean MaskIsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_MASKISOPENED_OFFSET))(this);
		}

		::System::Void OnItemInfoWidgetClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONITEMINFOWIDGETCLOSE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SnapshotBagCounts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_SNAPSHOTBAGCOUNTS_OFFSET))(this);
		}

		::System::Void OnKovBagSyncForSound(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONKOVBAGSYNCFORSOUND_OFFSET))(this, args);
		}

		::System::Void _OnUIInit_b__14_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER__ONUIINIT_B__14_0_OFFSET))(this, args);
		}

		::System::Void __base_MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_MASKCLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::MoleMole::MonoGamepadModule* __base_OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* P0, ::MoleMole::MonoGamepadModule* P1, ::Enum_3_9F36F0CF0780ECE5 P2, ::MoleMole::InputActionEvent P3)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
