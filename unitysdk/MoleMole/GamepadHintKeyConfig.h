#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EE0B3EB4E953FCC3.h"
#include "unitysdk/MoleMole/GamepadHintKeyConfig_Enum_3_BC2B815FC5680EC2.h"
#include "unitysdk/MoleMole/GamepadNavTargetConfig.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/SpecialGamepadInputHintType.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

namespace MoleMole
{
	inline static constexpr unsigned int GamepadHintKeyConfig_TypeDefinitionIndex = 49719;

	struct alignas(8) GamepadHintKeyConfig
	{
		::MoleMole::GamepadHintKeyConfig_Enum_3_BC2B815FC5680EC2 keyPanelInsertPosition; // 0x10
		::MoleMole::SpecialGamepadInputHintType specialGamepadInputHint; // 0x14
		::MoleMole::InputLogicEventType logicEvent; // 0x18
		::UnityEngine::UI::Text* bindedText; // 0x20
		::System::String* textKey; // 0x28
		::System::Boolean IsHideHint; // 0x30
		::System::Boolean handleInput; // 0x31
		::UnityEngine::UI::Extension::UIButtonBase* bindedButton; // 0x38
		::System::Boolean hideHintWhenButtonDisable; // 0x40
		::System::Boolean IsHandleLongPress; // 0x41
		::Share::ENotificationBadgeType _notificationBadgeType; // 0x44
		::System::String* _notificationKey; // 0x48
		::System::Boolean isLockScInCn; // 0x50
		::MoleMole::GamepadNavTargetConfig canNavigateToModuleConfig; // 0x58
		::Enum_3_EE0B3EB4E953FCC3 targetModuleHintCheckType; // 0x68
		::System::Boolean hideHintWhenCanNotNavigateTo; // 0x6C
	};
}
