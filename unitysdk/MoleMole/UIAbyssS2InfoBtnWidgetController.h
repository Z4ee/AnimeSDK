#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_DE782794730406DC_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_GET_CHECKCANHANDLEEXTRASYSTEM_OFFSET UNITYSDK_OFFSET(0x19748DD0)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_GET_TABPOPUPWINDOWCREATOR_OFFSET UNITYSDK_OFFSET(0x19748B40)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_INITINFOBUTTON_OFFSET UNITYSDK_OFFSET(0x19748BD0)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONCLICKBTN_OFFSET UNITYSDK_OFFSET(0x19749450)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19748DF0)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONEXTRASYSTEMHANDLED_OFFSET UNITYSDK_OFFSET(0x19748FB0)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19748F20)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19749150)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19748B60)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19748D60)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x197494F0)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_SET_CHECKCANHANDLEEXTRASYSTEM_OFFSET UNITYSDK_OFFSET(0x19748DE0)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_SET_TABPOPUPWINDOWCREATOR_OFFSET UNITYSDK_OFFSET(0x19748B50)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x197491D0)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER__CHECKHIDEMAPBUTTON_OFFSET UNITYSDK_OFFSET(0x19749220)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19749560)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197496B0)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19749740)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19749770)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19749800)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19749890)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2InfoBtnWidgetController_TypeDefinitionIndex = 54455;

	class UIAbyssS2InfoBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_DE782794730406DC_3* _view; // 0x2C0
		::System::Nullable_1<::System::Boolean> _infoInteractable; // 0x2C8
		::System::Nullable_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag> cacheTag; // 0x2CC
		::System::Boolean _openInfoButton; // 0x2D4
		::System::Action* _TabPopupWindowCreator_k__BackingField; // 0x2D8
		::System::Func_1<::System::Boolean>* _CheckCanHandleExtraSystem_k__BackingField; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Action* get_TabPopupWindowCreator()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_GET_TABPOPUPWINDOWCREATOR_OFFSET))(this);
		}

		::System::Void set_TabPopupWindowCreator(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_SET_TABPOPUPWINDOWCREATOR_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Func_1<::System::Boolean>* get_CheckCanHandleExtraSystem()
		{
			return ((::System::Func_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_GET_CHECKCANHANDLEEXTRASYSTEM_OFFSET))(this);
		}

		::System::Void set_CheckCanHandleExtraSystem(::System::Func_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_SET_CHECKCANHANDLEEXTRASYSTEM_OFFSET))(this, value);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void InitInfoButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_INITINFOBUTTON_OFFSET))(this);
		}

		::System::Void _CheckHideMapButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER__CHECKHIDEMAPBUTTON_OFFSET))(this);
		}

		::System::Void OnClickBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONCLICKBTN_OFFSET))(this);
		}

		::System::Boolean OnExtraSystemHandled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONEXTRASYSTEMHANDLED_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_SETINTERACTABLE_OFFSET))(this, b);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
