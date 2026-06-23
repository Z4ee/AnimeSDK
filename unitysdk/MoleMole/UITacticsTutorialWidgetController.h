#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWorkBenchInterKnotNoteTutorialWidgetController.h"

class Class_2_53D82E4C9A95120A;
class Class_2_79AE422BA06F6D26_30;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_FAKEUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BB7450)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BB7240)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17BB7380)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17BB71E0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BB7300)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BB70A0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BB7180)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BB74D0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_FAKEUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BB75A0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BB75B0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17BB75C0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17BB75F0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BB76A0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BB76B0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BB76C0)

namespace MoleMole
{
	inline static constexpr unsigned int UITacticsTutorialWidgetController_TypeDefinitionIndex = 41914;

	class UITacticsTutorialWidgetController : public ::MoleMole::UIWorkBenchInterKnotNoteTutorialWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_30* _view; // 0x2D0
		::Class_2_53D82E4C9A95120A* _logicDelegate; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void FakeUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_FAKEUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_FakeUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_FAKEUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
