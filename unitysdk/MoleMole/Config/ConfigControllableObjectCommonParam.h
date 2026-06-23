#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class CharacterAimModeConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCONTROLLABLEOBJECTCOMMONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x10CFEB30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigControllableObjectCommonParam_TypeDefinitionIndex = 67606;

	class ConfigControllableObjectCommonParam : public ::System::Object
	{
	public:
		::System::String* overrideBackToAvatarBlackCurveKey; // 0x10
		::System::String* screenEffectName; // 0x18
		::System::String* backToAvatarScreenEffectName; // 0x20
		::MoleMole::Config::CharacterAimModeConfig* AimCameraConfig; // 0x28
		::System::Single overrideBackToAvatarSwitchCameraDuration; // 0x30
		::System::Boolean setInitAimTarget; // 0x34
		::System::Boolean isCutReturn; // 0x35
		::System::Single overrideSwitchCameraDuration; // 0x38
		::MoleMole::Config::ScreenEffectType backToAvatarScreenEffectType; // 0x3C
		::MoleMole::Config::ScreenEffectType screenEffectType; // 0x40
		::System::Single cutDurration; // 0x44
		::UnityEngine::Vector3 initAimTargetOffset; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCONTROLLABLEOBJECTCOMMONPARAM__CTOR_OFFSET))(this);
		}
	};
}
