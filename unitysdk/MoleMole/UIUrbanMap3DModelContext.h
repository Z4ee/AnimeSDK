#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIUrbanMapPageContext_SDefaultFocusInfo.h"
#include "unitysdk/Struct_2_B679E4D914A10080.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIUrbanMapPageContext; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_ScrollCallback; }

#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x15A717B0)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONDRAG_OFFSET UNITYSDK_OFFSET(0x15A717D0)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x15A717F0)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x15A71790)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x15A717C0)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONDRAG_OFFSET UNITYSDK_OFFSET(0x15A717E0)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x15A71800)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x15A717A0)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A71810)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMap3DModelContext_TypeDefinitionIndex = 52802;

	class UIUrbanMap3DModelContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* _OnDrag_k__BackingField; // 0x28
		::System::Func_2<::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*>* OnFilter; // 0x30
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* _OnEndDrag_k__BackingField; // 0x38
		::System::Action_1<::UnityEngine::RenderTexture*>* OnCreateRt; // 0x40
		::UnityEngine::RectTransform* Icon2DRoot; // 0x48
		::UnityEngine::RectTransform* OutScreenRoot; // 0x50
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* _OnBeginDrag_k__BackingField; // 0x58
		::System::String* TeleportAudio; // 0x60
		::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo DefaultFocusInfo; // 0x68
		::MoleMole::UIBaseController* ParentUI; // 0x98
		::UnityEngine::RectTransform* PanelRoot; // 0xA0
		::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback* _OnScroll_k__BackingField; // 0xA8
		::MoleMole::UIUrbanMapPageContext* ParentContext; // 0xB0
		::UnityEngine::RectTransform* OutScreenRootBig; // 0xB8
		::System::Int32 MapAreaId; // 0xC0
		::System::Boolean AsyncLoadMode; // 0xC4
		::System::Boolean AutoFocusTrackQuestAnim; // 0xC5
		::Struct_2_B679E4D914A10080 SectionOrFloor; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback* get_OnScroll()
		{
			return ((::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONSCROLL_OFFSET))(this);
		}

		::System::Void set_OnScroll(::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONSCROLL_OFFSET))(this, value);
		}

		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* get_OnBeginDrag()
		{
			return ((::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONBEGINDRAG_OFFSET))(this);
		}

		::System::Void set_OnBeginDrag(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONBEGINDRAG_OFFSET))(this, value);
		}

		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* get_OnDrag()
		{
			return ((::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONDRAG_OFFSET))(this);
		}

		::System::Void set_OnDrag(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONDRAG_OFFSET))(this, value);
		}

		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* get_OnEndDrag()
		{
			return ((::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONENDDRAG_OFFSET))(this);
		}

		::System::Void set_OnEndDrag(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONENDDRAG_OFFSET))(this, value);
		}
	};
}
