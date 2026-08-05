#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigChromaticAberrations; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x162817B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_1AEC14D3B3CAC7BB_1_OFFSET UNITYSDK_OFFSET(0x16287300)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_1AEC14D3B3CAC7BB_OFFSET UNITYSDK_OFFSET(0x16286520)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x16282830)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x16281AB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_522F2897D3370F6B_OFFSET UNITYSDK_OFFSET(0x16282F80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_63E3E26A3D57F57D_OFFSET UNITYSDK_OFFSET(0x162855D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16281AA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_A064B5913DBF181F_OFFSET UNITYSDK_OFFSET(0x16281D50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION__CTOR_OFFSET UNITYSDK_OFFSET(0x162880E0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessChromaticAberration_TypeDefinitionIndex = 77225;

	class ESPostProcessChromaticAberration : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::ChromaticAberration*>
	{
	public:
		::MoleMole::Config::ConfigChromaticAberrations* m_stAsset; // 0xB0
		::System::Single _DefaultIntensity; // 0xB8
		::System::Single _VolDefault_intensity; // 0xBC
		::UnityEngine::Vector2 _VolDefault_center; // 0xC0
		::System::Single _VolDefault_power; // 0xC8
		::UnityEngine::Color _VolDefault_ColorR; // 0xCC
		::System::Single _VolDefault_PowerR; // 0xDC
		::UnityEngine::Color _VolDefault_ColorG; // 0xE0
		::System::Single _VolDefault_PowerG; // 0xF0
		::UnityEngine::Color _VolDefault_ColorB; // 0xF4
		::System::Single _VolDefault_PowerB; // 0x104
		::System::Boolean _VolPreVal_intensity_overrideState; // 0x108
		::System::Single _VolPreVal_intensity; // 0x10C
		::System::Boolean _VolPreVal_center_overrideState; // 0x110
		::UnityEngine::Vector2 _VolPreVal_center; // 0x114
		::System::Boolean _VolPreVal_power_overrideState; // 0x11C
		::System::Single _VolPreVal_power; // 0x120
		::System::Boolean _VolPreVal_ColorR_overrideState; // 0x124
		::UnityEngine::Color _VolPreVal_ColorR; // 0x128
		::System::Boolean _VolPreVal_PowerR_overrideState; // 0x138
		::System::Single _VolPreVal_PowerR; // 0x13C
		::System::Boolean _VolPreVal_ColorG_overrideState; // 0x140
		::UnityEngine::Color _VolPreVal_ColorG; // 0x144
		::System::Boolean _VolPreVal_PowerG_overrideState; // 0x154
		::System::Single _VolPreVal_PowerG; // 0x158
		::System::Boolean _VolPreVal_ColorB_overrideState; // 0x15C
		::UnityEngine::Color _VolPreVal_ColorB; // 0x160
		::System::Boolean _VolPreVal_PowerB_overrideState; // 0x170
		::System::Single _VolPreVal_PowerB; // 0x174
		::System::Single _TimelineCurveFirstVal_intensity; // 0x178
		::System::Single _TimelineCurveLastVal_intensity; // 0x17C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_center; // 0x180
		::UnityEngine::Vector2 _TimelineCurveLastVal_center; // 0x188
		::System::Single _TimelineCurveFirstVal_power; // 0x190
		::System::Single _TimelineCurveLastVal_power; // 0x194
		::UnityEngine::Color _TimelineCurveFirstVal_ColorR; // 0x198
		::UnityEngine::Color _TimelineCurveLastVal_ColorR; // 0x1A8
		::System::Single _TimelineCurveFirstVal_PowerR; // 0x1B8
		::System::Single _TimelineCurveLastVal_PowerR; // 0x1BC
		::UnityEngine::Color _TimelineCurveFirstVal_ColorG; // 0x1C0
		::UnityEngine::Color _TimelineCurveLastVal_ColorG; // 0x1D0
		::System::Single _TimelineCurveFirstVal_PowerG; // 0x1E0
		::System::Single _TimelineCurveLastVal_PowerG; // 0x1E4
		::UnityEngine::Color _TimelineCurveFirstVal_ColorB; // 0x1E8
		::UnityEngine::Color _TimelineCurveLastVal_ColorB; // 0x1F8
		::System::Single _TimelineCurveFirstVal_PowerB; // 0x208
		::System::Single _TimelineCurveLastVal_PowerB; // 0x20C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x210
		::System::Boolean ESPP_intensity_UseIt; // 0x214
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x218
		::System::Boolean ESPP_intensity_EnableFade; // 0x220
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x221
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x224
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_center_FieldHandleType; // 0x228
		::System::Boolean ESPP_center_UseIt; // 0x22C
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_center; // 0x230
		::System::Boolean ESPP_center_EnableFade; // 0x238
		::System::Boolean ESPP_center_EnableOverrideDefaultValue; // 0x239
		::UnityEngine::Vector2 ESPP_center_OverrideDefaultValue; // 0x23C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_power_FieldHandleType; // 0x244
		::System::Boolean ESPP_power_UseIt; // 0x248
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_power; // 0x250
		::System::Boolean ESPP_power_EnableFade; // 0x258
		::System::Boolean ESPP_power_EnableOverrideDefaultValue; // 0x259
		::System::Single ESPP_power_OverrideDefaultValue; // 0x25C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ColorR_FieldHandleType; // 0x260
		::System::Boolean ESPP_ColorR_UseIt; // 0x264
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ColorR; // 0x268
		::System::Boolean ESPP_ColorR_EnableFade; // 0x270
		::System::Boolean ESPP_ColorR_EnableOverrideDefaultValue; // 0x271
		::UnityEngine::Color ESPP_ColorR_OverrideDefaultValue; // 0x274
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PowerR_FieldHandleType; // 0x284
		::System::Boolean ESPP_PowerR_UseIt; // 0x288
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PowerR; // 0x290
		::System::Boolean ESPP_PowerR_EnableFade; // 0x298
		::System::Boolean ESPP_PowerR_EnableOverrideDefaultValue; // 0x299
		::System::Single ESPP_PowerR_OverrideDefaultValue; // 0x29C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ColorG_FieldHandleType; // 0x2A0
		::System::Boolean ESPP_ColorG_UseIt; // 0x2A4
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ColorG; // 0x2A8
		::System::Boolean ESPP_ColorG_EnableFade; // 0x2B0
		::System::Boolean ESPP_ColorG_EnableOverrideDefaultValue; // 0x2B1
		::UnityEngine::Color ESPP_ColorG_OverrideDefaultValue; // 0x2B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PowerG_FieldHandleType; // 0x2C4
		::System::Boolean ESPP_PowerG_UseIt; // 0x2C8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PowerG; // 0x2D0
		::System::Boolean ESPP_PowerG_EnableFade; // 0x2D8
		::System::Boolean ESPP_PowerG_EnableOverrideDefaultValue; // 0x2D9
		::System::Single ESPP_PowerG_OverrideDefaultValue; // 0x2DC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ColorB_FieldHandleType; // 0x2E0
		::System::Boolean ESPP_ColorB_UseIt; // 0x2E4
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ColorB; // 0x2E8
		::System::Boolean ESPP_ColorB_EnableFade; // 0x2F0
		::System::Boolean ESPP_ColorB_EnableOverrideDefaultValue; // 0x2F1
		::UnityEngine::Color ESPP_ColorB_OverrideDefaultValue; // 0x2F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PowerB_FieldHandleType; // 0x304
		::System::Boolean ESPP_PowerB_UseIt; // 0x308
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PowerB; // 0x310
		::System::Boolean ESPP_PowerB_EnableFade; // 0x318
		::System::Boolean ESPP_PowerB_EnableOverrideDefaultValue; // 0x319
		::System::Single ESPP_PowerB_OverrideDefaultValue; // 0x31C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_5_A064B5913DBF181F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_A064B5913DBF181F_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_522F2897D3370F6B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_522F2897D3370F6B_OFFSET))(this, a1);
		}

		::System::Void Method_5_63E3E26A3D57F57D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_63E3E26A3D57F57D_OFFSET))(this, a1);
		}

		::System::Void Method_5_1AEC14D3B3CAC7BB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_1AEC14D3B3CAC7BB_OFFSET))(this, a1);
		}

		::System::Void Method_5_1AEC14D3B3CAC7BB_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_1AEC14D3B3CAC7BB_1_OFFSET))(this, a1);
		}
	};
}
