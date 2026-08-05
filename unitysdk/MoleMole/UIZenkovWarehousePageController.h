#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_9F36F0CF0780ECE5.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_13.h"
#include "unitysdk/Enum_3_F4A33839AB405E63.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_175;
class Class_1_1710A4EE34865C78;
class Class_2_AF5BA1C65F12F4B1;
class Class_2_C0973CD63F743F19_1;
class Class_3_C3F0E3B5AB5977AE_29;
namespace MoleMole { class MonoGamepadBaseList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIBangkovItemInfoWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIInLevelTipsWidgetController; }
namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_CHANGEITEMFOCUSTONEXT_OFFSET UNITYSDK_OFFSET(0x114944C0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_FINDFOCUSITEMICON_OFFSET UNITYSDK_OFFSET(0x11494A60)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GAMEPADINIT_OFFSET UNITYSDK_OFFSET(0x1148FB10)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET_EQUIPREADONLYEXCEPTMULTISELL_OFFSET UNITYSDK_OFFSET(0x1148EB40)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET_EQUIPTABLAST_OFFSET UNITYSDK_OFFSET(0x1148EB50)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET_HIDEEQUIPSECTION_OFFSET UNITYSDK_OFFSET(0x1148EB30)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET_HIDESAFEBOXTAB_OFFSET UNITYSDK_OFFSET(0x1148EB60)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET_PLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1148E930)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET_SHOWPAGETYPE_OFFSET UNITYSDK_OFFSET(0x1148EB70)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1148E920)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1148EAC0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_HANDLEFOCUSITEM_OFFSET UNITYSDK_OFFSET(0x11492D70)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_HANDLEQUICKBTN_OFFSET UNITYSDK_OFFSET(0x11493F70)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x11494220)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_MASKISOPENED_OFFSET UNITYSDK_OFFSET(0x11494280)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONCLICKBANGKOVITEM_OFFSET UNITYSDK_OFFSET(0x1148FF40)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1148EFB0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1148FC30)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x11490E90)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x11491390)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x114912C0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x11493270)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x114935B0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONITEMINFOSLOTCLOSED_OFFSET UNITYSDK_OFFSET(0x11490BB0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONITEMINFOWIDGETCLOSE_OFFSET UNITYSDK_OFFSET(0x11490C10)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONKOVBAGSYNCFORSOUND_OFFSET UNITYSDK_OFFSET(0x114959E0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1148FCF0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONTABINDEXCHANGED_OFFSET UNITYSDK_OFFSET(0x1148FD60)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x114954A0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x114957B0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1148F130)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1148F600)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_OPENSETTLEREWARDWAREHOUSE_OFFSET UNITYSDK_OFFSET(0x1148ED50)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_PREPAREPRIMARYFROMEXTERNALICONCLICK_OFFSET UNITYSDK_OFFSET(0x11490B10)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_REAPPLYSELECTIONNEXTFRAME_OFFSET UNITYSDK_OFFSET(0x11495410)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_REFRESHDYNAMICMONOINPUTKEYTEXTMAP_OFFSET UNITYSDK_OFFSET(0x114918B0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_REQUESTCLOSEITEMINFOPOPUPFROMOUTSIDECLICK_OFFSET UNITYSDK_OFFSET(0x11494450)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_REQUESTNESTEDGIFTPREVIEW_OFFSET UNITYSDK_OFFSET(0x11490B50)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_SCROLLOUTERSVTODEEPESTSELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x11492190)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_SELECTQUEST_OFFSET UNITYSDK_OFFSET(0x1148FE90)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_SETHIDEONCE_OFFSET UNITYSDK_OFFSET(0x11494A20)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_SNAPSHOTBAGCOUNTS_OFFSET UNITYSDK_OFFSET(0x1148F320)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_TRYCLOSEITEMINFOPOPWINDOWBYITEMICON_OFFSET UNITYSDK_OFFSET(0x11492F50)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_TRYHANDLEWEAPONDOUBLECLICK_OFFSET UNITYSDK_OFFSET(0x1148ED00)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11495E10)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER__GAMEPADINIT_B__33_0_OFFSET UNITYSDK_OFFSET(0x114961D0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER__ONCLICKBANGKOVITEM_B__35_0_OFFSET UNITYSDK_OFFSET(0x11496500)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER__ONTABINDEXCHANGED_B__32_0_OFFSET UNITYSDK_OFFSET(0x11495F90)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER__ONUIINIT_B__28_0_OFFSET UNITYSDK_OFFSET(0x11495EE0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER__ONUIINIT_B__28_1_OFFSET UNITYSDK_OFFSET(0x11495EF0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER__ONUIINIT_B__28_2_OFFSET UNITYSDK_OFFSET(0x11495F10)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x11496560)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x114965F0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x11496690)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x114966A0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x11496730)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x114967E0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x114968C0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x114969B0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x114969E0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x11496A70)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11496B30)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11496B40)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11496B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWarehousePageController_TypeDefinitionIndex = 67411;

	class UIZenkovWarehousePageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* BagTabBtns; // 0x0
		// static const ::System::String* BagScrollView; // 0x0
		// static const ::System::String* BagRegion; // 0x0
		// static const ::System::String* BoxWrapper; // 0x0
		// static const ::System::String* RightRegion; // 0x0
		// static const ::System::String* NameOfZenkovItemInfoWidgetModule; // 0x0
		// static const ::System::String* NameOfSafeBoxModule; // 0x0
		// static const ::System::String* NameOfGodownItemScrollView; // 0x0
		::MoleMole::MonoGamepadModule* _safeBoxFromModule; // 0x318
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _itemInfoPopup; // 0x320
		::Class_0_16E4307DCC419505_175* _lastSelectedItemIconController; // 0x328
		::MoleMole::UIInLevelTipsWidgetController* _errorTips; // 0x330
		::System::Action_1<::System::Object*>* _onDragStartForGrabSound; // 0x338
		::Class_2_AF5BA1C65F12F4B1* _zenkovModelForSound; // 0x340
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _prevBagValidCounts; // 0x348
		::Class_2_AF5BA1C65F12F4B1* _zenkovModel; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_ED790DAC948A65A9_13 get_PlayType()
		{
			return ((::Enum_3_ED790DAC948A65A9_13(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET_PLAYTYPE_OFFSET))(this);
		}

		::System::Boolean get_HideEquipSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET_HIDEEQUIPSECTION_OFFSET))(this);
		}

		::System::Boolean get_EquipReadOnlyExceptMultiSell()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET_EQUIPREADONLYEXCEPTMULTISELL_OFFSET))(this);
		}

		::System::Boolean get_EquipTabLast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET_EQUIPTABLAST_OFFSET))(this);
		}

		::System::Boolean get_HideSafeBoxTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET_HIDESAFEBOXTAB_OFFSET))(this);
		}

		::Enum_3_F4A33839AB405E63 get_ShowPageType()
		{
			return ((::Enum_3_F4A33839AB405E63(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET_SHOWPAGETYPE_OFFSET))(this);
		}

		::System::Boolean TryHandleWeaponDoubleClick(::Class_3_C3F0E3B5AB5977AE_29* bagIndex, ::System::Int32 itemId)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE_29*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_TRYHANDLEWEAPONDOUBLECLICK_OFFSET))(this, bagIndex, itemId);
		}

		::Class_2_C0973CD63F743F19_1* get__viewModel()
		{
			return ((::Class_2_C0973CD63F743F19_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		static ::MoleMole::UIZenkovWarehousePageController* OpenSettleRewardWarehouse()
		{
			return ((::MoleMole::UIZenkovWarehousePageController*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_OPENSETTLEREWARDWAREHOUSE_OFFSET))();
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnTabIndexChanged(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONTABINDEXCHANGED_OFFSET))(this, index);
		}

		::System::Void GamepadInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_GAMEPADINIT_OFFSET))(this);
		}

		::System::Void SelectQuest(::Class_1_1710A4EE34865C78* qeust)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1710A4EE34865C78*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_SELECTQUEST_OFFSET))(this, qeust);
		}

		::System::Void OnClickBangkovItem(::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo localBangkovItemInfo, ::Class_0_16E4307DCC419505_175* iconController, ::UnityEngine::RectTransform* itemInfoParentOverride)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo, ::Class_0_16E4307DCC419505_175*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONCLICKBANGKOVITEM_OFFSET))(this, localBangkovItemInfo, iconController, itemInfoParentOverride);
		}

		::System::Void PreparePrimaryFromExternalIconClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_PREPAREPRIMARYFROMEXTERNALICONCLICK_OFFSET))(this);
		}

		::System::Void RequestNestedGiftPreview(::MoleMole::UIBangkovItemInfoWidgetController* fromWidget, ::System::Int32 previewItemId, ::Class_0_16E4307DCC419505_175* iconCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovItemInfoWidgetController*, ::System::Int32, ::Class_0_16E4307DCC419505_175*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_REQUESTNESTEDGIFTPREVIEW_OFFSET))(this, fromWidget, previewItemId, iconCtrl);
		}

		::System::Void OnItemInfoSlotClosed(::System::Int32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONITEMINFOSLOTCLOSED_OFFSET))(this, slot);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::MoleMole::MonoGamepadModule* OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* gamepadModule, ::MoleMole::MonoGamepadModule* navTarget, ::Enum_3_9F36F0CF0780ECE5 navDir, ::MoleMole::InputActionEvent inputEvent)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, gamepadModule, navTarget, navDir, inputEvent);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void HandleFocusItem(::MoleMole::MonoGamepadBaseList* list, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadBaseList*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_HANDLEFOCUSITEM_OFFSET))(this, list, index);
		}

		::System::Boolean TryCloseItemInfoPopWindowByItemIcon(::UnityEngine::Transform* itemDataIcon)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_TRYCLOSEITEMINFOPOPWINDOWBYITEMICON_OFFSET))(this, itemDataIcon);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_MASKCLOSE_OFFSET))(this);
		}

		::System::Void RequestCloseItemInfoPopupFromOutsideClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_REQUESTCLOSEITEMINFOPOPUPFROMOUTSIDECLICK_OFFSET))(this);
		}

		::System::Boolean MaskIsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_MASKISOPENED_OFFSET))(this);
		}

		::System::Boolean ChangeItemFocusToNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_CHANGEITEMFOCUSTONEXT_OFFSET))(this);
		}

		::System::Void SetHideOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_SETHIDEONCE_OFFSET))(this);
		}

		::System::Void OnItemInfoWidgetClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONITEMINFOWIDGETCLOSE_OFFSET))(this);
		}

		::System::Boolean HandleQuickBtn(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_HANDLEQUICKBTN_OFFSET))(this, inputAction);
		}

		::System::Void RefreshDynamicMonoInputKeyTextMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_REFRESHDYNAMICMONOINPUTKEYTEXTMAP_OFFSET))(this);
		}

		::MoleMole::UIZenkovItemIconBtnWidgetController* FindFocusItemIcon()
		{
			return ((::MoleMole::UIZenkovItemIconBtnWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_FINDFOCUSITEMICON_OFFSET))(this);
		}

		::System::Void ScrollOuterSVToDeepestSelectedItem(::MoleMole::MonoGamepadModule* gamepadModule, ::MoleMole::MonoGamepadNestedListDelegate* nestedListDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadNestedListDelegate*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_SCROLLOUTERSVTODEEPESTSELECTEDITEM_OFFSET))(this, gamepadModule, nestedListDelegate);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* ReapplySelectionNextFrame(::MoleMole::MonoGamepadNavigatableList* navList, ::System::Int32 selectedIdx)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::MoleMole::MonoGamepadNavigatableList*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_REAPPLYSELECTIONNEXTFRAME_OFFSET))(this, navList, selectedIdx);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SnapshotBagCounts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_SNAPSHOTBAGCOUNTS_OFFSET))(this);
		}

		::System::Void OnKovBagSyncForSound(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_ONKOVBAGSYNCFORSOUND_OFFSET))(this, args);
		}

		::System::Void _OnUIInit_b__28_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER__ONUIINIT_B__28_0_OFFSET))(this, args);
		}

		::System::Void _OnUIInit_b__28_1(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER__ONUIINIT_B__28_1_OFFSET))(this, _);
		}

		::System::Void _OnUIInit_b__28_2(::System::Object* payload)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER__ONUIINIT_B__28_2_OFFSET))(this, payload);
		}

		::System::Void _OnTabIndexChanged_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER__ONTABINDEXCHANGED_B__32_0_OFFSET))(this);
		}

		::System::Void _GamepadInit_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER__GAMEPADINIT_B__33_0_OFFSET))(this);
		}

		::System::Void _OnClickBangkovItem_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER__ONCLICKBANGKOVITEM_B__35_0_OFFSET))(this);
		}

		::System::Void __base_MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_MASKCLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::MoleMole::MonoGamepadModule* __base_OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* P0, ::MoleMole::MonoGamepadModule* P1, ::Enum_3_9F36F0CF0780ECE5 P2, ::MoleMole::InputActionEvent P3)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
