#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_84D60E5AA05E9C23_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER_INITSTYLE_OFFSET UNITYSDK_OFFSET(0x13436740)
#define MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13436830)
#define MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x134368C0)
#define MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x134366D0)
#define MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x134367C0)
#define MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER_SETRELATIVEPOSITIONBYPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x13436940)
#define MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13436AB0)
#define MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13436B10)
#define MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13436BA0)
#define MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13436C30)
#define MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13436CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWaterFlowPointRowWidgetController_TypeDefinitionIndex = 51041;

	class UIWaterFlowPointRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_84D60E5AA05E9C23_2* _view; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitStyle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER_INITSTYLE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetRelativePositionByPercentage(::System::Single percent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER_SETRELATIVEPOSITIONBYPERCENTAGE_OFFSET))(this, percent);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWATERFLOWPOINTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
