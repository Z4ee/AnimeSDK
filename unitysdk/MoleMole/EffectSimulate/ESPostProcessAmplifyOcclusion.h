#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SampleCountLevel.h"

namespace MoleMole::Config { class ConfigEntityAmplifyOcclusionEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class AmplifyOcclusion; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x18AF1500)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x18AF3260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_46737F85CDB5E497_1_OFFSET UNITYSDK_OFFSET(0x18AFBAF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_46737F85CDB5E497_OFFSET UNITYSDK_OFFSET(0x18AFA350)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x18AF1920)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_522F2897D3370F6B_OFFSET UNITYSDK_OFFSET(0x18AF3D30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18AF1910)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_BEB6D3AE6B2F04A5_OFFSET UNITYSDK_OFFSET(0x18AF87F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x18AF1CE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION__CTOR_OFFSET UNITYSDK_OFFSET(0x18AFD290)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessAmplifyOcclusion_TypeDefinitionIndex = 85921;

	class ESPostProcessAmplifyOcclusion : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::AmplifyOcclusion*>
	{
	public:
		::MoleMole::Config::ConfigEntityAmplifyOcclusionEffects* m_stAsset; // 0xB0
		::System::Single _VolDefault_intensityMultiOnMobile; // 0xB8
		::System::Single _VolDefault_radiusMultiOnMobile; // 0xBC
		::System::Boolean _VolDefault_lowSSAOQuality; // 0xC0
		::UnityEngine::NAPRenderPipeline0::SampleCountLevel _VolDefault_sampleCount; // 0xC4
		::System::Single _VolDefault_intensity; // 0xC8
		::UnityEngine::Color _VolDefault_tint; // 0xCC
		::System::Single _VolDefault_radius; // 0xDC
		::System::Single _VolDefault_powerExponent; // 0xE0
		::System::Single _VolDefault_bias; // 0xE4
		::System::Single _VolDefault_thickness; // 0xE8
		::System::Boolean _VolDefault_downSample; // 0xEC
		::System::Boolean _VolDefault_cacheAware; // 0xED
		::System::Boolean _VolDefault_blurEnabled; // 0xEE
		::System::Int32 _VolDefault_blurRadius; // 0xF0
		::System::Int32 _VolDefault_blurPasses; // 0xF4
		::System::Single _VolDefault_blurSharpness; // 0xF8
		::System::Boolean _VolPreVal_intensityMultiOnMobile_overrideState; // 0xFC
		::System::Single _VolPreVal_intensityMultiOnMobile; // 0x100
		::System::Boolean _VolPreVal_radiusMultiOnMobile_overrideState; // 0x104
		::System::Single _VolPreVal_radiusMultiOnMobile; // 0x108
		::System::Boolean _VolPreVal_lowSSAOQuality_overrideState; // 0x10C
		::System::Boolean _VolPreVal_lowSSAOQuality; // 0x10D
		::System::Boolean _VolPreVal_sampleCount_overrideState; // 0x10E
		::UnityEngine::NAPRenderPipeline0::SampleCountLevel _VolPreVal_sampleCount; // 0x110
		::System::Boolean _VolPreVal_intensity_overrideState; // 0x114
		::System::Single _VolPreVal_intensity; // 0x118
		::System::Boolean _VolPreVal_tint_overrideState; // 0x11C
		::UnityEngine::Color _VolPreVal_tint; // 0x120
		::System::Boolean _VolPreVal_radius_overrideState; // 0x130
		::System::Single _VolPreVal_radius; // 0x134
		::System::Boolean _VolPreVal_powerExponent_overrideState; // 0x138
		::System::Single _VolPreVal_powerExponent; // 0x13C
		::System::Boolean _VolPreVal_bias_overrideState; // 0x140
		::System::Single _VolPreVal_bias; // 0x144
		::System::Boolean _VolPreVal_thickness_overrideState; // 0x148
		::System::Single _VolPreVal_thickness; // 0x14C
		::System::Boolean _VolPreVal_downSample_overrideState; // 0x150
		::System::Boolean _VolPreVal_downSample; // 0x151
		::System::Boolean _VolPreVal_cacheAware_overrideState; // 0x152
		::System::Boolean _VolPreVal_cacheAware; // 0x153
		::System::Boolean _VolPreVal_blurEnabled_overrideState; // 0x154
		::System::Boolean _VolPreVal_blurEnabled; // 0x155
		::System::Boolean _VolPreVal_blurRadius_overrideState; // 0x156
		::System::Int32 _VolPreVal_blurRadius; // 0x158
		::System::Boolean _VolPreVal_blurPasses_overrideState; // 0x15C
		::System::Int32 _VolPreVal_blurPasses; // 0x160
		::System::Boolean _VolPreVal_blurSharpness_overrideState; // 0x164
		::System::Single _VolPreVal_blurSharpness; // 0x168
		::System::Single _TimelineCurveFirstVal_intensityMultiOnMobile; // 0x16C
		::System::Single _TimelineCurveLastVal_intensityMultiOnMobile; // 0x170
		::System::Single _TimelineCurveFirstVal_radiusMultiOnMobile; // 0x174
		::System::Single _TimelineCurveLastVal_radiusMultiOnMobile; // 0x178
		::System::Boolean _TimelineCurveFirstVal_lowSSAOQuality; // 0x17C
		::System::Boolean _TimelineCurveLastVal_lowSSAOQuality; // 0x17D
		::System::Single _TimelineCurveFirstVal_intensity; // 0x180
		::System::Single _TimelineCurveLastVal_intensity; // 0x184
		::UnityEngine::Color _TimelineCurveFirstVal_tint; // 0x188
		::UnityEngine::Color _TimelineCurveLastVal_tint; // 0x198
		::System::Single _TimelineCurveFirstVal_radius; // 0x1A8
		::System::Single _TimelineCurveLastVal_radius; // 0x1AC
		::System::Single _TimelineCurveFirstVal_powerExponent; // 0x1B0
		::System::Single _TimelineCurveLastVal_powerExponent; // 0x1B4
		::System::Single _TimelineCurveFirstVal_bias; // 0x1B8
		::System::Single _TimelineCurveLastVal_bias; // 0x1BC
		::System::Single _TimelineCurveFirstVal_thickness; // 0x1C0
		::System::Single _TimelineCurveLastVal_thickness; // 0x1C4
		::System::Boolean _TimelineCurveFirstVal_downSample; // 0x1C8
		::System::Boolean _TimelineCurveLastVal_downSample; // 0x1C9
		::System::Boolean _TimelineCurveFirstVal_cacheAware; // 0x1CA
		::System::Boolean _TimelineCurveLastVal_cacheAware; // 0x1CB
		::System::Boolean _TimelineCurveFirstVal_blurEnabled; // 0x1CC
		::System::Boolean _TimelineCurveLastVal_blurEnabled; // 0x1CD
		::System::Int32 _TimelineCurveFirstVal_blurRadius; // 0x1D0
		::System::Int32 _TimelineCurveLastVal_blurRadius; // 0x1D4
		::System::Int32 _TimelineCurveFirstVal_blurPasses; // 0x1D8
		::System::Int32 _TimelineCurveLastVal_blurPasses; // 0x1DC
		::System::Single _TimelineCurveFirstVal_blurSharpness; // 0x1E0
		::System::Single _TimelineCurveLastVal_blurSharpness; // 0x1E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensityMultiOnMobile_FieldHandleType; // 0x1E8
		::System::Boolean ESPP_intensityMultiOnMobile_UseIt; // 0x1EC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensityMultiOnMobile; // 0x1F0
		::System::Boolean ESPP_intensityMultiOnMobile_EnableFade; // 0x1F8
		::System::Boolean ESPP_intensityMultiOnMobile_EnableOverrideDefaultValue; // 0x1F9
		::System::Single ESPP_intensityMultiOnMobile_OverrideDefaultValue; // 0x1FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_radiusMultiOnMobile_FieldHandleType; // 0x200
		::System::Boolean ESPP_radiusMultiOnMobile_UseIt; // 0x204
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_radiusMultiOnMobile; // 0x208
		::System::Boolean ESPP_radiusMultiOnMobile_EnableFade; // 0x210
		::System::Boolean ESPP_radiusMultiOnMobile_EnableOverrideDefaultValue; // 0x211
		::System::Single ESPP_radiusMultiOnMobile_OverrideDefaultValue; // 0x214
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lowSSAOQuality_FieldHandleType; // 0x218
		::System::Boolean ESPP_lowSSAOQuality_UseIt; // 0x21C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lowSSAOQuality; // 0x220
		::System::Boolean ESPP_lowSSAOQuality_EnableFade; // 0x228
		::System::Boolean ESPP_lowSSAOQuality_EnableOverrideDefaultValue; // 0x229
		::System::Boolean ESPP_lowSSAOQuality_OverrideDefaultValue; // 0x22A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleCount_FieldHandleType; // 0x22C
		::UnityEngine::NAPRenderPipeline0::SampleCountLevel ESPP_sampleCount; // 0x230
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x234
		::System::Boolean ESPP_intensity_UseIt; // 0x238
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x240
		::System::Boolean ESPP_intensity_EnableFade; // 0x248
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x249
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x24C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_tint_FieldHandleType; // 0x250
		::System::Boolean ESPP_tint_UseIt; // 0x254
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_tint; // 0x258
		::System::Boolean ESPP_tint_EnableFade; // 0x260
		::System::Boolean ESPP_tint_EnableOverrideDefaultValue; // 0x261
		::UnityEngine::Color ESPP_tint_OverrideDefaultValue; // 0x264
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_radius_FieldHandleType; // 0x274
		::System::Boolean ESPP_radius_UseIt; // 0x278
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_radius; // 0x280
		::System::Boolean ESPP_radius_EnableFade; // 0x288
		::System::Boolean ESPP_radius_EnableOverrideDefaultValue; // 0x289
		::System::Single ESPP_radius_OverrideDefaultValue; // 0x28C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_powerExponent_FieldHandleType; // 0x290
		::System::Boolean ESPP_powerExponent_UseIt; // 0x294
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_powerExponent; // 0x298
		::System::Boolean ESPP_powerExponent_EnableFade; // 0x2A0
		::System::Boolean ESPP_powerExponent_EnableOverrideDefaultValue; // 0x2A1
		::System::Single ESPP_powerExponent_OverrideDefaultValue; // 0x2A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_bias_FieldHandleType; // 0x2A8
		::System::Boolean ESPP_bias_UseIt; // 0x2AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_bias; // 0x2B0
		::System::Boolean ESPP_bias_EnableFade; // 0x2B8
		::System::Boolean ESPP_bias_EnableOverrideDefaultValue; // 0x2B9
		::System::Single ESPP_bias_OverrideDefaultValue; // 0x2BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_thickness_FieldHandleType; // 0x2C0
		::System::Boolean ESPP_thickness_UseIt; // 0x2C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_thickness; // 0x2C8
		::System::Boolean ESPP_thickness_EnableFade; // 0x2D0
		::System::Boolean ESPP_thickness_EnableOverrideDefaultValue; // 0x2D1
		::System::Single ESPP_thickness_OverrideDefaultValue; // 0x2D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_downSample_FieldHandleType; // 0x2D8
		::System::Boolean ESPP_downSample_UseIt; // 0x2DC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_downSample; // 0x2E0
		::System::Boolean ESPP_downSample_EnableFade; // 0x2E8
		::System::Boolean ESPP_downSample_EnableOverrideDefaultValue; // 0x2E9
		::System::Boolean ESPP_downSample_OverrideDefaultValue; // 0x2EA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cacheAware_FieldHandleType; // 0x2EC
		::System::Boolean ESPP_cacheAware_UseIt; // 0x2F0
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_cacheAware; // 0x2F8
		::System::Boolean ESPP_cacheAware_EnableFade; // 0x300
		::System::Boolean ESPP_cacheAware_EnableOverrideDefaultValue; // 0x301
		::System::Boolean ESPP_cacheAware_OverrideDefaultValue; // 0x302
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blurEnabled_FieldHandleType; // 0x304
		::System::Boolean ESPP_blurEnabled_UseIt; // 0x308
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_blurEnabled; // 0x310
		::System::Boolean ESPP_blurEnabled_EnableFade; // 0x318
		::System::Boolean ESPP_blurEnabled_EnableOverrideDefaultValue; // 0x319
		::System::Boolean ESPP_blurEnabled_OverrideDefaultValue; // 0x31A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blurRadius_FieldHandleType; // 0x31C
		::System::Boolean ESPP_blurRadius_UseIt; // 0x320
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_blurRadius; // 0x328
		::System::Boolean ESPP_blurRadius_EnableFade; // 0x330
		::System::Boolean ESPP_blurRadius_EnableOverrideDefaultValue; // 0x331
		::System::Int32 ESPP_blurRadius_OverrideDefaultValue; // 0x334
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blurPasses_FieldHandleType; // 0x338
		::System::Boolean ESPP_blurPasses_UseIt; // 0x33C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_blurPasses; // 0x340
		::System::Boolean ESPP_blurPasses_EnableFade; // 0x348
		::System::Boolean ESPP_blurPasses_EnableOverrideDefaultValue; // 0x349
		::System::Int32 ESPP_blurPasses_OverrideDefaultValue; // 0x34C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blurSharpness_FieldHandleType; // 0x350
		::System::Boolean ESPP_blurSharpness_UseIt; // 0x354
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_blurSharpness; // 0x358
		::System::Boolean ESPP_blurSharpness_EnableFade; // 0x360
		::System::Boolean ESPP_blurSharpness_EnableOverrideDefaultValue; // 0x361
		::System::Single ESPP_blurSharpness_OverrideDefaultValue; // 0x364

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_522F2897D3370F6B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_522F2897D3370F6B_OFFSET))(this, a1);
		}

		::System::Void Method_5_BEB6D3AE6B2F04A5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_BEB6D3AE6B2F04A5_OFFSET))(this, a1);
		}

		::System::Void Method_5_46737F85CDB5E497(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_46737F85CDB5E497_OFFSET))(this, a1);
		}

		::System::Void Method_5_46737F85CDB5E497_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAMPLIFYOCCLUSION_METHOD_5_46737F85CDB5E497_1_OFFSET))(this, a1);
		}
	};
}
