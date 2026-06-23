#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityRadialBlurs; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x170DCD60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x170DED40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x170DD120)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0x170DD530)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x170DD110)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_9E93A3CD963FC72F_OFFSET UNITYSDK_OFFSET(0x170E4660)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_ABD8624DE9A02803_1_OFFSET UNITYSDK_OFFSET(0x170E7880)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_ABD8624DE9A02803_OFFSET UNITYSDK_OFFSET(0x170E63E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_C6534C82224A6491_OFFSET UNITYSDK_OFFSET(0x170DF660)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x170E8D20)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessRadialBlur_TypeDefinitionIndex = 56536;

	class ESPostProcessRadialBlur : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::RadialBlur*>
	{
	public:
		::MoleMole::Config::ConfigEntityRadialBlurs* m_stAsset; // 0xB0
		::UnityEngine::Rendering::Universal::DownSampleLevel _DefaultDownSampleLevel; // 0xB8
		::UnityEngine::Rendering::Universal::SampleDistanceMode _DefaultSampleDistanceMode; // 0xBC
		::System::Single _DefaultRadius; // 0xC0
		::System::Single _DefaultThreshold; // 0xC4
		::UnityEngine::Vector2 _DefaultCircleRange; // 0xC8
		::System::Boolean _DefaultForceActiveOverlayDistortion; // 0xD0
		::System::Boolean _DefaultUseBloomMode; // 0xD1
		::System::Single _DefaultGlareIntensity; // 0xD4
		::System::Single _DefaultGlareThreshold; // 0xD8
		::System::Single _DefaultGlareCenterFadeRange; // 0xDC
		::System::Single _DefaultGlareFadeShapeRatio; // 0xE0
		::UnityEngine::Rendering::Universal::DownSampleLevel _VolDefault_downSample; // 0xE4
		::UnityEngine::Rendering::Universal::SampleDistanceMode _VolDefault_sampleDistanceMode; // 0xE8
		::System::Int32 _VolDefault_sampleCount; // 0xEC
		::System::Single _VolDefault_radius; // 0xF0
		::UnityEngine::Vector2 _VolDefault_centerPosition; // 0xF4
		::System::Single _VolDefault_threshold; // 0xFC
		::System::Boolean _VolDefault_useCircleRange; // 0x100
		::UnityEngine::Vector2 _VolDefault_circleRange; // 0x104
		::System::Boolean _VolDefault_forceActiveOverlayDistortion; // 0x10C
		::System::Boolean _VolDefault_useBloomMode; // 0x10D
		::System::Single _VolDefault_glareIntensity; // 0x110
		::System::Single _VolDefault_glareThreshold; // 0x114
		::System::Single _VolDefault_glareCenterFadeRange; // 0x118
		::System::Single _VolDefault_glareFadeShapeRatio; // 0x11C
		::System::Boolean _VolDefault_canBeDisabledByGlobalConfig; // 0x120
		::System::Single _VolDefault_noiseScale; // 0x124
		::System::Single _VolDefault_BloomModeRadiusAdd; // 0x128
		::System::Int32 _VolDefault_BloomModeSampleCountAdd; // 0x12C
		::System::Boolean _VolPreVal_downSample_overrideState; // 0x130
		::UnityEngine::Rendering::Universal::DownSampleLevel _VolPreVal_downSample; // 0x134
		::System::Boolean _VolPreVal_sampleDistanceMode_overrideState; // 0x138
		::UnityEngine::Rendering::Universal::SampleDistanceMode _VolPreVal_sampleDistanceMode; // 0x13C
		::System::Boolean _VolPreVal_sampleCount_overrideState; // 0x140
		::System::Int32 _VolPreVal_sampleCount; // 0x144
		::System::Boolean _VolPreVal_radius_overrideState; // 0x148
		::System::Single _VolPreVal_radius; // 0x14C
		::System::Boolean _VolPreVal_centerPosition_overrideState; // 0x150
		::UnityEngine::Vector2 _VolPreVal_centerPosition; // 0x154
		::System::Boolean _VolPreVal_threshold_overrideState; // 0x15C
		::System::Single _VolPreVal_threshold; // 0x160
		::System::Boolean _VolPreVal_useCircleRange_overrideState; // 0x164
		::System::Boolean _VolPreVal_useCircleRange; // 0x165
		::System::Boolean _VolPreVal_circleRange_overrideState; // 0x166
		::UnityEngine::Vector2 _VolPreVal_circleRange; // 0x168
		::System::Boolean _VolPreVal_forceActiveOverlayDistortion_overrideState; // 0x170
		::System::Boolean _VolPreVal_forceActiveOverlayDistortion; // 0x171
		::System::Boolean _VolPreVal_useBloomMode_overrideState; // 0x172
		::System::Boolean _VolPreVal_useBloomMode; // 0x173
		::System::Boolean _VolPreVal_glareIntensity_overrideState; // 0x174
		::System::Single _VolPreVal_glareIntensity; // 0x178
		::System::Boolean _VolPreVal_glareThreshold_overrideState; // 0x17C
		::System::Single _VolPreVal_glareThreshold; // 0x180
		::System::Boolean _VolPreVal_glareCenterFadeRange_overrideState; // 0x184
		::System::Single _VolPreVal_glareCenterFadeRange; // 0x188
		::System::Boolean _VolPreVal_glareFadeShapeRatio_overrideState; // 0x18C
		::System::Single _VolPreVal_glareFadeShapeRatio; // 0x190
		::System::Boolean _VolPreVal_canBeDisabledByGlobalConfig_overrideState; // 0x194
		::System::Boolean _VolPreVal_canBeDisabledByGlobalConfig; // 0x195
		::System::Boolean _VolPreVal_noiseScale_overrideState; // 0x196
		::System::Single _VolPreVal_noiseScale; // 0x198
		::System::Boolean _VolPreVal_BloomModeRadiusAdd_overrideState; // 0x19C
		::System::Single _VolPreVal_BloomModeRadiusAdd; // 0x1A0
		::System::Boolean _VolPreVal_BloomModeSampleCountAdd_overrideState; // 0x1A4
		::System::Int32 _VolPreVal_BloomModeSampleCountAdd; // 0x1A8
		::System::Single _TimelineCurveFirstVal_radius; // 0x1AC
		::System::Single _TimelineCurveLastVal_radius; // 0x1B0
		::UnityEngine::Vector2 _TimelineCurveFirstVal_centerPosition; // 0x1B4
		::UnityEngine::Vector2 _TimelineCurveLastVal_centerPosition; // 0x1BC
		::System::Single _TimelineCurveFirstVal_threshold; // 0x1C4
		::System::Single _TimelineCurveLastVal_threshold; // 0x1C8
		::System::Boolean _TimelineCurveFirstVal_useCircleRange; // 0x1CC
		::System::Boolean _TimelineCurveLastVal_useCircleRange; // 0x1CD
		::UnityEngine::Vector2 _TimelineCurveFirstVal_circleRange; // 0x1D0
		::UnityEngine::Vector2 _TimelineCurveLastVal_circleRange; // 0x1D8
		::System::Boolean _TimelineCurveFirstVal_useBloomMode; // 0x1E0
		::System::Boolean _TimelineCurveLastVal_useBloomMode; // 0x1E1
		::System::Single _TimelineCurveFirstVal_glareIntensity; // 0x1E4
		::System::Single _TimelineCurveLastVal_glareIntensity; // 0x1E8
		::System::Single _TimelineCurveFirstVal_glareThreshold; // 0x1EC
		::System::Single _TimelineCurveLastVal_glareThreshold; // 0x1F0
		::System::Single _TimelineCurveFirstVal_glareCenterFadeRange; // 0x1F4
		::System::Single _TimelineCurveLastVal_glareCenterFadeRange; // 0x1F8
		::System::Single _TimelineCurveFirstVal_glareFadeShapeRatio; // 0x1FC
		::System::Single _TimelineCurveLastVal_glareFadeShapeRatio; // 0x200
		::System::Single _TimelineCurveFirstVal_noiseScale; // 0x204
		::System::Single _TimelineCurveLastVal_noiseScale; // 0x208
		::System::Single _TimelineCurveFirstVal_BloomModeRadiusAdd; // 0x20C
		::System::Single _TimelineCurveLastVal_BloomModeRadiusAdd; // 0x210
		::System::Int32 _TimelineCurveFirstVal_BloomModeSampleCountAdd; // 0x214
		::System::Int32 _TimelineCurveLastVal_BloomModeSampleCountAdd; // 0x218
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_downSample_FieldHandleType; // 0x21C
		::UnityEngine::Rendering::Universal::DownSampleLevel ESPP_downSample; // 0x220
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleDistanceMode_FieldHandleType; // 0x224
		::UnityEngine::Rendering::Universal::SampleDistanceMode ESPP_sampleDistanceMode; // 0x228
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleCount_FieldHandleType; // 0x22C
		::System::Int32 ESPP_sampleCount; // 0x230
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_radius_FieldHandleType; // 0x234
		::System::Boolean ESPP_radius_UseIt; // 0x238
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_radius; // 0x240
		::System::Boolean ESPP_radius_EnableFade; // 0x248
		::System::Boolean ESPP_radius_EnableOverrideDefaultValue; // 0x249
		::System::Single ESPP_radius_OverrideDefaultValue; // 0x24C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_centerPosition_FieldHandleType; // 0x250
		::System::Boolean ESPP_centerPosition_UseIt; // 0x254
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_centerPosition; // 0x258
		::System::Boolean ESPP_centerPosition_EnableFade; // 0x260
		::System::Boolean ESPP_centerPosition_EnableOverrideDefaultValue; // 0x261
		::UnityEngine::Vector2 ESPP_centerPosition_OverrideDefaultValue; // 0x264
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_threshold_FieldHandleType; // 0x26C
		::System::Boolean ESPP_threshold_UseIt; // 0x270
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_threshold; // 0x278
		::System::Boolean ESPP_threshold_EnableFade; // 0x280
		::System::Boolean ESPP_threshold_EnableOverrideDefaultValue; // 0x281
		::System::Single ESPP_threshold_OverrideDefaultValue; // 0x284
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useCircleRange_FieldHandleType; // 0x288
		::System::Boolean ESPP_useCircleRange_UseIt; // 0x28C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useCircleRange; // 0x290
		::System::Boolean ESPP_useCircleRange_EnableFade; // 0x298
		::System::Boolean ESPP_useCircleRange_EnableOverrideDefaultValue; // 0x299
		::System::Boolean ESPP_useCircleRange_OverrideDefaultValue; // 0x29A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_circleRange_FieldHandleType; // 0x29C
		::System::Boolean ESPP_circleRange_UseIt; // 0x2A0
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_circleRange; // 0x2A8
		::System::Boolean ESPP_circleRange_EnableFade; // 0x2B0
		::System::Boolean ESPP_circleRange_EnableOverrideDefaultValue; // 0x2B1
		::UnityEngine::Vector2 ESPP_circleRange_OverrideDefaultValue; // 0x2B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_forceActiveOverlayDistortion_FieldHandleType; // 0x2BC
		::System::Boolean ESPP_forceActiveOverlayDistortion; // 0x2C0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useBloomMode_FieldHandleType; // 0x2C4
		::System::Boolean ESPP_useBloomMode_UseIt; // 0x2C8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useBloomMode; // 0x2D0
		::System::Boolean ESPP_useBloomMode_EnableFade; // 0x2D8
		::System::Boolean ESPP_useBloomMode_EnableOverrideDefaultValue; // 0x2D9
		::System::Boolean ESPP_useBloomMode_OverrideDefaultValue; // 0x2DA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareIntensity_FieldHandleType; // 0x2DC
		::System::Boolean ESPP_glareIntensity_UseIt; // 0x2E0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareIntensity; // 0x2E8
		::System::Boolean ESPP_glareIntensity_EnableFade; // 0x2F0
		::System::Boolean ESPP_glareIntensity_EnableOverrideDefaultValue; // 0x2F1
		::System::Single ESPP_glareIntensity_OverrideDefaultValue; // 0x2F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareThreshold_FieldHandleType; // 0x2F8
		::System::Boolean ESPP_glareThreshold_UseIt; // 0x2FC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareThreshold; // 0x300
		::System::Boolean ESPP_glareThreshold_EnableFade; // 0x308
		::System::Boolean ESPP_glareThreshold_EnableOverrideDefaultValue; // 0x309
		::System::Single ESPP_glareThreshold_OverrideDefaultValue; // 0x30C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareCenterFadeRange_FieldHandleType; // 0x310
		::System::Boolean ESPP_glareCenterFadeRange_UseIt; // 0x314
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareCenterFadeRange; // 0x318
		::System::Boolean ESPP_glareCenterFadeRange_EnableFade; // 0x320
		::System::Boolean ESPP_glareCenterFadeRange_EnableOverrideDefaultValue; // 0x321
		::System::Single ESPP_glareCenterFadeRange_OverrideDefaultValue; // 0x324
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareFadeShapeRatio_FieldHandleType; // 0x328
		::System::Boolean ESPP_glareFadeShapeRatio_UseIt; // 0x32C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareFadeShapeRatio; // 0x330
		::System::Boolean ESPP_glareFadeShapeRatio_EnableFade; // 0x338
		::System::Boolean ESPP_glareFadeShapeRatio_EnableOverrideDefaultValue; // 0x339
		::System::Single ESPP_glareFadeShapeRatio_OverrideDefaultValue; // 0x33C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_canBeDisabledByGlobalConfig_FieldHandleType; // 0x340
		::System::Boolean ESPP_canBeDisabledByGlobalConfig; // 0x344
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_noiseScale_FieldHandleType; // 0x348
		::System::Boolean ESPP_noiseScale_UseIt; // 0x34C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_noiseScale; // 0x350
		::System::Boolean ESPP_noiseScale_EnableFade; // 0x358
		::System::Boolean ESPP_noiseScale_EnableOverrideDefaultValue; // 0x359
		::System::Single ESPP_noiseScale_OverrideDefaultValue; // 0x35C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_BloomModeRadiusAdd_FieldHandleType; // 0x360
		::System::Boolean ESPP_BloomModeRadiusAdd_UseIt; // 0x364
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_BloomModeRadiusAdd; // 0x368
		::System::Boolean ESPP_BloomModeRadiusAdd_EnableFade; // 0x370
		::System::Boolean ESPP_BloomModeRadiusAdd_EnableOverrideDefaultValue; // 0x371
		::System::Single ESPP_BloomModeRadiusAdd_OverrideDefaultValue; // 0x374
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_BloomModeSampleCountAdd_FieldHandleType; // 0x378
		::System::Boolean ESPP_BloomModeSampleCountAdd_UseIt; // 0x37C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_BloomModeSampleCountAdd; // 0x380
		::System::Boolean ESPP_BloomModeSampleCountAdd_EnableFade; // 0x388
		::System::Boolean ESPP_BloomModeSampleCountAdd_EnableOverrideDefaultValue; // 0x389
		::System::Int32 ESPP_BloomModeSampleCountAdd_OverrideDefaultValue; // 0x38C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_80313B77C31AD02B_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_C6534C82224A6491(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_C6534C82224A6491_OFFSET))(this, a1);
		}

		::System::Void Method_5_9E93A3CD963FC72F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_9E93A3CD963FC72F_OFFSET))(this, a1);
		}

		::System::Void Method_5_ABD8624DE9A02803(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_ABD8624DE9A02803_OFFSET))(this, a1);
		}

		::System::Void Method_5_ABD8624DE9A02803_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_ABD8624DE9A02803_1_OFFSET))(this, a1);
		}
	};
}
