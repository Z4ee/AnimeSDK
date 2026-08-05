#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_9F36F0CF0780ECE5.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_89FBAF9C3593170E;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x13524270)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13524280)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x135242F0)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULEINPUTACTIONPOST_OFFSET UNITYSDK_OFFSET(0x135255E0)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x13524550)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x13525510)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x135245D0)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x13524C60)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONPREINPUTACTION_OFFSET UNITYSDK_OFFSET(0x13524BC0)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x13525690)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13524390)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13525880)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER__ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_G__SETCHECKBTNACTIVE_11_0_OFFSET UNITYSDK_OFFSET(0x13524A40)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13525890)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEINPUTACTIONPOST_OFFSET UNITYSDK_OFFSET(0x13525930)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x135259F0)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x13525AA0)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x13525B80)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x13525C70)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONPREINPUTACTION_OFFSET UNITYSDK_OFFSET(0x13525CA0)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x13525D50)
#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13525E10)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPresetsDialogPopWindowController_TypeDefinitionIndex = 69584;

	class UIZenkovPresetsDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* NameOfPresetList; // 0x0
		::MoleMole::MonoGamepadSelectable* _contentSelectable; // 0x318
		::System::Int32 _nowContentIndex; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_89FBAF9C3593170E* get__viewModel()
		{
			return ((::Class_2_89FBAF9C3593170E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Boolean OnPreInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONPREINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::MoleMole::MonoGamepadModule* OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* gamepadModule, ::MoleMole::MonoGamepadModule* navTarget, ::Enum_3_9F36F0CF0780ECE5 navDir, ::MoleMole::InputActionEvent inputEvent)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, gamepadModule, navTarget, navDir, inputEvent);
		}

		::System::Boolean OnGamepadModuleInputActionPost(::MoleMole::MonoGamepadModule* gamepadModule, ::MoleMole::InputActionEvent actionEvent)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULEINPUTACTIONPOST_OFFSET))(this, gamepadModule, actionEvent);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		static ::System::Void _OnGamepadModuleTryOverrideNextSelectIndex_g__SetCheckBtnActive_11_0(::UnityEngine::Transform* trans, ::System::Boolean show)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER__ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_G__SETCHECKBTNACTIVE_11_0_OFFSET))(trans, show);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_OnGamepadModuleInputActionPost(::MoleMole::MonoGamepadModule* P0, ::MoleMole::InputActionEvent P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEINPUTACTIONPOST_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::MoleMole::MonoGamepadModule* __base_OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* P0, ::MoleMole::MonoGamepadModule* P1, ::Enum_3_9F36F0CF0780ECE5 P2, ::MoleMole::InputActionEvent P3)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnPreInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONPREINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
