#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityGuideUIBaseWidgetController.h"

class Class_2_06435AAA0ECCDDD5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x192EA1A0)
#define MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192EA0A0)
#define MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192EA130)
#define MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192E9F20)
#define MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192EA040)
#define MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x192EA1F0)
#define MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192EA250)
#define MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192EA2E0)
#define MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192EA2F0)
#define MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192EA380)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityYumoWidgetController_TypeDefinitionIndex = 50906;

	class UIActivityYumoWidgetController : public ::MoleMole::ActivityGuideUIBaseWidgetController
	{
	public:
		::Class_2_06435AAA0ECCDDD5* _view; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_2_06435AAA0ECCDDD5* GetView()
		{
			return ((::Class_2_06435AAA0ECCDDD5*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYYUMOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
