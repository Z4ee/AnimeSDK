#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_B11B5D4D60908E2D;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17D646F0)
#define MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D64700)
#define MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D64770)
#define MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x17D64A40)
#define MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D64810)
#define MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D64BB0)
#define MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D64BC0)
#define MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x17D64C60)
#define MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D64D50)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureToolDialogPopWindowController_TypeDefinitionIndex = 84815;

	class UISummerTideTreasureToolDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_B11B5D4D60908E2D* get__viewModel()
		{
			return ((::Class_2_B11B5D4D60908E2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
