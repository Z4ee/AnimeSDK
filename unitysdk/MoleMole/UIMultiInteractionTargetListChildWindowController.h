#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/EZenkovConsoleInteractInputMode.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIMultiInteractionTargetListChildWindowController_TrivialTimer.h"
#include "unitysdk/MoleMole/UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_0_16E4307DCC419505_266;
class Class_2_7281DE1FB6EFB556;
class Class_2_72BDD67FEA972F1C;
namespace MoleMole { class MultiInteractionVoTargetSubSystem; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMultiInteractionTargetListChildWindowController_PropertyContainer; }
namespace MoleMole { class UIMultiInteractionTargetListChildWindowController_ScrollView; }
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController_Context; }
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_CANCELCURRENTHOLDINTERACTIONINPUT_OFFSET UNITYSDK_OFFSET(0x16730620)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_CLEARLIST_OFFSET UNITYSDK_OFFSET(0x1672FEF0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GETINTERACTABLEDISPLAYSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1672BCE0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GETSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1672C070)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1672E900)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16731AB0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GET_ZENKOVDATABRIDGE_OFFSET UNITYSDK_OFFSET(0x1672BA30)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GET__CONSOLEMODE_OFFSET UNITYSDK_OFFSET(0x1672CC50)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GET__CURRENTFOCUSEDINTERACTIONPREDICATE_OFFSET UNITYSDK_OFFSET(0x1672DCF0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GET__RELEASESTRATEGYACTION_OFFSET UNITYSDK_OFFSET(0x1672C300)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GET__SYSTEM_OFFSET UNITYSDK_OFFSET(0x1672DC60)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_HASMOREACTIVATEDITEMSBEYOND_OFFSET UNITYSDK_OFFSET(0x1672E140)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ISCOMBINEDINTERACTINPUTEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1672C830)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ISITEMACTIVATED_OFFSET UNITYSDK_OFFSET(0x1672DD90)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ISITEMCURRENTFOCUSED_OFFSET UNITYSDK_OFFSET(0x1672E760)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_MODIFYSETACTIVE_OFFSET UNITYSDK_OFFSET(0x1672E8A0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x16731A60)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONBOUNDARYCOOLDOWNFINISHED_OFFSET UNITYSDK_OFFSET(0x1672E710)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16730170)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1672FD90)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1672CD10)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1672DB10)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x167315F0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONMOUSESCROLLTIMERFINISHED_OFFSET UNITYSDK_OFFSET(0x1672E6C0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONMULTIINTERACTIONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1672F280)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONMULTIINTERACTIONLISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1672F1E0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONPOINTERCLICKITEM_OFFSET UNITYSDK_OFFSET(0x1672E580)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONPOINTERDOWNITEM_OFFSET UNITYSDK_OFFSET(0x1672E370)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONPOINTERENTERITEM_OFFSET UNITYSDK_OFFSET(0x1672E1C0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONPOINTERUPITEM_OFFSET UNITYSDK_OFFSET(0x1672E440)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1672F770)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16730060)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16730200)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1672EAE0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1672ECB0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16731550)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_REFRESHHINT_OFFSET UNITYSDK_OFFSET(0x1672FA80)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_REFRESHLAYOUTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1672F860)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_REFRESHLAYOUT_OFFSET UNITYSDK_OFFSET(0x16731660)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x16730700)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_REFRESHNEWITEMCONTEXT_OFFSET UNITYSDK_OFFSET(0x1672BB00)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_RELEASEALLSTRATEGIES_OFFSET UNITYSDK_OFFSET(0x1672C690)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_RELEASESTRATEGYINNER_OFFSET UNITYSDK_OFFSET(0x1672C3A0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_RELEASESTRATEGY_OFFSET UNITYSDK_OFFSET(0x1672C5C0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_RESETINTERACTIONBUTTONTICKINGSTATE_OFFSET UNITYSDK_OFFSET(0x1672DB70)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRYFOCUSNEXTINSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1672D370)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_WARMUP_OFFSET UNITYSDK_OFFSET(0x1672E960)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16731C20)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16731AC0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16731CF0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16731D80)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16731E10)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16731E40)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16731ED0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16731EE0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16731FA0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16731FB0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16731FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMultiInteractionTargetListChildWindowController_TypeDefinitionIndex = 84187;

	class UIMultiInteractionTargetListChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__idleTags()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMultiInteractionTargetListChildWindowController_TypeDefinitionIndex)->GetStaticField(0x34550);
		}
		static ::MoleMole::UIMultiInteractionTargetListChildWindowController** StaticGet__instance()
		{
			return (::MoleMole::UIMultiInteractionTargetListChildWindowController**)Il2CppClass::FromTypeDefinitionIndex(UIMultiInteractionTargetListChildWindowController_TypeDefinitionIndex)->GetStaticField(0x34558);
		}
		static ::Class_0_16E4307DCC419505_266** StaticGet__zenkovDataBridge()
		{
			return (::Class_0_16E4307DCC419505_266**)Il2CppClass::FromTypeDefinitionIndex(UIMultiInteractionTargetListChildWindowController_TypeDefinitionIndex)->GetStaticField(0x34560);
		}
		// static const ::System::Single _scrollBoundaryCooldownTime; // 0x0
		// static const ::System::Int32 _maxListItemCount = 0xF; // 0x0
		// static const ::System::Single _mouseScrollSensitivity; // 0x0
		// static const ::System::Single _mouseScrollStateKeepTime; // 0x0
		::System::Collections::Generic::HashSet_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase*>* _allocatedStrategy; // 0x318
		::System::Action_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase*>* __releaseStrategyAction; // 0x320
		::System::Boolean _isInteractionButtonHolding; // 0x328
		::System::Boolean _isTickingInteraction; // 0x329
		::System::Single _accumulatedValue; // 0x32C
		::System::Action* _onMouseScrollTimerFinishedDelegate; // 0x330
		::System::Action* _onBoundaryCooldownFinishedDelegate; // 0x338
		::System::Predicate_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*>* __currentFocusedInteractionPredicate; // 0x340
		::System::Boolean _currentInMouseScrollState; // 0x348
		::System::Boolean _currentInMouseHoverState; // 0x349
		::System::Boolean _scrollReachedBoundary; // 0x34A
		::MoleMole::UIMultiInteractionTargetListChildWindowController_TrivialTimer _mouseScrollStateTimer; // 0x350
		::MoleMole::UIMultiInteractionTargetListChildWindowController_TrivialTimer _boundaryCooldownTimer; // 0x368
		::System::Int32 _warmupCount; // 0x380
		::MoleMole::UIMultiInteractionTargetListChildWindowController_ScrollView* _scrollView; // 0x388
		::System::Collections::Generic::List_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*>* _invalidItemContexts; // 0x390
		::MoleMole::UIMultiInteractionTargetListChildWindowController_PropertyContainer* _propertyContainer; // 0x398
		::System::Boolean _isCurLayoutPc; // 0x3A0
		::System::Boolean _isCurLayoutConsole; // 0x3A1
		::MoleMole::EZenkovConsoleInteractInputMode _curLayoutConsoleMode; // 0x3A4
		::Class_2_7281DE1FB6EFB556* _view; // 0x3A8
		::System::Collections::Generic::List_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*>* _itemContexts; // 0x3B0
		::MoleMole::MultiInteractionVoTargetSubSystem* __system; // 0x3B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		static ::Class_0_16E4307DCC419505_266* get_ZenkovDataBridge()
		{
			return ((::Class_0_16E4307DCC419505_266*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GET_ZENKOVDATABRIDGE_OFFSET))();
		}

		::System::Void RefreshNewItemContext(::Class_2_72BDD67FEA972F1C* interaction, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*& context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_72BDD67FEA972F1C*, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_REFRESHNEWITEMCONTEXT_OFFSET))(this, interaction, context);
		}

		static ::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType GetInteractableDisplayStrategy(::Class_2_72BDD67FEA972F1C* interaction)
		{
			return ((::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType(*)(::Class_2_72BDD67FEA972F1C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GETINTERACTABLEDISPLAYSTRATEGY_OFFSET))(interaction);
		}

		::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase* GetStrategy(::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType displayStrategyType)
		{
			return ((::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase*(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GETSTRATEGY_OFFSET))(this, displayStrategyType);
		}

		::System::Void ReleaseStrategyInner(::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase* strategy)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_RELEASESTRATEGYINNER_OFFSET))(this, strategy);
		}

		::System::Action_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase*>* get__releaseStrategyAction()
		{
			return ((::System::Action_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GET__RELEASESTRATEGYACTION_OFFSET))(this);
		}

		::System::Void ReleaseStrategy(::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase* strategy)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_RELEASESTRATEGY_OFFSET))(this, strategy);
		}

		::System::Void ReleaseAllStrategies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_RELEASEALLSTRATEGIES_OFFSET))(this);
		}

		::System::Boolean IsCombinedInteractInputEventType(::MoleMole::InputLogicEventType input)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ISCOMBINEDINTERACTINPUTEVENTTYPE_OFFSET))(this, input);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void ResetInteractionButtonTickingState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_RESETINTERACTIONBUTTONTICKINGSTATE_OFFSET))(this);
		}

		::System::Void TryFocusNextInScrollView(::System::Int32 step)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRYFOCUSNEXTINSCROLLVIEW_OFFSET))(this, step);
		}

		::System::Boolean IsItemActivated(::System::Int32 itemIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ISITEMACTIVATED_OFFSET))(this, itemIndex);
		}

		::System::Boolean HasMoreActivatedItemsBeyond(::System::Int32 current, ::System::Int32 dir, ::System::Int32 count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_HASMOREACTIVATEDITEMSBEYOND_OFFSET))(this, current, dir, count);
		}

		::System::Void OnPointerEnterItem(::Class_2_72BDD67FEA972F1C* interaction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_72BDD67FEA972F1C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONPOINTERENTERITEM_OFFSET))(this, interaction);
		}

		::System::Void OnPointerDownItem(::Class_2_72BDD67FEA972F1C* interaction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_72BDD67FEA972F1C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONPOINTERDOWNITEM_OFFSET))(this, interaction);
		}

		::System::Void OnPointerUpItem(::Class_2_72BDD67FEA972F1C* interaction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_72BDD67FEA972F1C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONPOINTERUPITEM_OFFSET))(this, interaction);
		}

		::System::Void OnPointerClickItem(::Class_2_72BDD67FEA972F1C* interaction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_72BDD67FEA972F1C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONPOINTERCLICKITEM_OFFSET))(this, interaction);
		}

		::System::Void OnMouseScrollTimerFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONMOUSESCROLLTIMERFINISHED_OFFSET))(this);
		}

		::System::Void OnBoundaryCooldownFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONBOUNDARYCOOLDOWNFINISHED_OFFSET))(this);
		}

		::MoleMole::EZenkovConsoleInteractInputMode get__consoleMode()
		{
			return ((::MoleMole::EZenkovConsoleInteractInputMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GET__CONSOLEMODE_OFFSET))(this);
		}

		::System::Predicate_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*>* get__currentFocusedInteractionPredicate()
		{
			return ((::System::Predicate_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GET__CURRENTFOCUSEDINTERACTIONPREDICATE_OFFSET))(this);
		}

		::System::Boolean IsItemCurrentFocused(::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ISITEMCURRENTFOCUSED_OFFSET))(this, context);
		}

		static ::System::Void ModifySetActive(::UnityEngine::GameObject* gameObject, ::System::Boolean active)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_MODIFYSETACTIVE_OFFSET))(gameObject, active);
		}

		static ::MoleMole::UIMultiInteractionTargetListChildWindowController* get_Instance()
		{
			return ((::MoleMole::UIMultiInteractionTargetListChildWindowController*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GET_INSTANCE_OFFSET))();
		}

		::System::Void Warmup(::System::Int32 listItemCount, ::System::Int32 dropItemCount, ::System::Int32 defaultItemCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_WARMUP_OFFSET))(this, listItemCount, dropItemCount, defaultItemCount);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ClearList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_CLEARLIST_OFFSET))(this);
		}

		::System::Void OnMultiInteractionListChanged(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONMULTIINTERACTIONLISTCHANGED_OFFSET))(this, e);
		}

		::System::Void RefreshList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_REFRESHLIST_OFFSET))(this);
		}

		::System::Void OnMultiInteractionFocusChanged(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONMULTIINTERACTIONFOCUSCHANGED_OFFSET))(this, e);
		}

		::System::Void OnUpdate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONUPDATE_OFFSET))(this, dt);
		}

		::System::Void RefreshHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_REFRESHHINT_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void RefreshLayoutIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_REFRESHLAYOUTIFNEEDED_OFFSET))(this);
		}

		::System::Void RefreshLayout(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_REFRESHLAYOUT_OFFSET))(this, e);
		}

		::System::Void CancelCurrentHoldInteractionInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_CANCELCURRENTHOLDINTERACTIONINPUT_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::MoleMole::MultiInteractionVoTargetSubSystem* get__system()
		{
			return ((::MoleMole::MultiInteractionVoTargetSubSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_GET__SYSTEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
