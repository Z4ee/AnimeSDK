#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETBILATERALUPSAMPLE_OFFSET UNITYSDK_OFFSET(0x11703E20)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETBLURSHARPNESS_OFFSET UNITYSDK_OFFSET(0x11703BA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETDEBUGMODE_OFFSET UNITYSDK_OFFSET(0x11703FA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETDENOISERRADIUS_OFFSET UNITYSDK_OFFSET(0x11703D20)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETDENOISE_OFFSET UNITYSDK_OFFSET(0x11703CA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETDIRECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x11703F20)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETDIRECTLIGHTINGSTRENGTH_OFFSET UNITYSDK_OFFSET(0x11703920)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETFULLRESOLUTION_OFFSET UNITYSDK_OFFSET(0x11703A20)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETGHOSTINGREDUCTION_OFFSET UNITYSDK_OFFSET(0x11703B20)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x117038A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETMAXIMUMRADIUSINPIXELS_OFFSET UNITYSDK_OFFSET(0x11703EA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x117039A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x11703C20)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETSTEPCOUNT_OFFSET UNITYSDK_OFFSET(0x11703DA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETTEMPORALACCUMULATION_OFFSET UNITYSDK_OFFSET(0x11703AA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11704020)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityScreenSpaceAmbientOcclusionEffect_TypeDefinitionIndex = 50236;

	class ConfigEntityScreenSpaceAmbientOcclusionEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* MaximumRadiusInPixels; // 0x40
		::MoleMole::Config::ScreenEffectBool* DebugMode; // 0x48
		::MoleMole::Config::ScreenEffectBool* TemporalAccumulation; // 0x50
		::MoleMole::Config::ScreenEffectBool* FullResolution; // 0x58
		::MoleMole::Config::ScreenEffectFloat* StepCount; // 0x60
		::MoleMole::Config::ScreenEffectFloat* DirectionCount; // 0x68
		::MoleMole::Config::ScreenEffectFloat* GhostingReduction; // 0x70
		::MoleMole::Config::ScreenEffectFloat* SampleCount; // 0x78
		::MoleMole::Config::ScreenEffectFloat* DenoiserRadius; // 0x80
		::MoleMole::Config::ScreenEffectFloat* DirectLightingStrength; // 0x88
		::MoleMole::Config::ScreenEffectFloat* Radius; // 0x90
		::MoleMole::Config::ScreenEffectBool* BilateralUpsample; // 0x98
		::MoleMole::Config::ScreenEffectBool* Denoise; // 0xA0
		::MoleMole::Config::ScreenEffectFloat* Intensity; // 0xA8
		::MoleMole::Config::ScreenEffectFloat* BlurSharpness; // 0xB0
		::MoleMole::Config::ScreenEffectFieldHandleType IntensityHandleType; // 0xB8
		::MoleMole::Config::ScreenEffectFieldHandleType BilateralUpsampleHandleType; // 0xBC
		::MoleMole::Config::ScreenEffectFieldHandleType DenoiseHandleType; // 0xC0
		::MoleMole::Config::ScreenEffectFieldHandleType DebugModeHandleType; // 0xC4
		::MoleMole::Config::ScreenEffectFieldHandleType FullResolutionHandleType; // 0xC8
		::MoleMole::Config::ScreenEffectFieldHandleType BlurSharpnessHandleType; // 0xCC
		::MoleMole::Config::ScreenEffectFieldHandleType GhostingReductionHandleType; // 0xD0
		::MoleMole::Config::ScreenEffectFieldHandleType StepCountHandleType; // 0xD4
		::MoleMole::Config::ScreenEffectFieldHandleType SampleCountHandleType; // 0xD8
		::MoleMole::Config::ScreenEffectFieldHandleType RadiusHandleType; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType DirectionCountHandleType; // 0xE0
		::MoleMole::Config::ScreenEffectFieldHandleType DirectLightingStrengthHandleType; // 0xE4
		::MoleMole::Config::ScreenEffectFieldHandleType TemporalAccumulationHandleType; // 0xE8
		::MoleMole::Config::ScreenEffectFieldHandleType DenoiserRadiusHandleType; // 0xEC
		::MoleMole::Config::ScreenEffectFieldHandleType MaximumRadiusInPixelsHandleType; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT__CTOR_OFFSET))(this);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDirectLightingStrength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETDIRECTLIGHTINGSTRENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetFullResolution(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETFULLRESOLUTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetTemporalAccumulation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETTEMPORALACCUMULATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGhostingReduction(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETGHOSTINGREDUCTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBlurSharpness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETBLURSHARPNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetSampleCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETSAMPLECOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetDenoise(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETDENOISE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDenoiserRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETDENOISERRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetStepCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETSTEPCOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetBilateralUpsample(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETBILATERALUPSAMPLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetMaximumRadiusInPixels(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETMAXIMUMRADIUSINPIXELS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetDirectionCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETDIRECTIONCOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetDebugMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEAMBIENTOCCLUSIONEFFECT_GETDEBUGMODE_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
