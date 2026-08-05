#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AddLightMode.h"
#include "unitysdk/MoleMole/Config/LightAttenuationMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGINDICATEDLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x14376D10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigIndicatedLight_TypeDefinitionIndex = 86082;

	class ConfigIndicatedLight : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* ExitCurve; // 0x10
		::MoleMole::Config::ConfigPosRot* posRot; // 0x18
		::UnityEngine::AnimationCurve* EnterCurve; // 0x20
		::System::Single intensity; // 0x28
		::System::Single ExitDuration; // 0x2C
		::MoleMole::Config::AddLightMode addLightMode; // 0x30
		::System::Single avatarLightMultiplier; // 0x34
		::System::Single range; // 0x38
		::System::Single EnterDuration; // 0x3C
		::MoleMole::Config::LightAttenuationMode lightAttenuationMode; // 0x40
		::UnityEngine::Color color; // 0x44
		::UnityEngine::Color avatarLightColor; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINDICATEDLIGHT__CTOR_OFFSET))(this);
		}
	};
}
