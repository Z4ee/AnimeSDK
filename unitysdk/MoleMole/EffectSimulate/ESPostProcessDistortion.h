#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigEntityDistortionEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class Distortion; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x19BD03F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x19BD13A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_63E3E26A3D57F57D_1_OFFSET UNITYSDK_OFFSET(0x19BD4F10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_63E3E26A3D57F57D_OFFSET UNITYSDK_OFFSET(0x19BD4730)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19BD0600)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x19BD0610)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_9E93A3CD963FC72F_OFFSET UNITYSDK_OFFSET(0x19BD39C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A4D542D66439C65E_OFFSET UNITYSDK_OFFSET(0x19BD1680)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x19BD0860)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD56F0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessDistortion_TypeDefinitionIndex = 89660;

	class ESPostProcessDistortion : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::Distortion*>
	{
	public:
		::MoleMole::Config::ConfigEntityDistortionEffects* m_stAsset; // 0xB0
		::System::Single _DefaultIntensity; // 0xB8
		::System::Single _DefaultSeparateRGBIntensity; // 0xBC
		::System::Int32 _VolDefault_downScaleFactor; // 0xC0
		::System::Single _VolDefault_intensity; // 0xC4
		::UnityEngine::Vector3 _VolDefault_rgbShift; // 0xC8
		::System::Single _VolDefault_separateRGBIntensity; // 0xD4
		::System::Boolean _VolDefault_forceActive; // 0xD8
		::System::Boolean _VolDefault_forceDistortionOnLowPlatform; // 0xD9
		::UnityEngine::NAPRenderPipeline0::DistortionQueueType _VolDefault_effectRenderQueue; // 0xDC
		::System::Boolean _VolPreVal_downScaleFactor_overrideState; // 0xE0
		::System::Int32 _VolPreVal_downScaleFactor; // 0xE4
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xE8
		::System::Single _VolPreVal_intensity; // 0xEC
		::System::Boolean _VolPreVal_rgbShift_overrideState; // 0xF0
		::UnityEngine::Vector3 _VolPreVal_rgbShift; // 0xF4
		::System::Boolean _VolPreVal_separateRGBIntensity_overrideState; // 0x100
		::System::Single _VolPreVal_separateRGBIntensity; // 0x104
		::System::Boolean _VolPreVal_forceActive_overrideState; // 0x108
		::System::Boolean _VolPreVal_forceActive; // 0x109
		::System::Boolean _VolPreVal_forceDistortionOnLowPlatform_overrideState; // 0x10A
		::System::Boolean _VolPreVal_forceDistortionOnLowPlatform; // 0x10B
		::System::Boolean _VolPreVal_effectRenderQueue_overrideState; // 0x10C
		::UnityEngine::NAPRenderPipeline0::DistortionQueueType _VolPreVal_effectRenderQueue; // 0x110
		::System::Single _TimelineCurveFirstVal_intensity; // 0x114
		::System::Single _TimelineCurveLastVal_intensity; // 0x118
		::System::Single _TimelineCurveFirstVal_separateRGBIntensity; // 0x11C
		::System::Single _TimelineCurveLastVal_separateRGBIntensity; // 0x120
		::System::Boolean _TimelineCurveFirstVal_forceActive; // 0x124
		::System::Boolean _TimelineCurveLastVal_forceActive; // 0x125
		::System::Boolean _TimelineCurveFirstVal_forceDistortionOnLowPlatform; // 0x126
		::System::Boolean _TimelineCurveLastVal_forceDistortionOnLowPlatform; // 0x127
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_downScaleFactor_FieldHandleType; // 0x128
		::System::Int32 ESPP_downScaleFactor; // 0x12C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x130
		::System::Boolean ESPP_intensity_UseIt; // 0x134
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x138
		::System::Boolean ESPP_intensity_EnableFade; // 0x140
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x141
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x144
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rgbShift_FieldHandleType; // 0x148
		::UnityEngine::Vector3 ESPP_rgbShift; // 0x14C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_separateRGBIntensity_FieldHandleType; // 0x158
		::System::Boolean ESPP_separateRGBIntensity_UseIt; // 0x15C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_separateRGBIntensity; // 0x160
		::System::Boolean ESPP_separateRGBIntensity_EnableFade; // 0x168
		::System::Boolean ESPP_separateRGBIntensity_EnableOverrideDefaultValue; // 0x169
		::System::Single ESPP_separateRGBIntensity_OverrideDefaultValue; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_forceActive_FieldHandleType; // 0x170
		::System::Boolean ESPP_forceActive_UseIt; // 0x174
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_forceActive; // 0x178
		::System::Boolean ESPP_forceActive_EnableFade; // 0x180
		::System::Boolean ESPP_forceActive_EnableOverrideDefaultValue; // 0x181
		::System::Boolean ESPP_forceActive_OverrideDefaultValue; // 0x182
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_forceDistortionOnLowPlatform_FieldHandleType; // 0x184
		::System::Boolean ESPP_forceDistortionOnLowPlatform_UseIt; // 0x188
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_forceDistortionOnLowPlatform; // 0x190
		::System::Boolean ESPP_forceDistortionOnLowPlatform_EnableFade; // 0x198
		::System::Boolean ESPP_forceDistortionOnLowPlatform_EnableOverrideDefaultValue; // 0x199
		::System::Boolean ESPP_forceDistortionOnLowPlatform_OverrideDefaultValue; // 0x19A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_effectRenderQueue_FieldHandleType; // 0x19C
		::UnityEngine::NAPRenderPipeline0::DistortionQueueType ESPP_effectRenderQueue; // 0x1A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_A4D542D66439C65E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A4D542D66439C65E_OFFSET))(this, a1);
		}

		::System::Void Method_5_9E93A3CD963FC72F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_9E93A3CD963FC72F_OFFSET))(this, a1);
		}

		::System::Void Method_5_63E3E26A3D57F57D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_63E3E26A3D57F57D_OFFSET))(this, a1);
		}

		::System::Void Method_5_63E3E26A3D57F57D_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_63E3E26A3D57F57D_1_OFFSET))(this, a1);
		}
	};
}
