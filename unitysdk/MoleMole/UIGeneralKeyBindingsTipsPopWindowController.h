#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_54486B88E1863A04.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/Enum_3_EB2D507B2CF7B110.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_029003AFE5A42E47.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"

class Class_2_754022533D501C3E_6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIKeyBindingContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_APPLYKEYBINDING_OFFSET UNITYSDK_OFFSET(0x155B6550)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_CHECKDPADCOMBOCONFLICT_OFFSET UNITYSDK_OFFSET(0x155B6D90)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_DOTRYKEYBINDING_OFFSET UNITYSDK_OFFSET(0x155B5890)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_GETDPADCONFLICTTEXTPARAM_OFFSET UNITYSDK_OFFSET(0x155B6B40)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x155B3260)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x155B3250)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x155B33E0)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x155B3A30)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155B37F0)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x155B3880)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155B3910)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155B3270)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_POSTCHECKGAMEPADCOMBOKEYBINDINGVALID_OFFSET UNITYSDK_OFFSET(0x155B5FA0)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_TICKKEYBINDING_OFFSET UNITYSDK_OFFSET(0x155B4230)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_TRYKEYBINDING_OFFSET UNITYSDK_OFFSET(0x155B5310)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_UNBINDKEY_OFFSET UNITYSDK_OFFSET(0x155B3DE0)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x155B7000)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER__UNBINDKEY_B__11_0_OFFSET UNITYSDK_OFFSET(0x155B7010)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER__UNBINDKEY_B__11_1_OFFSET UNITYSDK_OFFSET(0x155B7430)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155B7440)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x155B74D0)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155B7590)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155B75A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralKeyBindingsTipsPopWindowController_TypeDefinitionIndex = 73924;

	class UIGeneralKeyBindingsTipsPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_754022533D501C3E_6* _view; // 0x310
		::MoleMole::UIKeyBindingContext* _context; // 0x318
		::Enum_3_A019F766F8C74696 _inputDevice; // 0x320
		::MoleMole::LogicButtonInputType _logicButtonType; // 0x324
		::Enum_3_54486B88E1863A04 _settingContentType; // 0x328
		::System::Boolean _isListenInput; // 0x32C
		::System::Boolean _isEnableUpdate; // 0x32D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnBeforeUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_ONBEFOREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void UnbindKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_UNBINDKEY_OFFSET))(this);
		}

		::System::Void TickKeyBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_TICKKEYBINDING_OFFSET))(this);
		}

		::System::Void TryKeyBinding(::System::Int32 keycode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_TRYKEYBINDING_OFFSET))(this, keycode);
		}

		::System::Void DoTryKeyBinding(::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>* allInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_DOTRYKEYBINDING_OFFSET))(this, allInfos);
		}

		::System::Boolean GetDPadConflictTextParam(::Enum_3_EB2D507B2CF7B110 checkComboKeyBindingValidType, ::UnityEngine::InputSystem::LowLevel::GamepadButton conflictDpadKeyCode, ::MoleMole::LogicButtonInputType conflictDpadLogicButton, ::System::String*& param0, ::System::String*& param1, ::System::String*& param2, ::System::String*& param3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_EB2D507B2CF7B110, ::UnityEngine::InputSystem::LowLevel::GamepadButton, ::MoleMole::LogicButtonInputType, ::System::String*&, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_GETDPADCONFLICTTEXTPARAM_OFFSET))(this, checkComboKeyBindingValidType, conflictDpadKeyCode, conflictDpadLogicButton, param0, param1, param2, param3);
		}

		::Enum_3_EB2D507B2CF7B110 PostCheckGamepadComboKeyBindingValid(::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>* allInfos, ::UnityEngine::InputSystem::LowLevel::GamepadButton& conflictDpadKeyCode, ::MoleMole::LogicButtonInputType& conflictDpadLogicButton)
		{
			return ((::Enum_3_EB2D507B2CF7B110(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>*, ::UnityEngine::InputSystem::LowLevel::GamepadButton&, ::MoleMole::LogicButtonInputType&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_POSTCHECKGAMEPADCOMBOKEYBINDINGVALID_OFFSET))(this, allInfos, conflictDpadKeyCode, conflictDpadLogicButton);
		}

		::System::Boolean CheckDPadComboConflict(::UnityEngine::InputSystem::LowLevel::GamepadButton targetCode, ::MoleMole::LogicButtonInputType checkType, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>* allInfos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::GamepadButton, ::MoleMole::LogicButtonInputType, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_CHECKDPADCOMBOCONFLICT_OFFSET))(this, targetCode, checkType, allInfos);
		}

		::System::Void ApplyKeyBinding(::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>* keyBindingInfoList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER_APPLYKEYBINDING_OFFSET))(this, keyBindingInfoList);
		}

		::System::Void _UnbindKey_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER__UNBINDKEY_B__11_0_OFFSET))(this);
		}

		::System::Void _UnbindKey_b__11_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER__UNBINDKEY_B__11_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
