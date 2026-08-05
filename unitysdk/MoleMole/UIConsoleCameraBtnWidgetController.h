#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_E9ABE5073CEACE88_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_MARKTIPSACTIVE_OFFSET UNITYSDK_OFFSET(0x192BED70)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_ONCLICKCAMERABTN_OFFSET UNITYSDK_OFFSET(0x192BE800)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192BEB00)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192BEB90)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192BE6A0)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192BEA40)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x192BEDC0)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_SETTIPSACTIVE_OFFSET UNITYSDK_OFFSET(0x192BEC60)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x192BEC10)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x192BEE30)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192BEE90)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192BEF20)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192BEFB0)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192BF040)

namespace MoleMole
{
	inline static constexpr unsigned int UIConsoleCameraBtnWidgetController_TypeDefinitionIndex = 90209;

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
