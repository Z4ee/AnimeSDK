#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityVignettes; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class Vignette; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x157FD020)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x157FD270)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x157FDBF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_594D45A47A873869_OFFSET UNITYSDK_OFFSET(0x157FF660)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x157FD260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x157FD470)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_EB4352D10DA7234E_OFFSET UNITYSDK_OFFSET(0x157FDFD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x15801740)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_F918726BB6E76D4D_1_OFFSET UNITYSDK_OFFSET(0x15800A50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_F918726BB6E76D4D_OFFSET UNITYSDK_OFFSET(0x158000C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE__CTOR_OFFSET UNITYSDK_OFFSET(0x158013E0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessVignette_TypeDefinitionIndex = 50500;

	class ESPostProcessVignette : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::Vignette*>
	{
	public:
		::MoleMole::Config::ConfigEntityVignettes* m_stAsset; // 0xB0
		::UnityEngine::Color _DefaultColor; // 0xB8
		::UnityEngine::Vector2 _DefaultCenter; // 0xC8
		::System::Single _DefaultIntensity; // 0xD0
		::System::Single _DefaultSmoothness; // 0xD4
		::System::Boolean _DefaultRounded; // 0xD8
		::UnityEngine::Color _VolDefault_color; // 0xDC
		::UnityEngine::Vector2 _VolDefault_center; // 0xEC
		::System::Single _VolDefault_intensity; // 0xF4
		::System::Single _VolDefault_smoothness; // 0xF8
		::System::Boolean _VolDefault_rounded; // 0xFC
		::System::Boolean _VolPreVal_color_overrideState; // 0xFD
		::UnityEngine::Color _VolPreVal_color; // 0x100
		::System::Boolean _VolPreVal_center_overrideState; // 0x110
		::UnityEngine::Vector2 _VolPreVal_center; // 0x114
		::System::Boolean _VolPreVal_intensity_overrideState; // 0x11C
		::System::Single _VolPreVal_intensity; // 0x120
		::System::Boolean _VolPreVal_smoothness_overrideState; // 0x124
		::System::Single _VolPreVal_smoothness; // 0x128
		::System::Boolean _VolPreVal_rounded_overrideState; // 0x12C
		::System::Boolean _VolPreVal_rounded; // 0x12D
		::UnityEngine::Color _TimelineCurveFirstVal_color; // 0x130
		::UnityEngine::Color _TimelineCurveLastVal_color; // 0x140
		::UnityEngine::Vector2 _TimelineCurveFirstVal_center; // 0x150
		::UnityEngine::Vector2 _TimelineCurveLastVal_center; // 0x158
		::System::Single _TimelineCurveFirstVal_intensity; // 0x160
		::System::Single _TimelineCurveLastVal_intensity; // 0x164
		::System::Single _TimelineCurveFirstVal_smoothness; // 0x168
		::System::Single _TimelineCurveLastVal_smoothness; // 0x16C
		::System::Boolean _TimelineCurveFirstVal_rounded; // 0x170
		::System::Boolean _TimelineCurveLastVal_rounded; // 0x171
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_color_KeyFrame_FieldHandleType; // 0x174
		::System::Boolean ESPP_color_KeyFrame_UseIt; // 0x178
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_color_KeyFrame; // 0x180
		::System::Boolean ESPP_color_KeyFrame_EnableFade; // 0x188
		::System::Boolean ESPP_color_KeyFrame_EnableOverrideDefaultValue; // 0x189
		::UnityEngine::Color ESPP_color_KeyFrame_OverrideDefaultValue; // 0x18C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_center_FieldHandleType; // 0x19C
		::System::Boolean ESPP_center_UseIt; // 0x1A0
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_center; // 0x1A8
		::System::Boolean ESPP_center_EnableFade; // 0x1B0
		::System::Boolean ESPP_center_EnableOverrideDefaultValue; // 0x1B1
		::UnityEngine::Vector2 ESPP_center_OverrideDefaultValue; // 0x1B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x1BC
		::System::Boolean ESPP_intensity_UseIt; // 0x1C0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x1C8
		::System::Boolean ESPP_intensity_EnableFade; // 0x1D0
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x1D1
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x1D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_smoothness_FieldHandleType; // 0x1D8
		::System::Boolean ESPP_smoothness_UseIt; // 0x1DC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_smoothness; // 0x1E0
		::System::Boolean ESPP_smoothness_EnableFade; // 0x1E8
		::System::Boolean ESPP_smoothness_EnableOverrideDefaultValue; // 0x1E9
		::System::Single ESPP_smoothness_OverrideDefaultValue; // 0x1EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rounded_FieldHandleType; // 0x1F0
		::System::Boolean ESPP_rounded_UseIt; // 0x1F4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_rounded; // 0x1F8
		::System::Boolean ESPP_rounded_EnableFade; // 0x200
		::System::Boolean ESPP_rounded_EnableOverrideDefaultValue; // 0x201
		::System::Boolean ESPP_rounded_OverrideDefaultValue; // 0x202
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_color_FieldHandleType; // 0x204
		::UnityEngine::Color ESPP_color; // 0x208

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_459C79521BFE514E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_459C79521BFE514E_OFFSET))(this, a1);
		}

		::System::Void Method_5_EB4352D10DA7234E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_EB4352D10DA7234E_OFFSET))(this, a1);
		}

		::System::Void Method_5_594D45A47A873869(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_594D45A47A873869_OFFSET))(this, a1);
		}

		::System::Void Method_5_F918726BB6E76D4D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_F918726BB6E76D4D_OFFSET))(this, a1);
		}

		::System::Void Method_5_F918726BB6E76D4D_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_F918726BB6E76D4D_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_F8C7231308CD2C82()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_F8C7231308CD2C82_OFFSET))(this);
		}
	};
}
