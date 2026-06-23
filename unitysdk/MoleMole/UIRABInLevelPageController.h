#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_48D56DACBE4271BC;
class Class_1_980AD78C3BD5BDE0;
class Class_2_8CE3622A05CA8724;
class Class_2_A98FACB1B11ED1F6;
class Class_2_A98FACB1B11ED1F6_Class_2_8DF41E559120EF31;
class Class_3_004CC21CA8563A02;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABInLevelBattleWidgetController; }
namespace MoleMole { class UIRABInLevelBottomWidgetController; }
namespace MoleMole { class UIRABInLevelRightWidgetController; }
namespace MoleMole { class UIRABInLevelTipsWidgetController; }
namespace MoleMole { class UIRABInLevelTopWidgetController; }
namespace MoleMole { class UIWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }

#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ADDDRAGRESOURCEPREVIEW_OFFSET UNITYSDK_OFFSET(0x16EC8D70)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_APPLYDRAGREPLACEPREVIEW_OFFSET UNITYSDK_OFFSET(0x16EC9850)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_BINDEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0x16EC6350)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x16EC6F70)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_BUILDCUSTOMLISTS_OFFSET UNITYSDK_OFFSET(0x16EBC400)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CHECKFOCUS_OFFSET UNITYSDK_OFFSET(0x16EC5B30)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CLEARCURRENTDRAGFORSTANDBYREFRESH_OFFSET UNITYSDK_OFFSET(0x16EC79A0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CLEARDRAGHOVERSTATE_OFFSET UNITYSDK_OFFSET(0x16EC93C0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CLEARDRAGREPLACEPREVIEW_OFFSET UNITYSDK_OFFSET(0x16EC9C60)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CLEARDRAGRESOURCEPREVIEW_OFFSET UNITYSDK_OFFSET(0x16EC9450)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CLEARDRAG_OFFSET UNITYSDK_OFFSET(0x16EC0990)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CLEAREMPTYSTANDBYNESTEDFOCUS_OFFSET UNITYSDK_OFFSET(0x16EC5380)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CLEARTOPINFO_OFFSET UNITYSDK_OFFSET(0x16EC05B0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CONSOLEOPENBANGBOOINFO_OFFSET UNITYSDK_OFFSET(0x16EBE270)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_DODRAG_OFFSET UNITYSDK_OFFSET(0x16EC1480)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ENDDRAG_OFFSET UNITYSDK_OFFSET(0x16EC2ED0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_FINDNEXTVALIDCOLINROW_OFFSET UNITYSDK_OFFSET(0x16EC2D20)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_FINDNEXTVALIDROW_OFFSET UNITYSDK_OFFSET(0x16EC2AA0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_FOCUSONBATTLEFIELD_OFFSET UNITYSDK_OFFSET(0x16EC5010)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_FOCUSONEMPTYSTANDBYFIELD_OFFSET UNITYSDK_OFFSET(0x16EC5720)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_FOCUSONRIGHTPANEL_OFFSET UNITYSDK_OFFSET(0x16EC5590)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_FOCUSONSTANDBYFIELD_OFFSET UNITYSDK_OFFSET(0x16EBD800)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_GETCURRENTSTANDBYFIELD_OFFSET UNITYSDK_OFFSET(0x16EC2780)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_GETCURSELECTSLOT_OFFSET UNITYSDK_OFFSET(0x16EBDFB0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_GET_CANDOINPUT_OFFSET UNITYSDK_OFFSET(0x16EBE940)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0x16EBEA70)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16EC5D60)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_INITCONSOLE_OFFSET UNITYSDK_OFFSET(0x16EBC3B0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_INITDRAGENTITY_OFFSET UNITYSDK_OFFSET(0x16EC8900)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ISSTANDBYFIELDEMPTY_OFFSET UNITYSDK_OFFSET(0x16EC2800)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x16EC7DB0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EC5D70)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x16EC8050)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x16EC8490)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16EC1F20)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x16EC4A40)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x16EC4D10)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16EC0FB0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16EC1FA0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16EBF110)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16EC4540)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONLEVELINIT_OFFSET UNITYSDK_OFFSET(0x16EC6CF0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x16EC7A00)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x16EC7A50)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONSLOTCLICK_OFFSET UNITYSDK_OFFSET(0x16EBFC90)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONSTAGECHANGE_OFFSET UNITYSDK_OFFSET(0x16EC7230)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16EC6730)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EC69C0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EC6200)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16EC65E0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_OPENBANGBOOINFO_OFFSET UNITYSDK_OFFSET(0x16EBEA80)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_REFRESHDRAGHOVERSTATE_OFFSET UNITYSDK_OFFSET(0x16EC1A40)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_REFRESHDRAGRESOURCEPREVIEW_OFFSET UNITYSDK_OFFSET(0x16EC9170)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_RESETDEPLOYEDBANGBOO_OFFSET UNITYSDK_OFFSET(0x16EC76B0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_RESETFOCUS_OFFSET UNITYSDK_OFFSET(0x16EC06F0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_RESTORECONSOLEAFTERDRAG_OFFSET UNITYSDK_OFFSET(0x16EBED20)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_SELECTSLOTFORCONSOLE_OFFSET UNITYSDK_OFFSET(0x16EBD3C0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_SETDRAGGINGSLOT_OFFSET UNITYSDK_OFFSET(0x16EC3E00)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_SLOTTOLISTINDEX_OFFSET UNITYSDK_OFFSET(0x16EBD0B0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_TOGGLEDATASTAT_OFFSET UNITYSDK_OFFSET(0x16ECA070)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_TOGGLEFIELDFOCUS_OFFSET UNITYSDK_OFFSET(0x16EBFBA0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_TOGGLESLOTHINT_OFFSET UNITYSDK_OFFSET(0x16EC1B60)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_TRYHANDLEPOINTERUP_OFFSET UNITYSDK_OFFSET(0x16EC7AD0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_TRYPROMOTEPENDINGMOUSEDRAG_OFFSET UNITYSDK_OFFSET(0x16EC8300)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_UNBINDEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0x16EC6A60)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER_UPDATEBOTTOMFIELDFORSTAGE_OFFSET UNITYSDK_OFFSET(0x16EC4740)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16ECA410)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECA330)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16ECA420)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16ECA4B0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x16ECA560)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x16ECA5F0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16ECA680)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16ECA730)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16ECA820)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16ECA850)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16ECA8E0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16ECA9A0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16ECA9B0)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16ECA9C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelPageController_TypeDefinitionIndex = 86743;

	class UIRABInLevelPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Single* StaticGet_AnimDelay()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelPageController_TypeDefinitionIndex)->GetStaticField(0xF3E0);
		}
		// static const ::System::String* DRAG_BOOL_NAME; // 0x0
		// static const ::System::String* DRAG_TRIGGER_NAME; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _battleFields; // 0x318
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_8CE3622A05CA8724*>*>* _battleFieldSlots; // 0x320
		::Class_2_A98FACB1B11ED1F6* _view; // 0x328
		::Class_2_A98FACB1B11ED1F6_Class_2_8DF41E559120EF31* _consoleView; // 0x330
		::Class_1_980AD78C3BD5BDE0* viewModel; // 0x338
		::Class_1_48D56DACBE4271BC* syncHelper; // 0x340
		::Il2CppArray<::MoleMole::UIWidgetController*>* ctrls; // 0x348
		::MoleMole::UIRABInLevelTopWidgetController* topCtrl; // 0x350
		::MoleMole::UIRABInLevelTipsWidgetController* tipsCtrl; // 0x358
		::MoleMole::UIRABInLevelRightWidgetController* rightCtrl; // 0x360
		::MoleMole::UIRABInLevelBottomWidgetController* bottomCtrl; // 0x368
		::MoleMole::UIRABInLevelBattleWidgetController* battleCtrl; // 0x370
		::Class_3_004CC21CA8563A02* levelComponent; // 0x378
		::Class_2_8CE3622A05CA8724* pendingMouseDragSlot; // 0x380
		::Class_2_8CE3622A05CA8724* curDraggingSlot; // 0x388
		::Class_2_8CE3622A05CA8724* curDraggingStandbySlot; // 0x390
		::System::Int32 curAtkRange; // 0x398
		::Class_2_8CE3622A05CA8724* curHoverDragSlot; // 0x3A0
		::System::Boolean dragResourcePreAdded; // 0x3A8
		::Class_2_8CE3622A05CA8724* dragResourceReplacingSlot; // 0x3B0
		::System::Boolean isRealDragging; // 0x3B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void InitConsole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_INITCONSOLE_OFFSET))(this);
		}

		::System::Void BuildCustomLists()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_BUILDCUSTOMLISTS_OFFSET))(this);
		}

		::System::Int32 SlotToListIndex(::Class_2_8CE3622A05CA8724* slot)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_8CE3622A05CA8724*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_SLOTTOLISTINDEX_OFFSET))(this, slot);
		}

		::System::Void SelectSlotForConsole(::Class_2_8CE3622A05CA8724* slot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8CE3622A05CA8724*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_SELECTSLOTFORCONSOLE_OFFSET))(this, slot);
		}

		::Class_2_8CE3622A05CA8724* GetCurSelectSlot()
		{
			return ((::Class_2_8CE3622A05CA8724*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_GETCURSELECTSLOT_OFFSET))(this);
		}

		::System::Void ConsoleOpenBangBooInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CONSOLEOPENBANGBOOINFO_OFFSET))(this);
		}

		::System::Void RestoreConsoleAfterDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_RESTORECONSOLEAFTERDRAG_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Int32 FindNextValidRow(::System::Int32 curIndex, ::System::Int32 dir, ::System::Int32 colX, ::System::Func_2<::Class_2_8CE3622A05CA8724*, ::System::Boolean>* validator, ::System::Int32 fallbackIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Func_2<::Class_2_8CE3622A05CA8724*, ::System::Boolean>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_FINDNEXTVALIDROW_OFFSET))(this, curIndex, dir, colX, validator, fallbackIndex);
		}

		::System::Int32 FindNextValidColInRow(::System::Int32 rowY, ::System::Int32 curIndex, ::System::Int32 dir, ::System::Func_2<::Class_2_8CE3622A05CA8724*, ::System::Boolean>* validator, ::System::Int32 fallbackIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Func_2<::Class_2_8CE3622A05CA8724*, ::System::Boolean>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_FINDNEXTVALIDCOLINROW_OFFSET))(this, rowY, curIndex, dir, validator, fallbackIndex);
		}

		::System::Void OnSlotClick(::Class_2_8CE3622A05CA8724* targetSlot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8CE3622A05CA8724*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONSLOTCLICK_OFFSET))(this, targetSlot);
		}

		::System::Void ToggleSlotHint(::UnityEngine::Transform* trans, ::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_TOGGLESLOTHINT_OFFSET))(this, trans, isSelect);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void ResetFocus(::Il2CppArray<::MoleMole::MonoGamepadModule*>* exceptArr)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::MonoGamepadModule*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_RESETFOCUS_OFFSET))(this, exceptArr);
		}

		::System::Void ToggleFieldFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_TOGGLEFIELDFOCUS_OFFSET))(this);
		}

		::System::Void FocusOnBattleField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_FOCUSONBATTLEFIELD_OFFSET))(this);
		}

		::System::Void FocusOnRightPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_FOCUSONRIGHTPANEL_OFFSET))(this);
		}

		::System::Void FocusOnStandbyField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_FOCUSONSTANDBYFIELD_OFFSET))(this);
		}

		::System::Void FocusOnEmptyStandbyField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_FOCUSONEMPTYSTANDBYFIELD_OFFSET))(this);
		}

		::System::Void ClearEmptyStandbyNestedFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CLEAREMPTYSTANDBYNESTEDFOCUS_OFFSET))(this);
		}

		::MoleMole::MonoGamepadNestedListDelegate* GetCurrentStandbyField()
		{
			return ((::MoleMole::MonoGamepadNestedListDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_GETCURRENTSTANDBYFIELD_OFFSET))(this);
		}

		::System::Boolean IsStandbyFieldEmpty(::MoleMole::MonoGamepadNestedListDelegate* standbyDelegate)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadNestedListDelegate*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ISSTANDBYFIELDEMPTY_OFFSET))(this, standbyDelegate);
		}

		::System::Void UpdateBottomFieldForStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_UPDATEBOTTOMFIELDFORSTAGE_OFFSET))(this);
		}

		::System::Void CheckFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CHECKFOCUS_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLevelInit(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONLEVELINIT_OFFSET))(this, args);
		}

		::System::Void BindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_BINDVIEW_OFFSET))(this);
		}

		::System::Void OnStageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONSTAGECHANGE_OFFSET))(this);
		}

		::System::Boolean get_IsDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_GET_ISDRAGGING_OFFSET))(this);
		}

		::System::Boolean get_CanDoInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_GET_CANDOINPUT_OFFSET))(this);
		}

		::System::Void ResetDeployedBangBoo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_RESETDEPLOYEDBANGBOO_OFFSET))(this);
		}

		::System::Void BindEventTrigger(::UnityEngine::UI::Extension::UIImgEventTrigger* eventTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIImgEventTrigger*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_BINDEVENTTRIGGER_OFFSET))(this, eventTrigger);
		}

		::System::Void ClearCurrentDragForStandbyRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CLEARCURRENTDRAGFORSTANDBYREFRESH_OFFSET))(this);
		}

		::System::Void UnBindEventTrigger(::UnityEngine::UI::Extension::UIImgEventTrigger* eventTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIImgEventTrigger*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_UNBINDEVENTTRIGGER_OFFSET))(this, eventTrigger);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Boolean TryHandlePointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_TRYHANDLEPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONBEGINDRAG_OFFSET))(this, eventData, worldPoint);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPointDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONDRAG_OFFSET))(this, eventData, worldPointDelta);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ONENDDRAG_OFFSET))(this, eventData, worldPoint);
		}

		::System::Boolean TryPromotePendingMouseDrag(::System::Boolean isInBottom)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_TRYPROMOTEPENDINGMOUSEDRAG_OFFSET))(this, isInBottom);
		}

		::System::Void SetDraggingSlot(::Class_2_8CE3622A05CA8724* slotData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8CE3622A05CA8724*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_SETDRAGGINGSLOT_OFFSET))(this, slotData);
		}

		::System::Void DoDrag(::UnityEngine::Vector3 screenPos, ::System::Boolean isInBottom, ::UnityEngine::Vector3 realPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_DODRAG_OFFSET))(this, screenPos, isInBottom, realPos);
		}

		::System::Void RefreshDragHoverState(::UnityEngine::Vector2 screenPos, ::System::Boolean isInBottom)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_REFRESHDRAGHOVERSTATE_OFFSET))(this, screenPos, isInBottom);
		}

		::System::Void RefreshDragResourcePreview(::Class_2_8CE3622A05CA8724* hoverSlot, ::System::Boolean isInBottom)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8CE3622A05CA8724*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_REFRESHDRAGRESOURCEPREVIEW_OFFSET))(this, hoverSlot, isInBottom);
		}

		::System::Void AddDragResourcePreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ADDDRAGRESOURCEPREVIEW_OFFSET))(this);
		}

		::System::Void ApplyDragReplacePreview(::Class_2_8CE3622A05CA8724* replaceSlot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8CE3622A05CA8724*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_APPLYDRAGREPLACEPREVIEW_OFFSET))(this, replaceSlot);
		}

		::System::Void ClearDragReplacePreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CLEARDRAGREPLACEPREVIEW_OFFSET))(this);
		}

		::System::Void ClearDragResourcePreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CLEARDRAGRESOURCEPREVIEW_OFFSET))(this);
		}

		::System::Void ClearDragHoverState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CLEARDRAGHOVERSTATE_OFFSET))(this);
		}

		::System::Void EndDrag(::Class_2_8CE3622A05CA8724* endSlot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8CE3622A05CA8724*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_ENDDRAG_OFFSET))(this, endSlot);
		}

		::System::Void ClearDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CLEARDRAG_OFFSET))(this);
		}

		::System::Void InitDragEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_INITDRAGENTITY_OFFSET))(this);
		}

		::System::Void ToggleDataStat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_TOGGLEDATASTAT_OFFSET))(this);
		}

		::System::Void OpenBangBooInfo(::Class_2_8CE3622A05CA8724* slotData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8CE3622A05CA8724*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_OPENBANGBOOINFO_OFFSET))(this, slotData);
		}

		::System::Void ClearTopInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER_CLEARTOPINFO_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
