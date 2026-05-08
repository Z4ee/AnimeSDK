#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/GamepadInputModifier.h"
#include "unitysdk/MoleMole/Config/MouseInputModifier.h"
#include "unitysdk/MoleMole/Config/TouchInputModifier.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ICharacterAssistAimConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CHARACTERAIMCONTROLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x141E8830)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAimControlConfig_TypeDefinitionIndex = 59184;

	class CharacterAimControlConfig : public ::System::Object
	{
	public:
		::System::Boolean useLeftAxisInput; // 0x10
		::System::Boolean LeftAxisInputInstant; // 0x11
		::MoleMole::Config::MouseInputModifier mouse; // 0x14
		::MoleMole::Config::TouchInputModifier touch; // 0x20
		::MoleMole::Config::GamepadInputModifier gamepad; // 0x30
		::System::Boolean ForbiddenCharacterRotation; // 0x50
		::System::Boolean EnableYawAngleLimitByCharacterForward; // 0x51
		::System::Single YawAngleLimitThresholdByCharacterForward; // 0x54
		::System::String* lockTargetID; // 0x58
		::System::Single lockTargetProtectionTime; // 0x60
		::System::Single lockTargetBreakInputThreshold; // 0x64
		::MoleMole::Config::ICharacterAssistAimConfig* assistConfig; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERAIMCONTROLCONFIG__CTOR_OFFSET))(this);
		}
	};
}
