#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_8D0895B2D04B2FAF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x1708A230)
#define MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1708A120)
#define MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1708A1B0)
#define MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1708A050)
#define MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1708A0B0)
#define MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1708A280)
#define MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1708A2E0)
#define MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1708A370)
#define MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1708A400)
#define MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1708A490)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeGamingScoreWidgetController_TypeDefinitionIndex = 41697;

	class UIArcadeGamingScoreWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_8D0895B2D04B2FAF* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_2_8D0895B2D04B2FAF* GetView()
		{
			return ((::Class_2_8D0895B2D04B2FAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGSCOREWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
