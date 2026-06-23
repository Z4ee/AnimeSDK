#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowResolution.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SimulatingPlatform.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETADDITIONALLIGHTSDIFFUSEONLYDISTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x158A46E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADE0TONEXTBLENDINTENSITY_OFFSET UNITYSDK_OFFSET(0x158A3C70)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADE1TONEXTBLENDINTENSITY_OFFSET UNITYSDK_OFFSET(0x158A3CF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADE2TONEXTBLENDINTENSITY_OFFSET UNITYSDK_OFFSET(0x158A3D70)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADE3TONEXTBLENDINTENSITY_OFFSET UNITYSDK_OFFSET(0x158A3DF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADESHADOWSPLIT0_OFFSET UNITYSDK_OFFSET(0x158A41F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADESHADOWSPLIT1_OFFSET UNITYSDK_OFFSET(0x158A4270)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADESHADOWSPLIT2_OFFSET UNITYSDK_OFFSET(0x158A42F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADESHADOWSPLITCOUNT_OFFSET UNITYSDK_OFFSET(0x158A4170)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETDISABLELOCALLIGHTSHADOWMAPCACHED_OFFSET UNITYSDK_OFFSET(0x158A47E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETDISABLELOCALLIGHTSHADOWONPLATFORM_OFFSET UNITYSDK_OFFSET(0x158A4860)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETDISABLEMAINLIGHTSHADOW_OFFSET UNITYSDK_OFFSET(0x158A3BF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETDISABLESHADOWCASTERHIZ_OFFSET UNITYSDK_OFFSET(0x158A4070)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETDISABLESHADOWMAPCACHE_OFFSET UNITYSDK_OFFSET(0x158A3FF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETENABLECUSTOMMAXLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x158A4560)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETENABLELOCALLIGHTGROUNDDISCARD_OFFSET UNITYSDK_OFFSET(0x158A4950)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETISCONTACTSHADOWON_OFFSET UNITYSDK_OFFSET(0x158A4370)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETLOCALLIGHTDISCARDGROUND1POSITION_OFFSET UNITYSDK_OFFSET(0x158A49D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETLOCALLIGHTLODBIASMULTIPLY_OFFSET UNITYSDK_OFFSET(0x158A4760)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETLOCKMAXSHADOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x158A3F70)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETLOCKSPLITBYMETRIC_OFFSET UNITYSDK_OFFSET(0x158A40F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETMAXLOCALLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x158A45E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETMAXSHADOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x158A3E70)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETMICROSHADOWINTENSITY_OFFSET UNITYSDK_OFFSET(0x158A4A50)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETOTHERLIGHTSHADOWRESOLUTION_OFFSET UNITYSDK_OFFSET(0x158A4470)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETOUTOFRANGELIGHTSTRENGTH_OFFSET UNITYSDK_OFFSET(0x158A3EF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETOVERRIDEADDITIONALLIGHTSDIFFUSEONLYDISTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x158A4660)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETOVERRIDEPUNCTUALLIGHTSHADOWRESOLUTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x158A43F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETPUNCTUALLIGHTSHADOWSTRENGTH_OFFSET UNITYSDK_OFFSET(0x158A44E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETSHADOWBLURRADIUS_OFFSET UNITYSDK_OFFSET(0x158A3B70)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETUSECONSTANTLODBIASVALUE_OFFSET UNITYSDK_OFFSET(0x158A48D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x158A4AD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityLightingEffect_TypeDefinitionIndex = 44748;

	class ConfigEntityLightingEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectBool* enableLocalLightGroundDiscard; // 0x40
		::MoleMole::Config::ScreenEffectFloat* microShadowIntensity; // 0x48
		::MoleMole::Config::ScreenEffectBool* enableCustomMaxLightCount; // 0x50
		::MoleMole::Config::ScreenEffectFloat* maxShadowDistance; // 0x58
		::MoleMole::Config::ScreenEffectBool* disableShadowCasterHiz; // 0x60
		::MoleMole::Config::ScreenEffectBool* disableMainLightShadow; // 0x68
		::MoleMole::Config::ScreenEffectFloat* cascade0ToNextBlendIntensity; // 0x70
		::MoleMole::Config::ScreenEffectBool* isContactShadowOn; // 0x78
		::MoleMole::Config::ScreenEffectFloat* additionalLightsDiffuseOnlyDistThreshold; // 0x80
		::MoleMole::Config::ScreenEffectFloat* outOfRangeLightStrength; // 0x88
		::MoleMole::Config::ScreenEffectFloat* cascadeShadowSplit2; // 0x90
		::MoleMole::Config::ScreenEffectFloat* cascade2ToNextBlendIntensity; // 0x98
		::MoleMole::Config::ScreenEffectBool* lockMaxShadowDistance; // 0xA0
		::MoleMole::Config::ScreenEffectFloat* localLightDiscardGround1Position; // 0xA8
		::MoleMole::Config::ScreenEffectFloat* punctualLightShadowStrength; // 0xB0
		::MoleMole::Config::ScreenEffectBool* disableLocalLightShadowMapCached; // 0xB8
		::MoleMole::Config::ScreenEffectFloat* localLightLodBiasMultiply; // 0xC0
		::MoleMole::Config::ScreenEffectFloat* cascadeShadowSplit0; // 0xC8
		::MoleMole::Config::ScreenEffectBool* overridePunctualLightShadowResolutionConfig; // 0xD0
		::MoleMole::Config::ScreenEffectFloat* cascade1ToNextBlendIntensity; // 0xD8
		::MoleMole::Config::ScreenEffectBool* overrideAdditionalLightsDiffuseOnlyDistThreshold; // 0xE0
		::MoleMole::Config::ScreenEffectFloat* cascadeShadowSplitCount; // 0xE8
		::MoleMole::Config::ScreenEffectBool* useConstantLodBiasValue; // 0xF0
		::MoleMole::Config::ScreenEffectBool* lockSplitByMetric; // 0xF8
		::MoleMole::Config::ScreenEffectFloat* cascadeShadowSplit1; // 0x100
		::MoleMole::Config::ScreenEffectFloat* cascade3ToNextBlendIntensity; // 0x108
		::MoleMole::Config::ScreenEffectFloat* maxLocalLightCount; // 0x110
		::MoleMole::Config::ScreenEffectFloat* shadowBlurRadius; // 0x118
		::MoleMole::Config::ScreenEffectBool* disableShadowMapCache; // 0x120
		::MoleMole::Config::ScreenEffectFieldHandleType punctualLightShadowStrengthHandleType; // 0x128
		::MoleMole::Config::ScreenEffectFieldHandleType enableLocalLightGroundDiscardHandleType; // 0x12C
		::MoleMole::Config::ScreenEffectFieldHandleType localLightLodBiasMultiplyHandleType; // 0x130
		::MoleMole::Config::ScreenEffectFieldHandleType disableMainLightShadowHandleType; // 0x134
		::MoleMole::Config::ScreenEffectFieldHandleType cascade2ToNextBlendIntensityHandleType; // 0x138
		::MoleMole::Config::ScreenEffectFieldHandleType disableLocalLightShadowOnPlatformHandleType; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType disableLocalLightShadowMapCachedHandleType; // 0x140
		::MoleMole::Config::ScreenEffectFieldHandleType outOfRangeLightStrengthHandleType; // 0x144
		::MoleMole::Config::ScreenEffectFieldHandleType microShadowIntensityHandleType; // 0x148
		::MoleMole::Config::ScreenEffectFieldHandleType overrideAdditionalLightsDiffuseOnlyDistThresholdHandleType; // 0x14C
		::MoleMole::Config::ScreenEffectFieldHandleType cascadeShadowSplit1HandleType; // 0x150
		::MoleMole::Config::ScreenEffectFieldHandleType overridePunctualLightShadowResolutionConfigHandleType; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType cascade1ToNextBlendIntensityHandleType; // 0x158
		::MoleMole::Config::ScreenEffectFieldHandleType maxLocalLightCountHandleType; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType cascade0ToNextBlendIntensityHandleType; // 0x160
		::UnityEngine::Rendering::Universal::SimulatingPlatform disableLocalLightShadowOnPlatform; // 0x164
		::MoleMole::Config::ScreenEffectFieldHandleType lockMaxShadowDistanceHandleType; // 0x168
		::MoleMole::Config::ScreenEffectFieldHandleType cascadeShadowSplit0HandleType; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType otherLightShadowResolutionHandleType; // 0x170
		::MoleMole::Config::ScreenEffectFieldHandleType enableCustomMaxLightCountHandleType; // 0x174
		::MoleMole::Config::ScreenEffectFieldHandleType disableShadowMapCacheHandleType; // 0x178
		::MoleMole::Config::ScreenEffectFieldHandleType cascade3ToNextBlendIntensityHandleType; // 0x17C
		::MoleMole::Config::ScreenEffectFieldHandleType cascadeShadowSplit2HandleType; // 0x180
		::MoleMole::Config::ScreenEffectFieldHandleType cascadeShadowSplitCountHandleType; // 0x184
		::MoleMole::Config::ScreenEffectFieldHandleType maxShadowDistanceHandleType; // 0x188
		::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution otherLightShadowResolution; // 0x18C
		::MoleMole::Config::ScreenEffectFieldHandleType lockSplitByMetricHandleType; // 0x190
		::MoleMole::Config::ScreenEffectFieldHandleType isContactShadowOnHandleType; // 0x194
		::MoleMole::Config::ScreenEffectFieldHandleType useConstantLodBiasValueHandleType; // 0x198
		::MoleMole::Config::ScreenEffectFieldHandleType disableShadowCasterHizHandleType; // 0x19C
		::MoleMole::Config::ScreenEffectFieldHandleType shadowBlurRadiusHandleType; // 0x1A0
		::MoleMole::Config::ScreenEffectFieldHandleType localLightDiscardGround1PositionHandleType; // 0x1A4
		::MoleMole::Config::ScreenEffectFieldHandleType additionalLightsDiffuseOnlyDistThresholdHandleType; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT__CTOR_OFFSET))(this);
		}

		::System::Single GetShadowBlurRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETSHADOWBLURRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetDisableMainLightShadow(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETDISABLEMAINLIGHTSHADOW_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCascade0ToNextBlendIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADE0TONEXTBLENDINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCascade1ToNextBlendIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADE1TONEXTBLENDINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCascade2ToNextBlendIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADE2TONEXTBLENDINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCascade3ToNextBlendIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADE3TONEXTBLENDINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMaxShadowDistance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETMAXSHADOWDISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetOutOfRangeLightStrength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETOUTOFRANGELIGHTSTRENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLockMaxShadowDistance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETLOCKMAXSHADOWDISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetDisableShadowMapCache(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETDISABLESHADOWMAPCACHE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetDisableShadowCasterHiz(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETDISABLESHADOWCASTERHIZ_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLockSplitByMetric(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETLOCKSPLITBYMETRIC_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetCascadeShadowSplitCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADESHADOWSPLITCOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCascadeShadowSplit0(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADESHADOWSPLIT0_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCascadeShadowSplit1(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADESHADOWSPLIT1_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCascadeShadowSplit2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETCASCADESHADOWSPLIT2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetIsContactShadowOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETISCONTACTSHADOWON_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOverridePunctualLightShadowResolutionConfig(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETOVERRIDEPUNCTUALLIGHTSHADOWRESOLUTIONCONFIG_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution GetOtherLightShadowResolution(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETOTHERLIGHTSHADOWRESOLUTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPunctualLightShadowStrength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETPUNCTUALLIGHTSHADOWSTRENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnableCustomMaxLightCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETENABLECUSTOMMAXLIGHTCOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetMaxLocalLightCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETMAXLOCALLIGHTCOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOverrideAdditionalLightsDiffuseOnlyDistThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETOVERRIDEADDITIONALLIGHTSDIFFUSEONLYDISTTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetAdditionalLightsDiffuseOnlyDistThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETADDITIONALLIGHTSDIFFUSEONLYDISTTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLocalLightLodBiasMultiply(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETLOCALLIGHTLODBIASMULTIPLY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetDisableLocalLightShadowMapCached(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETDISABLELOCALLIGHTSHADOWMAPCACHED_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::SimulatingPlatform GetDisableLocalLightShadowOnPlatform(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::SimulatingPlatform(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETDISABLELOCALLIGHTSHADOWONPLATFORM_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseConstantLodBiasValue(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETUSECONSTANTLODBIASVALUE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnableLocalLightGroundDiscard(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETENABLELOCALLIGHTGROUNDDISCARD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLocalLightDiscardGround1Position(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETLOCALLIGHTDISCARDGROUND1POSITION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMicroShadowIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECT_GETMICROSHADOWINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
