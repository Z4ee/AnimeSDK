#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_9F36F0CF0780ECE5.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_CA3DF8C898264FA9;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x162F0780)
#define MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162F0790)
#define MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162F0800)
#define MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x162F0AD0)
#define MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x162F0A60)
#define MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x162F08A0)
#define MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162F0EB0)
#define MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162F0EC0)
#define MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x162F0F60)
#define MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x162F1040)
#define MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x162F1070)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPresetsLackDialogPopWindowController_TypeDefinitionIndex = 44013;

	class UIZenkovPresetsLackDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* NameOfConfirmBtnsModule; // 0x0
		// static const ::System::String* NameOfGoToBtnsModule; // 0x0
		// static const ::System::String* NameOfRewardListModule; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_CA3DF8C898264FA9* get__viewModel()
		{
			return ((::Class_2_CA3DF8C898264FA9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::MoleMole::MonoGamepadModule* OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* gamepadModule, ::MoleMole::MonoGamepadModule* navTarget, ::Enum_3_9F36F0CF0780ECE5 navDir, ::MoleMole::InputActionEvent inputEvent)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, gamepadModule, navTarget, navDir, inputEvent);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::MoleMole::MonoGamepadModule* __base_OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* P0, ::MoleMole::MonoGamepadModule* P1, ::Enum_3_9F36F0CF0780ECE5 P2, ::MoleMole::InputActionEvent P3)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
