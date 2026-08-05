#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_8942942947AF1F3B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x140FF350)
#define MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x140FF3E0)
#define MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x140FF280)
#define MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x140FF2E0)
#define MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x140FF460)
#define MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER_UPDATEPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0x140FF510)
#define MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x140FF880)
#define MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x140FF8E0)
#define MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x140FF970)
#define MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x140FFA00)
#define MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x140FFA90)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovQTEProgressBarWidgetController_TypeDefinitionIndex = 48092;

	class UIZenkovQTEProgressBarWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_8942942947AF1F3B* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Single normalized)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER_SETPROGRESS_OFFSET))(this, normalized);
		}

		::System::Void UpdatePointPosition(::System::Single normalized)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER_UPDATEPOINTPOSITION_OFFSET))(this, normalized);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQTEPROGRESSBARWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
