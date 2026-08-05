#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurDirection.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurQuality.h"

namespace MoleMole::Config { class ConfigEntityMotionBlurEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class MotionBlur; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x19ADC040)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_2561DC986DD32699_OFFSET UNITYSDK_OFFSET(0x19ADE2C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x19ADCB70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_522F2897D3370F6B_OFFSET UNITYSDK_OFFSET(0x19ADCDA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0x19ADC460)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19ADC230)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x19ADC240)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_EE2957687AFE92A5_1_OFFSET UNITYSDK_OFFSET(0x19ADF180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_EE2957687AFE92A5_OFFSET UNITYSDK_OFFSET(0x19ADEBC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADF740)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessMotionBlur_TypeDefinitionIndex = 60300;

	class ESPostProcessMotionBlur : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::MotionBlur*>
	{
	public:
		::MoleMole::Config::ConfigEntityMotionBlurEffects* m_stAsset; // 0xB0
		::System::Single _VolDefault_intensity; // 0xB8
		::UnityEngine::NAPRenderPipeline0::MotionBlurMode _VolDefault_mode; // 0xBC
		::UnityEngine::NAPRenderPipeline0::MotionBlurDirection _VolDefault_direction; // 0xC0
		::System::Single _VolDefault_motionVectorBlendRadius; // 0xC4
		::UnityEngine::NAPRenderPipeline0::MotionBlurQuality _VolDefault_quality; // 0xC8
		::System::Single _VolDefault_clamp; // 0xCC
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xD0
		::System::Single _VolPreVal_intensity; // 0xD4
		::System::Boolean _VolPreVal_mode_overrideState; // 0xD8
		::UnityEngine::NAPRenderPipeline0::MotionBlurMode _VolPreVal_mode; // 0xDC
		::System::Boolean _VolPreVal_direction_overrideState; // 0xE0
		::UnityEngine::NAPRenderPipeline0::MotionBlurDirection _VolPreVal_direction; // 0xE4
		::System::Boolean _VolPreVal_motionVectorBlendRadius_overrideState; // 0xE8
		::System::Single _VolPreVal_motionVectorBlendRadius; // 0xEC
		::System::Boolean _VolPreVal_quality_overrideState; // 0xF0
		::UnityEngine::NAPRenderPipeline0::MotionBlurQuality _VolPreVal_quality; // 0xF4
		::System::Boolean _VolPreVal_clamp_overrideState; // 0xF8
		::System::Single _VolPreVal_clamp; // 0xFC
		::System::Single _TimelineCurveFirstVal_intensity; // 0x100
		::System::Single _TimelineCurveLastVal_intensity; // 0x104
		::System::Single _TimelineCurveFirstVal_motionVectorBlendRadius; // 0x108
		::System::Single _TimelineCurveLastVal_motionVectorBlendRadius; // 0x10C
		::System::Single _TimelineCurveFirstVal_clamp; // 0x110
		::System::Single _TimelineCurveLastVal_clamp; // 0x114
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x118
		::System::Boolean ESPP_intensity_UseIt; // 0x11C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x120
		::System::Boolean ESPP_intensity_EnableFade; // 0x128
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x129
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x12C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mode_FieldHandleType; // 0x130
		::UnityEngine::NAPRenderPipeline0::MotionBlurMode ESPP_mode; // 0x134
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_direction_FieldHandleType; // 0x138
		::UnityEngine::NAPRenderPipeline0::MotionBlurDirection ESPP_direction; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_motionVectorBlendRadius_FieldHandleType; // 0x140
		::System::Boolean ESPP_motionVectorBlendRadius_UseIt; // 0x144
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_motionVectorBlendRadius; // 0x148
		::System::Boolean ESPP_motionVectorBlendRadius_EnableFade; // 0x150
		::System::Boolean ESPP_motionVectorBlendRadius_EnableOverrideDefaultValue; // 0x151
		::System::Single ESPP_motionVectorBlendRadius_OverrideDefaultValue; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_quality_FieldHandleType; // 0x158
		::UnityEngine::NAPRenderPipeline0::MotionBlurQuality ESPP_quality; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_clamp_FieldHandleType; // 0x160
		::System::Boolean ESPP_clamp_UseIt; // 0x164
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_clamp; // 0x168
		::System::Boolean ESPP_clamp_EnableFade; // 0x170
		::System::Boolean ESPP_clamp_EnableOverrideDefaultValue; // 0x171
		::System::Single ESPP_clamp_OverrideDefaultValue; // 0x174

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::Void Method_5_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_80313B77C31AD02B_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_522F2897D3370F6B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_522F2897D3370F6B_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_2561DC986DD32699_OFFSET))(this, a1);
		}

		::System::Void Method_5_EE2957687AFE92A5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_EE2957687AFE92A5_OFFSET))(this, a1);
		}

		::System::Void Method_5_EE2957687AFE92A5_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_EE2957687AFE92A5_1_OFFSET))(this, a1);
		}
	};
}
