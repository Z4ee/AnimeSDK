#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceLight_GachaPerformanceLightType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightShadows.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT_ISSHOWSHADOWPARAMS_OFFSET UNITYSDK_OFFSET(0x1AA50950)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT_ISSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1AA50900)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA509A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceLight_TypeDefinitionIndex = 61280;

	class ConfigGachaPerformanceLight : public ::System::Object
	{
	public:
		::System::Single FogRange; // 0x10
		::MoleMole::Config::ConfigGachaPerformanceLight_GachaPerformanceLightType Type; // 0x14
		::UnityEngine::Vector3 LocalRot; // 0x18
		::System::Single Intensity; // 0x24
		::UnityEngine::Vector3 LocalPos; // 0x28
		::System::Boolean HasVolumetricFog; // 0x34
		::System::Single AvatarLightMultiplier; // 0x38
		::System::Single FogIntensity; // 0x3C
		::UnityEngine::LightShadows ShadowType; // 0x40
		::System::Single ShadowNearPlane; // 0x44
		::UnityEngine::Color LightColor; // 0x48
		::UnityEngine::Vector2 InnerOuterSpotAngle; // 0x58
		::System::Single FogZOffset; // 0x60
		::System::Single ShadowStrength; // 0x64
		::System::Single Range; // 0x68
		::UnityEngine::Color AvatarLightColor; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsSpotLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT_ISSPOTLIGHT_OFFSET))(this);
		}

		::System::Boolean IsShowShadowParams()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT_ISSHOWSHADOWPARAMS_OFFSET))(this);
		}
	};
}
