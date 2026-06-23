#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIPrivateMessageWidgetController_MessageState.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"

class Class_1_794BA983EDDBCFDE_Class_1_6142B71DCEBDB866;
class Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2;
class Class_2_3C641E6CE23E0EDB;
class Class_2_799F87BA96E527A8;
namespace MoleMole { class MonoEventTrigger; }
namespace MoleMole { class MonoGamepadScrollView; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIInvitationMessageWidgetController; }
namespace MoleMole { class UIPrivateMessageNewMessageHintKeyWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::EventSystems { class PointerEventData; }
template <typename T> class Class_1_8914B0C55B12E9CE;

#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ADDBOTTOMMESSAGE_OFFSET UNITYSDK_OFFSET(0x178E06F0)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_CHECKQUICKMODE_OFFSET UNITYSDK_OFFSET(0x178E0510)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_CREATECONVERSION_OFFSET UNITYSDK_OFFSET(0x178DF560)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_CREATEREPLAY_OFFSET UNITYSDK_OFFSET(0x178DF610)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ENTERQUICKMODE_OFFSET UNITYSDK_OFFSET(0x178E0B90)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_FINISHSCROLL_OFFSET UNITYSDK_OFFSET(0x178E1FD0)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_GETTEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x178DF480)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_HANDLEQUICKMODE_OFFSET UNITYSDK_OFFSET(0x178E2350)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_INITSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x178DFB50)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x178DEEC0)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ISLASTLOGICGROUP_OFFSET UNITYSDK_OFFSET(0x178E08E0)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_NEWMESSAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x178E1D90)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONCLICKNEW_OFFSET UNITYSDK_OFFSET(0x178E1F70)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONCLICKSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x178E2300)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x178DF3F0)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONNEXTLETTERAPPEAR_OFFSET UNITYSDK_OFFSET(0x178E0E70)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONSCROLLEND_OFFSET UNITYSDK_OFFSET(0x178E0FD0)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x178E1450)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178DF6C0)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x178DECE0)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x178E0370)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_REFOCUSITEM_OFFSET UNITYSDK_OFFSET(0x178E1210)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x178E0250)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0x178E1140)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_SHOWEMPTY_OFFSET UNITYSDK_OFFSET(0x178E0060)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_SHOWINVITATION_OFFSET UNITYSDK_OFFSET(0x178DFEA0)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_SHOWMESSAGE_OFFSET UNITYSDK_OFFSET(0x178DF980)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_TRYENTERQUICKMODE_OFFSET UNITYSDK_OFFSET(0x178E09D0)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_TRYREFOCUSITEM_OFFSET UNITYSDK_OFFSET(0x178E11C0)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x178E1770)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x178E2530)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x178E23F0)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER__ENTERQUICKMODE_B__44_0_OFFSET UNITYSDK_OFFSET(0x178E2600)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER__ONNEXTLETTERAPPEAR_B__32_0_OFFSET UNITYSDK_OFFSET(0x178E25D0)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER__TRYENTERQUICKMODE_B__31_0_OFFSET UNITYSDK_OFFSET(0x178E2540)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x178E2690)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178E2720)
#define MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x178E27B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessageWidgetController_TypeDefinitionIndex = 53672;

	class UIPrivateMessageWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Action** StaticGet_OnEnterQuickMode()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIPrivateMessageWidgetController_TypeDefinitionIndex)->GetStaticField(0x30FD0);
		}
		::Class_2_799F87BA96E527A8* _view; // 0x2C0
		::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2* _curUser; // 0x2C8
		::System::Int32 _toSetIndex; // 0x2D0
		::System::Int32 _endIndex; // 0x2D4
		::Class_1_8914B0C55B12E9CE<::Class_1_794BA983EDDBCFDE_Class_1_6142B71DCEBDB866*>* _messages; // 0x2D8
		::UnityEngine::Animation* _scrollAnim; // 0x2E0
		::MoleMole::MonoEventTrigger* _eventTrigger; // 0x2E8
		::Class_1_794BA983EDDBCFDE_Class_1_6142B71DCEBDB866* _curMessage; // 0x2F0
		::Class_2_3C641E6CE23E0EDB* _privateMessageModel; // 0x2F8
		::System::Boolean _checkFocus; // 0x300
		::MoleMole::MonoGamepadScrollView* _gamepadScroll; // 0x308
		::Foundation::Coroutine::CoroutineHandle _waitQuickMode; // 0x310
		::Foundation::Coroutine::CoroutineHandle _quickModeDelay; // 0x314
		::System::Boolean _canQuickMode; // 0x318
		::MoleMole::UIPrivateMessageWidgetController_MessageState _messageState; // 0x31C
		::MoleMole::UIPrivateMessageNewMessageHintKeyWidgetController* _hintKeyWidget; // 0x320
		::MoleMole::UIInvitationMessageWidgetController* _invitationWidget; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Int32 GetTemplateIndex(::System::Int32 dataIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_GETTEMPLATEINDEX_OFFSET))(this, dataIndex);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateConversion(::System::Func_1<::MoleMole::UIControlReference*>* controlReference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_CREATECONVERSION_OFFSET))(this, controlReference);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateReplay(::System::Func_1<::MoleMole::UIControlReference*>* controlReference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_CREATEREPLAY_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowMessage(::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2* messageUser)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_SHOWMESSAGE_OFFSET))(this, messageUser);
		}

		::System::Void ShowInvitation(::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2* messageUser)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_SHOWINVITATION_OFFSET))(this, messageUser);
		}

		::System::Void ShowEmpty(::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2* messageUser)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_SHOWEMPTY_OFFSET))(this, messageUser);
		}

		::System::Void InitScrollView(::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2* messageUser)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_INITSCROLLVIEW_OFFSET))(this, messageUser);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_RESET_OFFSET))(this);
		}

		::System::Void PlayAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_PLAYANIMATION_OFFSET))(this);
		}

		::System::Void AddBottomMessage(::Class_1_794BA983EDDBCFDE_Class_1_6142B71DCEBDB866* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_794BA983EDDBCFDE_Class_1_6142B71DCEBDB866*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ADDBOTTOMMESSAGE_OFFSET))(this, message);
		}

		::System::Void CheckQuickMode(::Class_1_794BA983EDDBCFDE_Class_1_6142B71DCEBDB866* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_794BA983EDDBCFDE_Class_1_6142B71DCEBDB866*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_CHECKQUICKMODE_OFFSET))(this, message);
		}

		::System::Boolean IsLastLogicGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ISLASTLOGICGROUP_OFFSET))(this);
		}

		::System::Void TryEnterQuickMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_TRYENTERQUICKMODE_OFFSET))(this);
		}

		::System::Void OnNextLetterAppear(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONNEXTLETTERAPPEAR_OFFSET))(this, args);
		}

		::System::Void OnScrollEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONSCROLLEND_OFFSET))(this);
		}

		::System::Void TryRefocusItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_TRYREFOCUSITEM_OFFSET))(this);
		}

		::System::Void RefocusItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_REFOCUSITEM_OFFSET))(this);
		}

		::System::Void OnScroll(::MonoUITableScrollV2_MoveContext moveContext, ::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONSCROLL_OFFSET))(this, moveContext, v);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnClickNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONCLICKNEW_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* ShowEffect()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_SHOWEFFECT_OFFSET))(this);
		}

		::System::Void FinishScroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_FINISHSCROLL_OFFSET))(this);
		}

		::System::Void NewMessageFadein(::System::Boolean fadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_NEWMESSAGEFADEIN_OFFSET))(this, fadeIn);
		}

		::System::Void OnClickScrollView(::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ONCLICKSCROLLVIEW_OFFSET))(this, pointerEventData);
		}

		::System::Boolean HandleQuickMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_HANDLEQUICKMODE_OFFSET))(this);
		}

		::System::Void EnterQuickMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER_ENTERQUICKMODE_OFFSET))(this);
		}

		::System::Void _TryEnterQuickMode_b__31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER__TRYENTERQUICKMODE_B__31_0_OFFSET))(this);
		}

		::System::Void _OnNextLetterAppear_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER__ONNEXTLETTERAPPEAR_B__32_0_OFFSET))(this);
		}

		::System::Void _EnterQuickMode_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER__ENTERQUICKMODE_B__44_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
