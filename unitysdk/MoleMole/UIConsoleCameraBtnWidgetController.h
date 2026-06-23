#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_E9ABE5073CEACE88_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_MARKTIPSACTIVE_OFFSET UNITYSDK_OFFSET(0x17F6C930)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_ONCLICKCAMERABTN_OFFSET UNITYSDK_OFFSET(0x17F6C3C0)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F6C6C0)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F6C750)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F6C260)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17F6C600)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x17F6C980)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_SETTIPSACTIVE_OFFSET UNITYSDK_OFFSET(0x17F6C820)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17F6C7D0)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F6C9F0)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F6CA50)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F6CAE0)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F6CB70)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17F6CC00)

namespace MoleMole
{
	inline static constexpr unsigned int UIConsoleCameraBtnWidgetController_TypeDefinitionIndex = 55593;

	class UIConsoleCameraBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E9ABE5073CEACE88_1* _view; // 0x2C0
		::System::Boolean _tipsActive; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnClickCameraBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_ONCLICKCAMERABTN_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void MarkTipsActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_MARKTIPSACTIVE_OFFSET))(this, active);
		}

		::System::Void SetTipsActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_SETTIPSACTIVE_OFFSET))(this, active);
		}

		::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_SETINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
