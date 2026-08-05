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

#define MOLEMOLE_TIMELINE_VISUALENVCONFIG_RECOVERVISUALENVCONFIG_OFFSET UNITYSDK_OFFSET(0x197994C0)
#define MOLEMOLE_TIMELINE_VISUALENVCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19798EF0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VisualEnvConfig_TypeDefinitionIndex = 84170;

	class VisualEnvConfig : public ::System::Object
	{
	public:
		::WeatherConfig* weatherCfg; // 0x10
		::UnityEngine::Texture* cloudShadow; // 0x18
		::UnityEngine::Gradient* FogHorizontalGradient; // 0x20
		::System::Single mainLightIntensity; // 0x28
		::System::Int32 rainSplashCount; // 0x2C
		::System::Single IBLIntensity; // 0x30
		::System::Single expHeightfogDensity; // 0x34
		::System::Single fogStartDistance; // 0x38
		::UnityEngine::Color volumetricFog_Color; // 0x3C
		::System::Single rainSplashRange; // 0x4C
		::System::Single mainLightIntensityForChara; // 0x50
		::UnityEngine::Color GIColorOffset; // 0x54
		::System::Single volumetricFogSize; // 0x64
		::UnityEngine::Vector4 cloudShadowTileAndOffset; // 0x68
		::System::Single AutoExposureCompensation; // 0x78
		::System::Single cloudLightWidth; // 0x7C
		::System::Single fogScattering; // 0x80
		::System::Single volumetricFog_Jittering; // 0x84
		::System::Single FogDensity; // 0x88
		::System::Single dynamicObjectGIIntensity; // 0x8C
		::UnityEngine::Color fogRayColor; // 0x90
		::System::Single volumetricFog_MaxIntensity; // 0xA0
		::System::Single volumetricFog_PunctualLightMultiplier; // 0xA4
		::System::Single cloudShadowIntensity; // 0xA8
		::System::Single cloudLightStrength; // 0xAC
		::UnityEngine::Vector2 fogHeightRange; // 0xB0
		::System::Single volumetricFog_Dithering; // 0xB8
		::UnityEngine::Color middleColor; // 0xBC
		::System::Single volumetricFog_DustIntensity; // 0xCC
		::System::Single fogMieG; // 0xD0
		::System::Single GIIntensity; // 0xD4
		::System::Single cloudOffsetY; // 0xD8
		::UnityEngine::Vector3 cloudShadowRotation; // 0xDC
		::System::Single FallbackConstantExposureCompensation; // 0xE8
		::System::Boolean fogUseOldVersion; // 0xEC
		::System::Boolean EnableAutoExposure; // 0xED
		::System::Boolean VolumetricFogBlitBeforeEffect; // 0xEE
		::System::Single lightFogSoftParticleFadeFactor; // 0xF0
		::System::Single rippleDensity; // 0xF4
		::System::Boolean cloudGodRay; // 0xF8
		::System::Boolean hasLightFogProxy; // 0xF9
		::System::Boolean mainLightShadowTint; // 0xFA
		::System::Boolean hasGlobalVolumetricFog; // 0xFB
		::System::Single lightFogMaxDensity; // 0xFC
		::System::Int32 rainDropBatchCount; // 0x100
		::System::Single skyIntensity; // 0x104
		::UnityEngine::Color fogExtinctColor; // 0x108
		::System::Single lightFogSoftParticleStartFadeDistance; // 0x118
		::System::Single cloudLightMaxIntervalTime; // 0x11C
		::System::Single cloudBaseRot; // 0x120
		::System::Single volumetricFog_Step; // 0x124
		::System::Single EmissionIntensity; // 0x128
		::System::Single cloudLightDurationTime; // 0x12C
		::System::Single rippleFoamIntensity; // 0x130
		::UnityEngine::Color groundColor; // 0x134
		::System::Single rippleSpeed; // 0x144
		::System::Single volumetricFog_IntensityTowardLight; // 0x148
		::System::Single cloudLightMinIntervalTime; // 0x14C
		::UnityEngine::Vector2 cloudShadowMoveSpeed; // 0x150
		::UnityEngine::Vector3 moonDir; // 0x158
		::System::Single volumetricFog_PunctualLightFadePower; // 0x164
		::System::Single volumetricFog_ExtraBlurValue; // 0x168
		::UnityEngine::Color skyColor; // 0x16C
		::UnityEngine::Color fogMieColor; // 0x17C

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
