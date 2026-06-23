#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InputActionEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/SpecialGamepadInputHintType.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/MouseButton.h"

namespace MoleMole { class BaseInputActionEventConfig; }
namespace MoleMole::Config { class InputActionTextIconConfig; }
namespace MoleMole::Config { class InputCodeSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x162AFB50)
#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x162AFB60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInputSetting_TypeDefinitionIndex = 83066;

	class ConfigInputSetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Single CameraMouseReviseRatio; // 0x60
		::System::Single CameraGamepadRightStickReviseRatio; // 0x64
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* CameraSensitivityParamsMap; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* CameraTouchSensitivityParamsMap; // 0x70
		::System::Single InLevelCameraMobileTouchSensitivityX; // 0x78
		::System::Single InLevelCameraMobileTouchSensitivityY; // 0x7C
		::System::Single InLevelCameraButtonInputSensitivityX; // 0x80
		::System::Single InLevelCameraButtonInputSensitivityY; // 0x84
		::System::Single SemiHideCursorCDTime; // 0x88
		::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>* DefaultButtonInputMap; // 0x90
		::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>* DefaultButtonInputMapTmp; // 0x98
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>*>* MutexButtonList; // 0xA0
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>*>* KeyboardMouseMutexButtonList; // 0xA8
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>*>* GamepadMutexButtonList; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Key>* BannedKeyboardCodeList; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::GamepadButton>* BannedGamepadCodeList; // 0xC0
		::System::String* HintKeyDisableMaterialPath; // 0xC8
		::System::String* EmptyKeyBindingIconPath; // 0xD0
		::System::String* LockedKeyBindingIconPath; // 0xD8
		::MoleMole::Config::InputActionTextIconConfig* ActionTextIconConfig; // 0xE0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Key, ::System::String*>* KeyboardButtonTextDict; // 0xE8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Key, ::System::String*>* KeyboardButtonTextDeutschDict; // 0xF0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Key, ::System::String*>* KeyboardButtonTextFrenchDict; // 0xF8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Key, ::System::String*>* KeyboardButtonIconPathDict; // 0x100
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Key, ::System::String*>* KeyboardButtonIconPathDeutschDict; // 0x108
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Key, ::System::String*>* KeyboardButtonIconPathFrenchDict; // 0x110
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::MouseButton, ::System::String*>* MouseButtonIconPathDict; // 0x118
		::System::Collections::Generic::Dictionary_2<::MoleMole::SpecialGamepadInputHintType, ::System::String*>* SpecialMouseButtonIconPathDict; // 0x120
		::System::String* PSGamepadSelectButtonIconPath; // 0x128
		::System::String* PS5GamepadSelectButtonIconPath; // 0x130
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::System::String*>* PSGamepadButtonIconPathDict; // 0x138
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::System::String*>* PS5GamepadButtonIconPathDict; // 0x140
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::System::String*>* XBOXGamepadButtonIconPathDict; // 0x148
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::System::String*>* NSGamepadButtonIconPathDict; // 0x150
		::System::Collections::Generic::Dictionary_2<::MoleMole::SpecialGamepadInputHintType, ::System::String*>* SpecialPSGamepadButtonIconPathDict; // 0x158
		::System::Collections::Generic::Dictionary_2<::MoleMole::SpecialGamepadInputHintType, ::System::String*>* SpecialPS5GamepadButtonIconPathDict; // 0x160
		::System::Collections::Generic::Dictionary_2<::MoleMole::SpecialGamepadInputHintType, ::System::String*>* SpecialXBOXGamepadButtonIconPathDict; // 0x168
		::System::Collections::Generic::Dictionary_2<::MoleMole::SpecialGamepadInputHintType, ::System::String*>* SpecialNSGamepadButtonIconPathDict; // 0x170
		::System::Collections::Generic::Dictionary_2<::MoleMole::InputActionEventType, ::MoleMole::BaseInputActionEventConfig*>* InputActionEventConfigDict; // 0x178

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
