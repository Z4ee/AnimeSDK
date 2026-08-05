#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_647FD0778688D46A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }

#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_MARKTIPSACTIVE_OFFSET UNITYSDK_OFFSET(0x179E46B0)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_ONCLICKCAMERABTN_OFFSET UNITYSDK_OFFSET(0x179E47F0)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179E4470)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179E4500)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179E4290)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179E43C0)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_SETCAMERABTN_OFFSET UNITYSDK_OFFSET(0x179E4700)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x179E4A30)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_SETTIPSACTIVE_OFFSET UNITYSDK_OFFSET(0x179E45D0)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x179E4580)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179E4AD0)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179E4B30)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179E4BC0)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179E4C50)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179E4CE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraBtnWidgetController_TypeDefinitionIndex = 50497;

	class UIMainCityCameraBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_647FD0778688D46A* _view; // 0x2C0
		::MoleMole::UIGeneralBtn03WidgetController* _btnController; // 0x2C8
		::System::Boolean _tipsActive; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void MarkTipsActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_MARKTIPSACTIVE_OFFSET))(this, active);
		}

		::System::Void SetCameraBtn(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_SETCAMERABTN_OFFSET))(this, active);
		}

		::System::Void SetTipsActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_SETTIPSACTIVE_OFFSET))(this, active);
		}

		::System::Void OnClickCameraBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_ONCLICKCAMERABTN_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER_SETINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
