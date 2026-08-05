#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigLensDistortions; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x118A3920)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x118A45C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_522F2897D3370F6B_OFFSET UNITYSDK_OFFSET(0x118A4A10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_58D68FEBA7B5A778_1_OFFSET UNITYSDK_OFFSET(0x118A77A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_58D68FEBA7B5A778_OFFSET UNITYSDK_OFFSET(0x118A6D20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0x118A3DE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x118A3B90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_87DA5EB0C040E3E5_OFFSET UNITYSDK_OFFSET(0x118A6210)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x118A3BA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x118A8220)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessLensDistortion_TypeDefinitionIndex = 89994;

	class ESPostProcessLensDistortion : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::LensDistortion*>
	{
	public:
		::MoleMole::Config::ConfigLensDistortions* m_stAsset; // 0xB0
		::System::Single _DefaultIntensity; // 0xB8
		::System::Single _DefaultXMultiplier; // 0xBC
		::System::Single _DefaultYMultiplier; // 0xC0
		::System::Single _DefaultScale; // 0xC4
		::System::Single _DefaultDepthClip; // 0xC8
		::UnityEngine::Vector2 _DefaultCenter; // 0xCC
		::System::Single _VolDefault_intensity; // 0xD4
		::System::Single _VolDefault_xMultiplier; // 0xD8
		::System::Single _VolDefault_yMultiplier; // 0xDC
		::System::Single _VolDefault_scale; // 0xE0
		::System::Single _VolDefault_depthClip; // 0xE4
		::UnityEngine::Vector2 _VolDefault_center; // 0xE8
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xF0
		::System::Single _VolPreVal_intensity; // 0xF4
		::System::Boolean _VolPreVal_xMultiplier_overrideState; // 0xF8
		::System::Single _VolPreVal_xMultiplier; // 0xFC
		::System::Boolean _VolPreVal_yMultiplier_overrideState; // 0x100
		::System::Single _VolPreVal_yMultiplier; // 0x104
		::System::Boolean _VolPreVal_scale_overrideState; // 0x108
		::System::Single _VolPreVal_scale; // 0x10C
		::System::Boolean _VolPreVal_depthClip_overrideState; // 0x110
		::System::Single _VolPreVal_depthClip; // 0x114
		::System::Boolean _VolPreVal_center_overrideState; // 0x118
		::UnityEngine::Vector2 _VolPreVal_center; // 0x11C
		::System::Single _TimelineCurveFirstVal_intensity; // 0x124
		::System::Single _TimelineCurveLastVal_intensity; // 0x128
		::System::Single _TimelineCurveFirstVal_xMultiplier; // 0x12C
		::System::Single _TimelineCurveLastVal_xMultiplier; // 0x130
		::System::Single _TimelineCurveFirstVal_yMultiplier; // 0x134
		::System::Single _TimelineCurveLastVal_yMultiplier; // 0x138
		::System::Single _TimelineCurveFirstVal_scale; // 0x13C
		::System::Single _TimelineCurveLastVal_scale; // 0x140
		::System::Single _TimelineCurveFirstVal_depthClip; // 0x144
		::System::Single _TimelineCurveLastVal_depthClip; // 0x148
		::UnityEngine::Vector2 _TimelineCurveFirstVal_center; // 0x14C
		::UnityEngine::Vector2 _TimelineCurveLastVal_center; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x15C
		::System::Boolean ESPP_intensity_UseIt; // 0x160
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x168
		::System::Boolean ESPP_intensity_EnableFade; // 0x170
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x171
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x174
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_xMultiplier_FieldHandleType; // 0x178
		::System::Boolean ESPP_xMultiplier_UseIt; // 0x17C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_xMultiplier; // 0x180
		::System::Boolean ESPP_xMultiplier_EnableFade; // 0x188
		::System::Boolean ESPP_xMultiplier_EnableOverrideDefaultValue; // 0x189
		::System::Single ESPP_xMultiplier_OverrideDefaultValue; // 0x18C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_yMultiplier_FieldHandleType; // 0x190
		::System::Boolean ESPP_yMultiplier_UseIt; // 0x194
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_yMultiplier; // 0x198
		::System::Boolean ESPP_yMultiplier_EnableFade; // 0x1A0
		::System::Boolean ESPP_yMultiplier_EnableOverrideDefaultValue; // 0x1A1
		::System::Single ESPP_yMultiplier_OverrideDefaultValue; // 0x1A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scale_FieldHandleType; // 0x1A8
		::System::Boolean ESPP_scale_UseIt; // 0x1AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scale; // 0x1B0
		::System::Boolean ESPP_scale_EnableFade; // 0x1B8
		::System::Boolean ESPP_scale_EnableOverrideDefaultValue; // 0x1B9
		::System::Single ESPP_scale_OverrideDefaultValue; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_depthClip_FieldHandleType; // 0x1C0
		::System::Boolean ESPP_depthClip_UseIt; // 0x1C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_depthClip; // 0x1C8
		::System::Boolean ESPP_depthClip_EnableFade; // 0x1D0
		::System::Boolean ESPP_depthClip_EnableOverrideDefaultValue; // 0x1D1
		::System::Single ESPP_depthClip_OverrideDefaultValue; // 0x1D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_center_FieldHandleType; // 0x1D8
		::System::Boolean ESPP_center_UseIt; // 0x1DC
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_center; // 0x1E0
		::System::Boolean ESPP_center_EnableFade; // 0x1E8
		::System::Boolean ESPP_center_EnableOverrideDefaultValue; // 0x1E9
		::UnityEngine::Vector2 ESPP_center_OverrideDefaultValue; // 0x1EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::Void Method_5_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_80313B77C31AD02B_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_522F2897D3370F6B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_522F2897D3370F6B_OFFSET))(this, a1);
		}

		::System::Void Method_5_87DA5EB0C040E3E5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_87DA5EB0C040E3E5_OFFSET))(this, a1);
		}

		::System::Void Method_5_58D68FEBA7B5A778(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_58D68FEBA7B5A778_OFFSET))(this, a1);
		}

		::System::Void Method_5_58D68FEBA7B5A778_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_58D68FEBA7B5A778_1_OFFSET))(this, a1);
		}
	};
}
