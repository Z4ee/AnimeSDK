#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityAutoExposureEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class AutoExposure; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1A37BB80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_1AB9D4E0D4B0F708_1_OFFSET UNITYSDK_OFFSET(0x1A37FAF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_1AB9D4E0D4B0F708_OFFSET UNITYSDK_OFFSET(0x1A37F0C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x1A37C800)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_3021F634E77C58A0_OFFSET UNITYSDK_OFFSET(0x1A37E5C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_522F2897D3370F6B_OFFSET UNITYSDK_OFFSET(0x1A37CC50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A37BDF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x1A37C030)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x1A37BE00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A380520)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessAutoExposure_TypeDefinitionIndex = 68767;

	class ESPostProcessAutoExposure : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::AutoExposure*>
	{
	public:
		::MoleMole::Config::ConfigEntityAutoExposureEffects* m_stAsset; // 0xB0
		::UnityEngine::Vector2 _VolDefault_Filtering; // 0xB8
		::UnityEngine::Vector2 _VolDefault_LuminanceRange; // 0xC0
		::System::Single _VolDefault_ExposureCompensation; // 0xC8
		::System::Boolean _VolDefault_ProgressiveEyeAdaptation; // 0xCC
		::System::Single _VolDefault_SpeedUp; // 0xD0
		::System::Single _VolDefault_SpeedDown; // 0xD4
		::System::Boolean _VolPreVal_Filtering_overrideState; // 0xD8
		::UnityEngine::Vector2 _VolPreVal_Filtering; // 0xDC
		::System::Boolean _VolPreVal_LuminanceRange_overrideState; // 0xE4
		::UnityEngine::Vector2 _VolPreVal_LuminanceRange; // 0xE8
		::System::Boolean _VolPreVal_ExposureCompensation_overrideState; // 0xF0
		::System::Single _VolPreVal_ExposureCompensation; // 0xF4
		::System::Boolean _VolPreVal_ProgressiveEyeAdaptation_overrideState; // 0xF8
		::System::Boolean _VolPreVal_ProgressiveEyeAdaptation; // 0xF9
		::System::Boolean _VolPreVal_SpeedUp_overrideState; // 0xFA
		::System::Single _VolPreVal_SpeedUp; // 0xFC
		::System::Boolean _VolPreVal_SpeedDown_overrideState; // 0x100
		::System::Single _VolPreVal_SpeedDown; // 0x104
		::UnityEngine::Vector2 _TimelineCurveFirstVal_Filtering; // 0x108
		::UnityEngine::Vector2 _TimelineCurveLastVal_Filtering; // 0x110
		::UnityEngine::Vector2 _TimelineCurveFirstVal_LuminanceRange; // 0x118
		::UnityEngine::Vector2 _TimelineCurveLastVal_LuminanceRange; // 0x120
		::System::Single _TimelineCurveFirstVal_ExposureCompensation; // 0x128
		::System::Single _TimelineCurveLastVal_ExposureCompensation; // 0x12C
		::System::Boolean _TimelineCurveFirstVal_ProgressiveEyeAdaptation; // 0x130
		::System::Boolean _TimelineCurveLastVal_ProgressiveEyeAdaptation; // 0x131
		::System::Single _TimelineCurveFirstVal_SpeedUp; // 0x134
		::System::Single _TimelineCurveLastVal_SpeedUp; // 0x138
		::System::Single _TimelineCurveFirstVal_SpeedDown; // 0x13C
		::System::Single _TimelineCurveLastVal_SpeedDown; // 0x140
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Filtering_FieldHandleType; // 0x144
		::System::Boolean ESPP_Filtering_UseIt; // 0x148
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_Filtering; // 0x150
		::System::Boolean ESPP_Filtering_EnableFade; // 0x158
		::System::Boolean ESPP_Filtering_EnableOverrideDefaultValue; // 0x159
		::UnityEngine::Vector2 ESPP_Filtering_OverrideDefaultValue; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_LuminanceRange_FieldHandleType; // 0x164
		::System::Boolean ESPP_LuminanceRange_UseIt; // 0x168
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_LuminanceRange; // 0x170
		::System::Boolean ESPP_LuminanceRange_EnableFade; // 0x178
		::System::Boolean ESPP_LuminanceRange_EnableOverrideDefaultValue; // 0x179
		::UnityEngine::Vector2 ESPP_LuminanceRange_OverrideDefaultValue; // 0x17C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ExposureCompensation_FieldHandleType; // 0x184
		::System::Boolean ESPP_ExposureCompensation_UseIt; // 0x188
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_ExposureCompensation; // 0x190
		::System::Boolean ESPP_ExposureCompensation_EnableFade; // 0x198
		::System::Boolean ESPP_ExposureCompensation_EnableOverrideDefaultValue; // 0x199
		::System::Single ESPP_ExposureCompensation_OverrideDefaultValue; // 0x19C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ProgressiveEyeAdaptation_FieldHandleType; // 0x1A0
		::System::Boolean ESPP_ProgressiveEyeAdaptation_UseIt; // 0x1A4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_ProgressiveEyeAdaptation; // 0x1A8
		::System::Boolean ESPP_ProgressiveEyeAdaptation_EnableFade; // 0x1B0
		::System::Boolean ESPP_ProgressiveEyeAdaptation_EnableOverrideDefaultValue; // 0x1B1
		::System::Boolean ESPP_ProgressiveEyeAdaptation_OverrideDefaultValue; // 0x1B2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_SpeedUp_FieldHandleType; // 0x1B4
		::System::Boolean ESPP_SpeedUp_UseIt; // 0x1B8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_SpeedUp; // 0x1C0
		::System::Boolean ESPP_SpeedUp_EnableFade; // 0x1C8
		::System::Boolean ESPP_SpeedUp_EnableOverrideDefaultValue; // 0x1C9
		::System::Single ESPP_SpeedUp_OverrideDefaultValue; // 0x1CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_SpeedDown_FieldHandleType; // 0x1D0
		::System::Boolean ESPP_SpeedDown_UseIt; // 0x1D4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_SpeedDown; // 0x1D8
		::System::Boolean ESPP_SpeedDown_EnableFade; // 0x1E0
		::System::Boolean ESPP_SpeedDown_EnableOverrideDefaultValue; // 0x1E1
		::System::Single ESPP_SpeedDown_OverrideDefaultValue; // 0x1E4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_522F2897D3370F6B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_522F2897D3370F6B_OFFSET))(this, a1);
		}

		::System::Void Method_5_3021F634E77C58A0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_3021F634E77C58A0_OFFSET))(this, a1);
		}

		::System::Void Method_5_1AB9D4E0D4B0F708(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_1AB9D4E0D4B0F708_OFFSET))(this, a1);
		}

		::System::Void Method_5_1AB9D4E0D4B0F708_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_1AB9D4E0D4B0F708_1_OFFSET))(this, a1);
		}
	};
}
