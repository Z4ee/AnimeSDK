#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

namespace MoleMole::Config { class ConfigDepthOfFieldEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1BD92DD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x1BD94890)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x1BD93160)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_55A68C4933FB4D7C_OFFSET UNITYSDK_OFFSET(0x1BD95100)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_59791C706EFFC2BA_1_OFFSET UNITYSDK_OFFSET(0x1BD9BDD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_59791C706EFFC2BA_OFFSET UNITYSDK_OFFSET(0x1BD9AAE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0x1BD934F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1BD93150)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_D668D89AE7986FC5_OFFSET UNITYSDK_OFFSET(0x1BD99260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD9D0C0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessDepthOfField_TypeDefinitionIndex = 80920;

	class ESPostProcessDepthOfField : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::DepthOfField*>
	{
	public:
		::MoleMole::Config::ConfigDepthOfFieldEffects* m_stAsset; // 0xB0
		::UnityEngine::Rendering::Universal::DepthOfFieldMode _DefaultMode; // 0xB8
		::System::Single _DefaultGaussianStart; // 0xBC
		::System::Single _DefaultGaussianEnd; // 0xC0
		::System::Single _DefaultGaussianMaxRadius; // 0xC4
		::System::Boolean _DefaultHighQualitySampling; // 0xC8
		::System::Single _DefaultFocusDistance; // 0xCC
		::System::Single _DefaultFocalLength; // 0xD0
		::System::Single _DefaultAperture; // 0xD4
		::System::Int32 _DefaultBladeCount; // 0xD8
		::System::Single _DefaultBladeCurvature; // 0xDC
		::System::Single _DefaultBladeRotation; // 0xE0
		::UnityEngine::Rendering::Universal::DepthOfFieldMode _VolDefault_mode; // 0xE4
		::UnityEngine::Rendering::Universal::DofDebugMode _VolDefault_debugMode; // 0xE8
		::System::Single _VolDefault_gaussianStart; // 0xEC
		::System::Single _VolDefault_gaussianEnd; // 0xF0
		::System::Single _VolDefault_gaussianMaxRadius; // 0xF4
		::System::Boolean _VolDefault_highQualitySampling; // 0xF8
		::System::Single _VolDefault_focusDistance; // 0xFC
		::System::Single _VolDefault_focalLength; // 0x100
		::System::Single _VolDefault_aperture; // 0x104
		::System::Int32 _VolDefault_bladeCount; // 0x108
		::System::Single _VolDefault_bladeCurvature; // 0x10C
		::System::Single _VolDefault_bladeRotation; // 0x110
		::System::Boolean _VolDefault_discardNearCoc; // 0x114
		::System::Boolean _VolDefault_blurQualityHigh; // 0x115
		::System::Boolean _VolDefault_forceNoDefaultDof; // 0x116
		::System::Boolean _VolPreVal_mode_overrideState; // 0x117
		::UnityEngine::Rendering::Universal::DepthOfFieldMode _VolPreVal_mode; // 0x118
		::System::Boolean _VolPreVal_debugMode_overrideState; // 0x11C
		::UnityEngine::Rendering::Universal::DofDebugMode _VolPreVal_debugMode; // 0x120
		::System::Boolean _VolPreVal_gaussianStart_overrideState; // 0x124
		::System::Single _VolPreVal_gaussianStart; // 0x128
		::System::Boolean _VolPreVal_gaussianEnd_overrideState; // 0x12C
		::System::Single _VolPreVal_gaussianEnd; // 0x130
		::System::Boolean _VolPreVal_gaussianMaxRadius_overrideState; // 0x134
		::System::Single _VolPreVal_gaussianMaxRadius; // 0x138
		::System::Boolean _VolPreVal_highQualitySampling_overrideState; // 0x13C
		::System::Boolean _VolPreVal_highQualitySampling; // 0x13D
		::System::Boolean _VolPreVal_focusDistance_overrideState; // 0x13E
		::System::Single _VolPreVal_focusDistance; // 0x140
		::System::Boolean _VolPreVal_focalLength_overrideState; // 0x144
		::System::Single _VolPreVal_focalLength; // 0x148
		::System::Boolean _VolPreVal_aperture_overrideState; // 0x14C
		::System::Single _VolPreVal_aperture; // 0x150
		::System::Boolean _VolPreVal_bladeCount_overrideState; // 0x154
		::System::Int32 _VolPreVal_bladeCount; // 0x158
		::System::Boolean _VolPreVal_bladeCurvature_overrideState; // 0x15C
		::System::Single _VolPreVal_bladeCurvature; // 0x160
		::System::Boolean _VolPreVal_bladeRotation_overrideState; // 0x164
		::System::Single _VolPreVal_bladeRotation; // 0x168
		::System::Boolean _VolPreVal_discardNearCoc_overrideState; // 0x16C
		::System::Boolean _VolPreVal_discardNearCoc; // 0x16D
		::System::Boolean _VolPreVal_blurQualityHigh_overrideState; // 0x16E
		::System::Boolean _VolPreVal_blurQualityHigh; // 0x16F
		::System::Boolean _VolPreVal_forceNoDefaultDof_overrideState; // 0x170
		::System::Boolean _VolPreVal_forceNoDefaultDof; // 0x171
		::System::Single _TimelineCurveFirstVal_gaussianStart; // 0x174
		::System::Single _TimelineCurveLastVal_gaussianStart; // 0x178
		::System::Single _TimelineCurveFirstVal_gaussianEnd; // 0x17C
		::System::Single _TimelineCurveLastVal_gaussianEnd; // 0x180
		::System::Single _TimelineCurveFirstVal_gaussianMaxRadius; // 0x184
		::System::Single _TimelineCurveLastVal_gaussianMaxRadius; // 0x188
		::System::Single _TimelineCurveFirstVal_focusDistance; // 0x18C
		::System::Single _TimelineCurveLastVal_focusDistance; // 0x190
		::System::Single _TimelineCurveFirstVal_focalLength; // 0x194
		::System::Single _TimelineCurveLastVal_focalLength; // 0x198
		::System::Single _TimelineCurveFirstVal_aperture; // 0x19C
		::System::Single _TimelineCurveLastVal_aperture; // 0x1A0
		::System::Int32 _TimelineCurveFirstVal_bladeCount; // 0x1A4
		::System::Int32 _TimelineCurveLastVal_bladeCount; // 0x1A8
		::System::Single _TimelineCurveFirstVal_bladeCurvature; // 0x1AC
		::System::Single _TimelineCurveLastVal_bladeCurvature; // 0x1B0
		::System::Single _TimelineCurveFirstVal_bladeRotation; // 0x1B4
		::System::Single _TimelineCurveLastVal_bladeRotation; // 0x1B8
		::System::Boolean _TimelineCurveFirstVal_discardNearCoc; // 0x1BC
		::System::Boolean _TimelineCurveLastVal_discardNearCoc; // 0x1BD
		::System::Boolean _TimelineCurveFirstVal_blurQualityHigh; // 0x1BE
		::System::Boolean _TimelineCurveLastVal_blurQualityHigh; // 0x1BF
		::System::Boolean _TimelineCurveFirstVal_forceNoDefaultDof; // 0x1C0
		::System::Boolean _TimelineCurveLastVal_forceNoDefaultDof; // 0x1C1
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mode_FieldHandleType; // 0x1C4
		::UnityEngine::Rendering::Universal::DepthOfFieldMode ESPP_mode; // 0x1C8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_debugMode_FieldHandleType; // 0x1CC
		::UnityEngine::Rendering::Universal::DofDebugMode ESPP_debugMode; // 0x1D0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gaussianStart_FieldHandleType; // 0x1D4
		::System::Boolean ESPP_gaussianStart_UseIt; // 0x1D8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_gaussianStart; // 0x1E0
		::System::Boolean ESPP_gaussianStart_EnableFade; // 0x1E8
		::System::Boolean ESPP_gaussianStart_EnableOverrideDefaultValue; // 0x1E9
		::System::Single ESPP_gaussianStart_OverrideDefaultValue; // 0x1EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gaussianEnd_FieldHandleType; // 0x1F0
		::System::Boolean ESPP_gaussianEnd_UseIt; // 0x1F4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_gaussianEnd; // 0x1F8
		::System::Boolean ESPP_gaussianEnd_EnableFade; // 0x200
		::System::Boolean ESPP_gaussianEnd_EnableOverrideDefaultValue; // 0x201
		::System::Single ESPP_gaussianEnd_OverrideDefaultValue; // 0x204
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gaussianMaxRadius_FieldHandleType; // 0x208
		::System::Boolean ESPP_gaussianMaxRadius_UseIt; // 0x20C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_gaussianMaxRadius; // 0x210
		::System::Boolean ESPP_gaussianMaxRadius_EnableFade; // 0x218
		::System::Boolean ESPP_gaussianMaxRadius_EnableOverrideDefaultValue; // 0x219
		::System::Single ESPP_gaussianMaxRadius_OverrideDefaultValue; // 0x21C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_highQualitySampling_FieldHandleType; // 0x220
		::System::Boolean ESPP_highQualitySampling; // 0x224
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_focusDistance_FieldHandleType; // 0x228
		::System::Boolean ESPP_focusDistance_UseIt; // 0x22C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_focusDistance; // 0x230
		::System::Boolean ESPP_focusDistance_EnableFade; // 0x238
		::System::Boolean ESPP_focusDistance_EnableOverrideDefaultValue; // 0x239
		::System::Single ESPP_focusDistance_OverrideDefaultValue; // 0x23C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_focalLength_FieldHandleType; // 0x240
		::System::Boolean ESPP_focalLength_UseIt; // 0x244
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_focalLength; // 0x248
		::System::Boolean ESPP_focalLength_EnableFade; // 0x250
		::System::Boolean ESPP_focalLength_EnableOverrideDefaultValue; // 0x251
		::System::Single ESPP_focalLength_OverrideDefaultValue; // 0x254
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_aperture_FieldHandleType; // 0x258
		::System::Boolean ESPP_aperture_UseIt; // 0x25C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_aperture; // 0x260
		::System::Boolean ESPP_aperture_EnableFade; // 0x268
		::System::Boolean ESPP_aperture_EnableOverrideDefaultValue; // 0x269
		::System::Single ESPP_aperture_OverrideDefaultValue; // 0x26C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_bladeCount_FieldHandleType; // 0x270
		::System::Boolean ESPP_bladeCount_UseIt; // 0x274
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_bladeCount; // 0x278
		::System::Boolean ESPP_bladeCount_EnableFade; // 0x280
		::System::Boolean ESPP_bladeCount_EnableOverrideDefaultValue; // 0x281
		::System::Int32 ESPP_bladeCount_OverrideDefaultValue; // 0x284
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_bladeCurvature_FieldHandleType; // 0x288
		::System::Boolean ESPP_bladeCurvature_UseIt; // 0x28C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_bladeCurvature; // 0x290
		::System::Boolean ESPP_bladeCurvature_EnableFade; // 0x298
		::System::Boolean ESPP_bladeCurvature_EnableOverrideDefaultValue; // 0x299
		::System::Single ESPP_bladeCurvature_OverrideDefaultValue; // 0x29C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_bladeRotation_FieldHandleType; // 0x2A0
		::System::Boolean ESPP_bladeRotation_UseIt; // 0x2A4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_bladeRotation; // 0x2A8
		::System::Boolean ESPP_bladeRotation_EnableFade; // 0x2B0
		::System::Boolean ESPP_bladeRotation_EnableOverrideDefaultValue; // 0x2B1
		::System::Single ESPP_bladeRotation_OverrideDefaultValue; // 0x2B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_discardNearCoc_FieldHandleType; // 0x2B8
		::System::Boolean ESPP_discardNearCoc_UseIt; // 0x2BC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_discardNearCoc; // 0x2C0
		::System::Boolean ESPP_discardNearCoc_EnableFade; // 0x2C8
		::System::Boolean ESPP_discardNearCoc_EnableOverrideDefaultValue; // 0x2C9
		::System::Boolean ESPP_discardNearCoc_OverrideDefaultValue; // 0x2CA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blurQualityHigh_FieldHandleType; // 0x2CC
		::System::Boolean ESPP_blurQualityHigh_UseIt; // 0x2D0
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_blurQualityHigh; // 0x2D8
		::System::Boolean ESPP_blurQualityHigh_EnableFade; // 0x2E0
		::System::Boolean ESPP_blurQualityHigh_EnableOverrideDefaultValue; // 0x2E1
		::System::Boolean ESPP_blurQualityHigh_OverrideDefaultValue; // 0x2E2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_forceNoDefaultDof_FieldHandleType; // 0x2E4
		::System::Boolean ESPP_forceNoDefaultDof_UseIt; // 0x2E8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_forceNoDefaultDof; // 0x2F0
		::System::Boolean ESPP_forceNoDefaultDof_EnableFade; // 0x2F8
		::System::Boolean ESPP_forceNoDefaultDof_EnableOverrideDefaultValue; // 0x2F9
		::System::Boolean ESPP_forceNoDefaultDof_OverrideDefaultValue; // 0x2FA

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_80313B77C31AD02B_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_55A68C4933FB4D7C(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_55A68C4933FB4D7C_OFFSET))(this, a1);
		}

		::System::Void Method_5_D668D89AE7986FC5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_D668D89AE7986FC5_OFFSET))(this, a1);
		}

		::System::Void Method_5_59791C706EFFC2BA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_59791C706EFFC2BA_OFFSET))(this, a1);
		}

		::System::Void Method_5_59791C706EFFC2BA_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_METHOD_5_59791C706EFFC2BA_1_OFFSET))(this, a1);
		}
	};
}
