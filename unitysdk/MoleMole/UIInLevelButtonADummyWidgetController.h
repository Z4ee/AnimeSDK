#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_60638234271CCDB8_129;
namespace MoleMole { class UIButtonPosTemplateWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINLEVELBUTTONADUMMYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164D86F0)
#define MOLEMOLE_UIINLEVELBUTTONADUMMYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164D8780)
#define MOLEMOLE_UIINLEVELBUTTONADUMMYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164D8650)
#define MOLEMOLE_UIINLEVELBUTTONADUMMYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164D8800)
#define MOLEMOLE_UIINLEVELBUTTONADUMMYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164D8860)
#define MOLEMOLE_UIINLEVELBUTTONADUMMYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164D88F0)
#define MOLEMOLE_UIINLEVELBUTTONADUMMYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164D8980)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelButtonADummyWidgetController_TypeDefinitionIndex = 74801;

	class UIInLevelButtonADummyWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_129* _view; // 0x2C0
		::System::Action_1<::MoleMole::UIButtonPosTemplateWidgetController*>* _callback; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONADUMMYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONADUMMYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONADUMMYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONADUMMYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONADUMMYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONADUMMYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONADUMMYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
