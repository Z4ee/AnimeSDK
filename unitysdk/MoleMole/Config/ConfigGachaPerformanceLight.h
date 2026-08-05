#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceLight_GachaPerformanceLightType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightShadows.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT_ISSHOWSHADOWPARAMS_OFFSET UNITYSDK_OFFSET(0x11470740)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT_ISSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x114706F0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x11470790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceLight_TypeDefinitionIndex = 66266;

	class ConfigGachaPerformanceLight : public ::System::Object
	{
	public:
		::UnityEngine::Color AvatarLightColor; // 0x10
		::System::Single FogIntensity; // 0x20
		::System::Single ShadowStrength; // 0x24
		::System::Single FogZOffset; // 0x28
		::System::Single ShadowNearPlane; // 0x2C
		::UnityEngine::Color LightColor; // 0x30
		::System::Single Range; // 0x40
		::UnityEngine::LightShadows ShadowType; // 0x44
		::MoleMole::Config::ConfigGachaPerformanceLight_GachaPerformanceLightType Type; // 0x48
		::System::Boolean HasVolumetricFog; // 0x4C
		::System::Single Intensity; // 0x50
		::UnityEngine::Vector3 LocalPos; // 0x54
		::UnityEngine::Vector3 LocalRot; // 0x60
		::System::Single FogRange; // 0x6C
		::UnityEngine::Vector2 InnerOuterSpotAngle; // 0x70
		::System::Single AvatarLightMultiplier; // 0x78

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
