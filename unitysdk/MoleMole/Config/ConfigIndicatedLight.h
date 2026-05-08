#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AddLightMode.h"
#include "unitysdk/MoleMole/Config/LightAttenuationMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGINDICATEDLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A90EE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigIndicatedLight_TypeDefinitionIndex = 69681;

	class ConfigIndicatedLight : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* ExitCurve; // 0x10
		::UnityEngine::AnimationCurve* EnterCurve; // 0x18
		::MoleMole::Config::ConfigPosRot* posRot; // 0x20
		::UnityEngine::Color avatarLightColor; // 0x28
		::UnityEngine::Color color; // 0x38
		::MoleMole::Config::LightAttenuationMode lightAttenuationMode; // 0x48
		::System::Single intensity; // 0x4C
		::System::Single ExitDuration; // 0x50
		::System::Single range; // 0x54
		::MoleMole::Config::AddLightMode addLightMode; // 0x58
		::System::Single EnterDuration; // 0x5C
		::System::Single avatarLightMultiplier; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINDICATEDLIGHT__CTOR_OFFSET))(this);
		}
	};
}
