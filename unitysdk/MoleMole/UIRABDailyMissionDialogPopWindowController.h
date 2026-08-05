#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_A2DC7AB7586C8DFB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17D385C0)
#define MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D385D0)
#define MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D38640)
#define MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17D388A0)
#define MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D386E0)
#define MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D38930)
#define MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D38940)
#define MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17D389E0)
#define MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D38A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDailyMissionDialogPopWindowController_TypeDefinitionIndex = 60424;

	class UIRABDailyMissionDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_A2DC7AB7586C8DFB* get__viewModel()
		{
			return ((::Class_2_A2DC7AB7586C8DFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
