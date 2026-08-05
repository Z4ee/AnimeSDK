#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79AE422BA06F6D26_189;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIINLEVELBUTTONDDUMMYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19EB8590)
#define MOLEMOLE_UIINLEVELBUTTONDDUMMYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19EB8620)
#define MOLEMOLE_UIINLEVELBUTTONDDUMMYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19EB8480)
#define MOLEMOLE_UIINLEVELBUTTONDDUMMYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB86A0)
#define MOLEMOLE_UIINLEVELBUTTONDDUMMYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19EB8700)
#define MOLEMOLE_UIINLEVELBUTTONDDUMMYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19EB8790)
#define MOLEMOLE_UIINLEVELBUTTONDDUMMYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19EB8820)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelButtonDDummyWidgetController_TypeDefinitionIndex = 62088;

	class UIInLevelButtonDDummyWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_189* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONDDUMMYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONDDUMMYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONDDUMMYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONDDUMMYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONDDUMMYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONDDUMMYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONDDUMMYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
