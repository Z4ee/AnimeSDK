#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_D68EC59F0214DAC2_5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1756FA30)
#define MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1756FAC0)
#define MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1756F740)
#define MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1756F7A0)
#define MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1756F850)
#define MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1756FB40)
#define MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1756FBA0)
#define MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1756FC30)
#define MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1756FCC0)
#define MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1756FD50)

namespace MoleMole
{
	inline static constexpr unsigned int UIPasswordGameNumberDisplayWidgetController_TypeDefinitionIndex = 49199;

	class UIPasswordGameNumberDisplayWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_D68EC59F0214DAC2_5* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetContext(::Foundation::AssetPath imageKey, ::System::Boolean showEnter, ::System::Boolean showHint, ::System::Boolean showBackground, ::System::Boolean showUnderLine)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER_SETCONTEXT_OFFSET))(this, imageKey, showEnter, showHint, showBackground, showUnderLine);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMENUMBERDISPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
