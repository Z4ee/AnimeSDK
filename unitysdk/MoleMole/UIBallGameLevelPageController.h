#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_620D59CA1737DE66;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18020410)
#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18020420)
#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18020490)
#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x18020920)
#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18020A80)
#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18020850)
#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_ONPREPBACKTOMAINCITY_OFFSET UNITYSDK_OFFSET(0x18020D40)
#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x180207A0)
#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18020530)
#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18020D90)
#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18020DA0)
#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x18020E40)
#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18020E50)
#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18020F40)
#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18020FD0)
#define MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18020FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameLevelPageController_TypeDefinitionIndex = 80409;

	class UIBallGameLevelPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_620D59CA1737DE66* get__viewModel()
		{
			return ((::Class_2_620D59CA1737DE66*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void OnPrepBackToMainCity(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER_ONPREPBACKTOMAINCITY_OFFSET))(this, arg);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
