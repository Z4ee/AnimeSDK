#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SampleCountLevel.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBIAS_OFFSET UNITYSDK_OFFSET(0x16A87AE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURENABLED_OFFSET UNITYSDK_OFFSET(0x16A87CE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURPASSES_OFFSET UNITYSDK_OFFSET(0x16A87DE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURRADIUS_OFFSET UNITYSDK_OFFSET(0x16A87D60)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURSHARPNESS_OFFSET UNITYSDK_OFFSET(0x16A87E60)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETCACHEAWARE_OFFSET UNITYSDK_OFFSET(0x16A87C60)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETDOWNSAMPLE_OFFSET UNITYSDK_OFFSET(0x16A87BE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETINTENSITYMULTIONMOBILE_OFFSET UNITYSDK_OFFSET(0x16A876D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x16A878C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETLOWSSAOQUALITY_OFFSET UNITYSDK_OFFSET(0x16A877D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETPOWEREXPONENT_OFFSET UNITYSDK_OFFSET(0x16A87A60)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETRADIUSMULTIONMOBILE_OFFSET UNITYSDK_OFFSET(0x16A87750)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x16A879E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x16A87850)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETTHICKNESS_OFFSET UNITYSDK_OFFSET(0x16A87B60)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETTINT_OFFSET UNITYSDK_OFFSET(0x16A87940)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A87EE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAmplifyOcclusionEffect_TypeDefinitionIndex = 57959;

	class ConfigEntityAmplifyOcclusionEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* radiusMultiOnMobile; // 0x40
		::MoleMole::Config::ScreenEffectFloat* blurSharpness; // 0x48
		::MoleMole::Config::ScreenEffectFloat* blurRadius; // 0x50
		::MoleMole::Config::ScreenEffectFloat* thickness; // 0x58
		::MoleMole::Config::ScreenEffectFloat* radius; // 0x60
		::MoleMole::Config::ScreenEffectBool* blurEnabled; // 0x68
		::MoleMole::Config::ScreenEffectBool* cacheAware; // 0x70
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x78
		::MoleMole::Config::ScreenEffectFloat* intensityMultiOnMobile; // 0x80
		::MoleMole::Config::ScreenEffectBool* downSample; // 0x88
		::MoleMole::Config::ScreenEffectColor* tint; // 0x90
		::MoleMole::Config::ScreenEffectFloat* bias; // 0x98
		::MoleMole::Config::ScreenEffectFloat* powerExponent; // 0xA0
		::MoleMole::Config::ScreenEffectFloat* blurPasses; // 0xA8
		::MoleMole::Config::ScreenEffectBool* lowSSAOQuality; // 0xB0
		::MoleMole::Config::ScreenEffectFieldHandleType lowSSAOQualityHandleType; // 0xB8
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0xBC
		::MoleMole::Config::ScreenEffectFieldHandleType intensityMultiOnMobileHandleType; // 0xC0
		::MoleMole::Config::ScreenEffectFieldHandleType thicknessHandleType; // 0xC4
		::MoleMole::Config::ScreenEffectFieldHandleType cacheAwareHandleType; // 0xC8
		::MoleMole::Config::ScreenEffectFieldHandleType downSampleHandleType; // 0xCC
		::MoleMole::Config::ScreenEffectFieldHandleType sampleCountHandleType; // 0xD0
		::UnityEngine::NAPRenderPipeline0::SampleCountLevel sampleCount; // 0xD4
		::MoleMole::Config::ScreenEffectFieldHandleType blurSharpnessHandleType; // 0xD8
		::MoleMole::Config::ScreenEffectFieldHandleType radiusHandleType; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType blurEnabledHandleType; // 0xE0
		::MoleMole::Config::ScreenEffectFieldHandleType biasHandleType; // 0xE4
		::MoleMole::Config::ScreenEffectFieldHandleType blurPassesHandleType; // 0xE8
		::MoleMole::Config::ScreenEffectFieldHandleType blurRadiusHandleType; // 0xEC
		::MoleMole::Config::ScreenEffectFieldHandleType powerExponentHandleType; // 0xF0
		::MoleMole::Config::ScreenEffectFieldHandleType tintHandleType; // 0xF4
		::MoleMole::Config::ScreenEffectFieldHandleType radiusMultiOnMobileHandleType; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT__CTOR_OFFSET))(this);
		}

		::System::Single GetIntensityMultiOnMobile(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETINTENSITYMULTIONMOBILE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRadiusMultiOnMobile(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETRADIUSMULTIONMOBILE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLowSSAOQuality(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETLOWSSAOQUALITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::SampleCountLevel GetSampleCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::SampleCountLevel(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETSAMPLECOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPowerExponent(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETPOWEREXPONENT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBias(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBIAS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetThickness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETTHICKNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetDownSample(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETDOWNSAMPLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetCacheAware(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETCACHEAWARE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetBlurEnabled(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURENABLED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetBlurRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetBlurPasses(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURPASSES_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBlurSharpness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURSHARPNESS_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
