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

#define MOLEMOLE_TIMELINE_VISUALENVCONFIG_RECOVERVISUALENVCONFIG_OFFSET UNITYSDK_OFFSET(0x12FC7E20)
#define MOLEMOLE_TIMELINE_VISUALENVCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12FC7870)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VisualEnvConfig_TypeDefinitionIndex = 74556;

	class VisualEnvConfig : public ::System::Object
	{
	public:
		::UnityEngine::Gradient* FogHorizontalGradient; // 0x10
		::UnityEngine::Texture* cloudShadow; // 0x18
		::WeatherConfig* weatherCfg; // 0x20
		::System::Single volumetricFog_Step; // 0x28
		::System::Single expHeightfogDensity; // 0x2C
		::System::Single IBLIntensity; // 0x30
		::System::Single fogMieG; // 0x34
		::System::Int32 rainDropBatchCount; // 0x38
		::System::Single fogScattering; // 0x3C
		::UnityEngine::Vector3 moonDir; // 0x40
		::System::Single volumetricFog_Dithering; // 0x4C
		::System::Single volumetricFog_MaxIntensity; // 0x50
		::System::Single cloudShadowIntensity; // 0x54
		::System::Single fogStartDistance; // 0x58
		::System::Single FogDensity; // 0x5C
		::System::Single rippleFoamIntensity; // 0x60
		::System::Single mainLightIntensityForChara; // 0x64
		::UnityEngine::Color fogMieColor; // 0x68
		::System::Single AutoExposureCompensation; // 0x78
		::System::Single cloudOffsetY; // 0x7C
		::System::Single volumetricFog_PunctualLightMultiplier; // 0x80
		::System::Single volumetricFog_PunctualLightFadePower; // 0x84
		::System::Single volumetricFog_IntensityTowardLight; // 0x88
		::System::Single volumetricFogSize; // 0x8C
		::System::Int32 rainSplashCount; // 0x90
		::UnityEngine::Color groundColor; // 0x94
		::System::Single rainSplashRange; // 0xA4
		::System::Single cloudLightMaxIntervalTime; // 0xA8
		::System::Single cloudLightWidth; // 0xAC
		::UnityEngine::Color fogRayColor; // 0xB0
		::System::Single skyIntensity; // 0xC0
		::UnityEngine::Color GIColorOffset; // 0xC4
		::UnityEngine::Vector4 cloudShadowTileAndOffset; // 0xD4
		::UnityEngine::Vector2 cloudShadowMoveSpeed; // 0xE4
		::System::Single cloudLightStrength; // 0xEC
		::System::Boolean hasLightFogProxy; // 0xF0
		::System::Boolean VolumetricFogBlitBeforeEffect; // 0xF1
		::System::Boolean cloudGodRay; // 0xF2
		::System::Single dynamicObjectGIIntensity; // 0xF4
		::System::Single cloudLightDurationTime; // 0xF8
		::System::Single rippleSpeed; // 0xFC
		::System::Single lightFogSoftParticleFadeFactor; // 0x100
		::System::Boolean hasGlobalVolumetricFog; // 0x104
		::System::Boolean mainLightShadowTint; // 0x105
		::System::Boolean fogUseOldVersion; // 0x106
		::System::Boolean EnableAutoExposure; // 0x107
		::System::Single cloudBaseRot; // 0x108
		::System::Single volumetricFog_ExtraBlurValue; // 0x10C
		::System::Single lightFogMaxDensity; // 0x110
		::System::Single volumetricFog_Jittering; // 0x114
		::System::Single volumetricFog_DustIntensity; // 0x118
		::UnityEngine::Color volumetricFog_Color; // 0x11C
		::System::Single GIIntensity; // 0x12C
		::System::Single cloudLightMinIntervalTime; // 0x130
		::UnityEngine::Color middleColor; // 0x134
		::UnityEngine::Color skyColor; // 0x144
		::System::Single lightFogSoftParticleStartFadeDistance; // 0x154
		::System::Single EmissionIntensity; // 0x158
		::UnityEngine::Color fogExtinctColor; // 0x15C
		::System::Single FallbackConstantExposureCompensation; // 0x16C
		::System::Single rippleDensity; // 0x170
		::UnityEngine::Vector3 cloudShadowRotation; // 0x174
		::System::Single mainLightIntensity; // 0x180
		::UnityEngine::Vector2 fogHeightRange; // 0x184

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
