#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TonemappingMode.h"

namespace MoleMole::Config { class ConfigEntityTonemappingEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class Tonemapping; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x150FF490)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x15100160)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_31F1C58AB372DEB4_OFFSET UNITYSDK_OFFSET(0x15102000)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_522F2897D3370F6B_OFFSET UNITYSDK_OFFSET(0x151005B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_58D68FEBA7B5A778_1_OFFSET UNITYSDK_OFFSET(0x15103460)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_58D68FEBA7B5A778_OFFSET UNITYSDK_OFFSET(0x15102AF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0x150FF960)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x150FF700)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x150FF710)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x15103DD0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessTonemapping_TypeDefinitionIndex = 51181;

	class ESPostProcessTonemapping : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::Tonemapping*>
	{
	public:
		::MoleMole::Config::ConfigEntityTonemappingEffects* m_stAsset; // 0xB0
		::UnityEngine::NAPRenderPipeline0::TonemappingMode _VolDefault_mode; // 0xB8
		::System::Single _VolDefault_toeStrength; // 0xBC
		::System::Single _VolDefault_toeLength; // 0xC0
		::System::Single _VolDefault_shoulderStrength; // 0xC4
		::System::Single _VolDefault_shoulderLength; // 0xC8
		::System::Single _VolDefault_shoulderAngle; // 0xCC
		::System::Single _VolDefault_customGamma; // 0xD0
		::System::Boolean _VolPreVal_mode_overrideState; // 0xD4
		::UnityEngine::NAPRenderPipeline0::TonemappingMode _VolPreVal_mode; // 0xD8
		::System::Boolean _VolPreVal_toeStrength_overrideState; // 0xDC
		::System::Single _VolPreVal_toeStrength; // 0xE0
		::System::Boolean _VolPreVal_toeLength_overrideState; // 0xE4
		::System::Single _VolPreVal_toeLength; // 0xE8
		::System::Boolean _VolPreVal_shoulderStrength_overrideState; // 0xEC
		::System::Single _VolPreVal_shoulderStrength; // 0xF0
		::System::Boolean _VolPreVal_shoulderLength_overrideState; // 0xF4
		::System::Single _VolPreVal_shoulderLength; // 0xF8
		::System::Boolean _VolPreVal_shoulderAngle_overrideState; // 0xFC
		::System::Single _VolPreVal_shoulderAngle; // 0x100
		::System::Boolean _VolPreVal_customGamma_overrideState; // 0x104
		::System::Single _VolPreVal_customGamma; // 0x108
		::System::Single _TimelineCurveFirstVal_toeStrength; // 0x10C
		::System::Single _TimelineCurveLastVal_toeStrength; // 0x110
		::System::Single _TimelineCurveFirstVal_toeLength; // 0x114
		::System::Single _TimelineCurveLastVal_toeLength; // 0x118
		::System::Single _TimelineCurveFirstVal_shoulderStrength; // 0x11C
		::System::Single _TimelineCurveLastVal_shoulderStrength; // 0x120
		::System::Single _TimelineCurveFirstVal_shoulderLength; // 0x124
		::System::Single _TimelineCurveLastVal_shoulderLength; // 0x128
		::System::Single _TimelineCurveFirstVal_shoulderAngle; // 0x12C
		::System::Single _TimelineCurveLastVal_shoulderAngle; // 0x130
		::System::Single _TimelineCurveFirstVal_customGamma; // 0x134
		::System::Single _TimelineCurveLastVal_customGamma; // 0x138
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mode_FieldHandleType; // 0x13C
		::UnityEngine::NAPRenderPipeline0::TonemappingMode ESPP_mode; // 0x140
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toeStrength_FieldHandleType; // 0x144
		::System::Boolean ESPP_toeStrength_UseIt; // 0x148
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_toeStrength; // 0x150
		::System::Boolean ESPP_toeStrength_EnableFade; // 0x158
		::System::Boolean ESPP_toeStrength_EnableOverrideDefaultValue; // 0x159
		::System::Single ESPP_toeStrength_OverrideDefaultValue; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toeLength_FieldHandleType; // 0x160
		::System::Boolean ESPP_toeLength_UseIt; // 0x164
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_toeLength; // 0x168
		::System::Boolean ESPP_toeLength_EnableFade; // 0x170
		::System::Boolean ESPP_toeLength_EnableOverrideDefaultValue; // 0x171
		::System::Single ESPP_toeLength_OverrideDefaultValue; // 0x174
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shoulderStrength_FieldHandleType; // 0x178
		::System::Boolean ESPP_shoulderStrength_UseIt; // 0x17C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shoulderStrength; // 0x180
		::System::Boolean ESPP_shoulderStrength_EnableFade; // 0x188
		::System::Boolean ESPP_shoulderStrength_EnableOverrideDefaultValue; // 0x189
		::System::Single ESPP_shoulderStrength_OverrideDefaultValue; // 0x18C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shoulderLength_FieldHandleType; // 0x190
		::System::Boolean ESPP_shoulderLength_UseIt; // 0x194
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shoulderLength; // 0x198
		::System::Boolean ESPP_shoulderLength_EnableFade; // 0x1A0
		::System::Boolean ESPP_shoulderLength_EnableOverrideDefaultValue; // 0x1A1
		::System::Single ESPP_shoulderLength_OverrideDefaultValue; // 0x1A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shoulderAngle_FieldHandleType; // 0x1A8
		::System::Boolean ESPP_shoulderAngle_UseIt; // 0x1AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shoulderAngle; // 0x1B0
		::System::Boolean ESPP_shoulderAngle_EnableFade; // 0x1B8
		::System::Boolean ESPP_shoulderAngle_EnableOverrideDefaultValue; // 0x1B9
		::System::Single ESPP_shoulderAngle_OverrideDefaultValue; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_customGamma_FieldHandleType; // 0x1C0
		::System::Boolean ESPP_customGamma_UseIt; // 0x1C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_customGamma; // 0x1C8
		::System::Boolean ESPP_customGamma_EnableFade; // 0x1D0
		::System::Boolean ESPP_customGamma_EnableOverrideDefaultValue; // 0x1D1
		::System::Single ESPP_customGamma_OverrideDefaultValue; // 0x1D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_5_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_80313B77C31AD02B_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_522F2897D3370F6B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_522F2897D3370F6B_OFFSET))(this, a1);
		}

		::System::Void Method_5_31F1C58AB372DEB4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_31F1C58AB372DEB4_OFFSET))(this, a1);
		}

		::System::Void Method_5_58D68FEBA7B5A778(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_58D68FEBA7B5A778_OFFSET))(this, a1);
		}

		::System::Void Method_5_58D68FEBA7B5A778_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_58D68FEBA7B5A778_1_OFFSET))(this, a1);
		}
	};
}
