#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceLight_GachaPerformanceLightType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightShadows.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT_ISSHOWSHADOWPARAMS_OFFSET UNITYSDK_OFFSET(0x1241CAB0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT_ISSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1241CA60)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1241CB00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceLight_TypeDefinitionIndex = 79733;

	class ConfigGachaPerformanceLight : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigGachaPerformanceLight_GachaPerformanceLightType Type; // 0x10
		::UnityEngine::LightShadows ShadowType; // 0x14
		::UnityEngine::Vector3 LocalPos; // 0x18
		::UnityEngine::Color LightColor; // 0x24
		::System::Single Intensity; // 0x34
		::UnityEngine::Color AvatarLightColor; // 0x38
		::UnityEngine::Vector2 InnerOuterSpotAngle; // 0x48
		::System::Single ShadowStrength; // 0x50
		::System::Single FogRange; // 0x54
		::System::Single FogIntensity; // 0x58
		::System::Boolean HasVolumetricFog; // 0x5C
		::System::Single ShadowNearPlane; // 0x60
		::UnityEngine::Vector3 LocalRot; // 0x64
		::System::Single Range; // 0x70
		::System::Single FogZOffset; // 0x74
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
