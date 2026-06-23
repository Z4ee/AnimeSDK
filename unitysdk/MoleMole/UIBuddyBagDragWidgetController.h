#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBuddyBagDragWidgetController_DragState.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_143B7A497B890286.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_A59025D696FD25CD;
class Class_2_1C00730466C60BCB_2;
namespace MoleMole { class MonoDragUIObject; }
namespace MoleMole { class UIBuddyDIYComponentWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_CHANGETOCOMPONENTVIEW_OFFSET UNITYSDK_OFFSET(0x17A54D40)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_COMPONENTSTATEDRAG_OFFSET UNITYSDK_OFFSET(0x17A55A70)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ENABLEDRAG_OFFSET UNITYSDK_OFFSET(0x17A54980)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_GETTOUCHPOSITION_OFFSET UNITYSDK_OFFSET(0x17A55280)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ISCLICK_OFFSET UNITYSDK_OFFSET(0x17A55150)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ISMOVE_OFFSET UNITYSDK_OFFSET(0x17A551D0)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONBAGITEMSELECT_OFFSET UNITYSDK_OFFSET(0x17A560C0)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x17A55300)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONCLEARITEMSELECT_OFFSET UNITYSDK_OFFSET(0x17A56620)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17A54670)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONDRAGEND_OFFSET UNITYSDK_OFFSET(0x17A55CB0)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONDRAGING_OFFSET UNITYSDK_OFFSET(0x17A56070)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONDRAGSTART_OFFSET UNITYSDK_OFFSET(0x17A55010)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17A54700)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17A53E50)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17A54530)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_REGISTERDRAG_OFFSET UNITYSDK_OFFSET(0x17A54260)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_UPDATEDRAGUI_OFFSET UNITYSDK_OFFSET(0x17A54C80)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A56670)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17A566D0)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17A56760)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17A567F0)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17A56880)

namespace MoleMole
{
	inline static constexpr unsigned int UIBuddyBagDragWidgetController_TypeDefinitionIndex = 59804;

	class UIBuddyBagDragWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1C00730466C60BCB_2* _view; // 0x2C0
		::MoleMole::UIBuddyBagDragWidgetController_DragState _dragState; // 0x2C8
		::UnityEngine::Transform* selectParent; // 0x2D0
		::UnityEngine::Transform* tvParent; // 0x2D8
		::MoleMole::UIItemIconBtnWidgetController* _item; // 0x2E0
		::MoleMole::MonoDragUIObject* _drag; // 0x2E8
		::System::Boolean isChanged; // 0x2F0
		::MoleMole::UIBuddyDIYComponentWidgetController* dragComponentWidget; // 0x2F8
		::Class_1_A59025D696FD25CD* _buddyDIYComponent; // 0x300
		::Struct_2_143B7A497B890286 DragCollider; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void EnableDrag(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ENABLEDRAG_OFFSET))(this, enable);
		}

		::System::Void ChangeToComponentView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_CHANGETOCOMPONENTVIEW_OFFSET))(this);
		}

		::System::Void RegisterDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_REGISTERDRAG_OFFSET))(this);
		}

		::System::Void OnDragStart(::MoleMole::MonoDragUIObject* callbackObj, ::UnityEngine::EventSystems::PointerEventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONDRAGSTART_OFFSET))(this, callbackObj, data);
		}

		::System::Boolean IsClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ISCLICK_OFFSET))(this);
		}

		::System::Boolean IsMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ISMOVE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetTouchPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_GETTOUCHPOSITION_OFFSET))(this);
		}

		::System::Void OnBeforeUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONBEFOREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnDraging(::MoleMole::MonoDragUIObject* callbackObj, ::UnityEngine::EventSystems::PointerEventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONDRAGING_OFFSET))(this, callbackObj, data);
		}

		::System::Void ComponentStateDrag(::UnityEngine::Vector2 screenPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_COMPONENTSTATEDRAG_OFFSET))(this, screenPosition);
		}

		::System::Void OnDragEnd(::MoleMole::MonoDragUIObject* callbackObj, ::UnityEngine::EventSystems::PointerEventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONDRAGEND_OFFSET))(this, callbackObj, data);
		}

		::System::Void UpdateDragUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_UPDATEDRAGUI_OFFSET))(this);
		}

		::System::Void OnBagItemSelect(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONBAGITEMSELECT_OFFSET))(this, arg);
		}

		::System::Void OnClearItemSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONCLEARITEMSELECT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
