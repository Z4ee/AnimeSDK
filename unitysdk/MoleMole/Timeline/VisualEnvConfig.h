#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_TIMELINE_VISUALENVCONFIG_RECOVERVISUALENVCONFIG_OFFSET UNITYSDK_OFFSET(0x141BDCE0)
#define MOLEMOLE_TIMELINE_VISUALENVCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x141BD740)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VisualEnvConfig_TypeDefinitionIndex = 77168;

	class VisualEnvConfig : public ::System::Object
	{
	public:
		::WeatherConfig* weatherCfg; // 0x10
		::UnityEngine::Gradient* FogHorizontalGradient; // 0x18
		::UnityEngine::Texture* cloudShadow; // 0x20
		::UnityEngine::Color groundColor; // 0x28
		::System::Single IBLIntensity; // 0x38
		::System::Single expHeightfogDensity; // 0x3C
		::System::Single volumetricFog_IntensityTowardLight; // 0x40
		::System::Single FogDensity; // 0x44
		::System::Single volumetricFog_Step; // 0x48
		::System::Single volumetricFog_ExtraBlurValue; // 0x4C
		::System::Single lightFogMaxDensity; // 0x50
		::System::Boolean hasLightFogProxy; // 0x54
		::System::Boolean cloudGodRay; // 0x55
		::System::Boolean EnableAutoExposure; // 0x56
		::System::Single GIIntensity; // 0x58
		::System::Single mainLightIntensity; // 0x5C
		::UnityEngine::Color fogExtinctColor; // 0x60
		::System::Single mainLightIntensityForChara; // 0x70
		::System::Single cloudLightMaxIntervalTime; // 0x74
		::UnityEngine::Vector3 moonDir; // 0x78
		::System::Single cloudBaseRot; // 0x84
		::UnityEngine::Color fogRayColor; // 0x88
		::UnityEngine::Color fogMieColor; // 0x98
		::UnityEngine::Vector3 cloudShadowRotation; // 0xA8
		::System::Single cloudLightWidth; // 0xB4
		::System::Single EmissionIntensity; // 0xB8
		::System::Single rippleDensity; // 0xBC
		::System::Single rainSplashRange; // 0xC0
		::UnityEngine::Color GIColorOffset; // 0xC4
		::System::Single volumetricFog_PunctualLightMultiplier; // 0xD4
		::UnityEngine::Vector2 cloudShadowMoveSpeed; // 0xD8
		::System::Single volumetricFog_PunctualLightFadePower; // 0xE0
		::System::Single cloudShadowIntensity; // 0xE4
		::System::Single volumetricFog_DustIntensity; // 0xE8
		::System::Single fogStartDistance; // 0xEC
		::System::Single cloudLightMinIntervalTime; // 0xF0
		::System::Single lightFogSoftParticleFadeFactor; // 0xF4
		::System::Single skyIntensity; // 0xF8
		::System::Single cloudLightStrength; // 0xFC
		::System::Single cloudLightDurationTime; // 0x100
		::System::Single cloudOffsetY; // 0x104
		::UnityEngine::Color middleColor; // 0x108
		::System::Single rippleFoamIntensity; // 0x118
		::System::Single volumetricFogSize; // 0x11C
		::System::Single fogScattering; // 0x120
		::UnityEngine::Color volumetricFog_Color; // 0x124
		::System::Single AutoExposureCompensation; // 0x134
		::System::Single FallbackConstantExposureCompensation; // 0x138
		::UnityEngine::Color skyColor; // 0x13C
		::System::Single volumetricFog_Dithering; // 0x14C
		::System::Single volumetricFog_MaxIntensity; // 0x150
		::System::Single volumetricFog_Jittering; // 0x154
		::System::Single rippleSpeed; // 0x158
		::System::Single fogMieG; // 0x15C
		::UnityEngine::Vector4 cloudShadowTileAndOffset; // 0x160
		::UnityEngine::Vector2 fogHeightRange; // 0x170
		::System::Single lightFogSoftParticleStartFadeDistance; // 0x178
		::System::Int32 rainSplashCount; // 0x17C
		::System::Single dynamicObjectGIIntensity; // 0x180
		::System::Int32 rainDropBatchCount; // 0x184
		::System::Boolean mainLightShadowTint; // 0x188
		::System::Boolean hasGlobalVolumetricFog; // 0x189
		::System::Boolean VolumetricFogBlitBeforeEffect; // 0x18A
		::System::Boolean fogUseOldVersion; // 0x18B

		::System::Void _ctor(::WeatherConfig* weatherConfig)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCONFIG__CTOR_OFFSET))(this, weatherConfig);
		}

		::System::Void RecoverVisualEnvConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCONFIG_RECOVERVISUALENVCONFIG_OFFSET))(this);
		}
	};
}
