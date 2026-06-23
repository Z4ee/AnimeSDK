#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigEntityCullingEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class Culling; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x157DBE80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_1C99438FC0F67C2D_1_OFFSET UNITYSDK_OFFSET(0x157E7200)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_1C99438FC0F67C2D_OFFSET UNITYSDK_OFFSET(0x157E5860)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x157DDE80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x157DC2A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x157DC290)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_90F082773AF65045_OFFSET UNITYSDK_OFFSET(0x157DC650)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_A4D542D66439C65E_1_OFFSET UNITYSDK_OFFSET(0x157E3A90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_A4D542D66439C65E_OFFSET UNITYSDK_OFFSET(0x157DE980)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING__CTOR_OFFSET UNITYSDK_OFFSET(0x157E8BA0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessCulling_TypeDefinitionIndex = 63354;

	class ESPostProcessCulling : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::Culling*>
	{
	public:
		::MoleMole::Config::ConfigEntityCullingEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_EnableHizCulling; // 0xB8
		::System::Boolean _VolDefault_EnableShadowHizCulling; // 0xB9
		::System::Boolean _VolDefault_ForceUseSMAA; // 0xBA
		::System::Boolean _VolDefault_outlineOverrideGlobalConfig; // 0xBB
		::System::Boolean _VolDefault_BlitOutlineBeforeTransparent; // 0xBC
		::System::Boolean _VolDefault_outlineEnableMultiLayer; // 0xBD
		::System::Boolean _VolDefault_outlineUseSingleColor; // 0xBE
		::UnityEngine::Color _VolDefault_outlineSingleColor; // 0xC0
		::System::Boolean _VolDefault_outlineDisable; // 0xD0
		::System::Boolean _VolDefault_outlineFillInner; // 0xD1
		::System::Boolean _VolDefault_outlineFillInnerBehindScene; // 0xD2
		::UnityEngine::Color _VolDefault_outlineFillInnerColor; // 0xD4
		::System::Single _VolDefault_outlineFillInnerColorIntensity; // 0xE4
		::System::Single _VolDefault_outlineThickness; // 0xE8
		::System::Boolean _VolDefault_outlineFlicker; // 0xEC
		::System::Boolean _VolPreVal_EnableHizCulling_overrideState; // 0xED
		::System::Boolean _VolPreVal_EnableHizCulling; // 0xEE
		::System::Boolean _VolPreVal_EnableShadowHizCulling_overrideState; // 0xEF
		::System::Boolean _VolPreVal_EnableShadowHizCulling; // 0xF0
		::System::Boolean _VolPreVal_ForceUseSMAA_overrideState; // 0xF1
		::System::Boolean _VolPreVal_ForceUseSMAA; // 0xF2
		::System::Boolean _VolPreVal_outlineOverrideGlobalConfig_overrideState; // 0xF3
		::System::Boolean _VolPreVal_outlineOverrideGlobalConfig; // 0xF4
		::System::Boolean _VolPreVal_BlitOutlineBeforeTransparent_overrideState; // 0xF5
		::System::Boolean _VolPreVal_BlitOutlineBeforeTransparent; // 0xF6
		::System::Boolean _VolPreVal_outlineEnableMultiLayer_overrideState; // 0xF7
		::System::Boolean _VolPreVal_outlineEnableMultiLayer; // 0xF8
		::System::Boolean _VolPreVal_outlineUseSingleColor_overrideState; // 0xF9
		::System::Boolean _VolPreVal_outlineUseSingleColor; // 0xFA
		::System::Boolean _VolPreVal_outlineSingleColor_overrideState; // 0xFB
		::UnityEngine::Color _VolPreVal_outlineSingleColor; // 0xFC
		::System::Boolean _VolPreVal_outlineDisable_overrideState; // 0x10C
		::System::Boolean _VolPreVal_outlineDisable; // 0x10D
		::System::Boolean _VolPreVal_outlineFillInner_overrideState; // 0x10E
		::System::Boolean _VolPreVal_outlineFillInner; // 0x10F
		::System::Boolean _VolPreVal_outlineFillInnerBehindScene_overrideState; // 0x110
		::System::Boolean _VolPreVal_outlineFillInnerBehindScene; // 0x111
		::System::Boolean _VolPreVal_outlineFillInnerColor_overrideState; // 0x112
		::UnityEngine::Color _VolPreVal_outlineFillInnerColor; // 0x114
		::System::Boolean _VolPreVal_outlineFillInnerColorIntensity_overrideState; // 0x124
		::System::Single _VolPreVal_outlineFillInnerColorIntensity; // 0x128
		::System::Boolean _VolPreVal_outlineThickness_overrideState; // 0x12C
		::System::Single _VolPreVal_outlineThickness; // 0x130
		::System::Boolean _VolPreVal_outlineFlicker_overrideState; // 0x134
		::System::Boolean _VolPreVal_outlineFlicker; // 0x135
		::System::Boolean _TimelineCurveFirstVal_EnableHizCulling; // 0x136
		::System::Boolean _TimelineCurveLastVal_EnableHizCulling; // 0x137
		::System::Boolean _TimelineCurveFirstVal_EnableShadowHizCulling; // 0x138
		::System::Boolean _TimelineCurveLastVal_EnableShadowHizCulling; // 0x139
		::System::Boolean _TimelineCurveFirstVal_ForceUseSMAA; // 0x13A
		::System::Boolean _TimelineCurveLastVal_ForceUseSMAA; // 0x13B
		::System::Boolean _TimelineCurveFirstVal_outlineOverrideGlobalConfig; // 0x13C
		::System::Boolean _TimelineCurveLastVal_outlineOverrideGlobalConfig; // 0x13D
		::System::Boolean _TimelineCurveFirstVal_BlitOutlineBeforeTransparent; // 0x13E
		::System::Boolean _TimelineCurveLastVal_BlitOutlineBeforeTransparent; // 0x13F
		::System::Boolean _TimelineCurveFirstVal_outlineEnableMultiLayer; // 0x140
		::System::Boolean _TimelineCurveLastVal_outlineEnableMultiLayer; // 0x141
		::System::Boolean _TimelineCurveFirstVal_outlineUseSingleColor; // 0x142
		::System::Boolean _TimelineCurveLastVal_outlineUseSingleColor; // 0x143
		::UnityEngine::Color _TimelineCurveFirstVal_outlineSingleColor; // 0x144
		::UnityEngine::Color _TimelineCurveLastVal_outlineSingleColor; // 0x154
		::System::Boolean _TimelineCurveFirstVal_outlineDisable; // 0x164
		::System::Boolean _TimelineCurveLastVal_outlineDisable; // 0x165
		::System::Boolean _TimelineCurveFirstVal_outlineFillInner; // 0x166
		::System::Boolean _TimelineCurveLastVal_outlineFillInner; // 0x167
		::System::Boolean _TimelineCurveFirstVal_outlineFillInnerBehindScene; // 0x168
		::System::Boolean _TimelineCurveLastVal_outlineFillInnerBehindScene; // 0x169
		::UnityEngine::Color _TimelineCurveFirstVal_outlineFillInnerColor; // 0x16C
		::UnityEngine::Color _TimelineCurveLastVal_outlineFillInnerColor; // 0x17C
		::System::Single _TimelineCurveFirstVal_outlineFillInnerColorIntensity; // 0x18C
		::System::Single _TimelineCurveLastVal_outlineFillInnerColorIntensity; // 0x190
		::System::Single _TimelineCurveFirstVal_outlineThickness; // 0x194
		::System::Single _TimelineCurveLastVal_outlineThickness; // 0x198
		::System::Boolean _TimelineCurveFirstVal_outlineFlicker; // 0x19C
		::System::Boolean _TimelineCurveLastVal_outlineFlicker; // 0x19D
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_EnableHizCulling_FieldHandleType; // 0x1A0
		::System::Boolean ESPP_EnableHizCulling_UseIt; // 0x1A4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_EnableHizCulling; // 0x1A8
		::System::Boolean ESPP_EnableHizCulling_EnableFade; // 0x1B0
		::System::Boolean ESPP_EnableHizCulling_EnableOverrideDefaultValue; // 0x1B1
		::System::Boolean ESPP_EnableHizCulling_OverrideDefaultValue; // 0x1B2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_EnableShadowHizCulling_FieldHandleType; // 0x1B4
		::System::Boolean ESPP_EnableShadowHizCulling_UseIt; // 0x1B8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_EnableShadowHizCulling; // 0x1C0
		::System::Boolean ESPP_EnableShadowHizCulling_EnableFade; // 0x1C8
		::System::Boolean ESPP_EnableShadowHizCulling_EnableOverrideDefaultValue; // 0x1C9
		::System::Boolean ESPP_EnableShadowHizCulling_OverrideDefaultValue; // 0x1CA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ForceUseSMAA_FieldHandleType; // 0x1CC
		::System::Boolean ESPP_ForceUseSMAA_UseIt; // 0x1D0
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_ForceUseSMAA; // 0x1D8
		::System::Boolean ESPP_ForceUseSMAA_EnableFade; // 0x1E0
		::System::Boolean ESPP_ForceUseSMAA_EnableOverrideDefaultValue; // 0x1E1
		::System::Boolean ESPP_ForceUseSMAA_OverrideDefaultValue; // 0x1E2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineOverrideGlobalConfig_FieldHandleType; // 0x1E4
		::System::Boolean ESPP_outlineOverrideGlobalConfig_UseIt; // 0x1E8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineOverrideGlobalConfig; // 0x1F0
		::System::Boolean ESPP_outlineOverrideGlobalConfig_EnableFade; // 0x1F8
		::System::Boolean ESPP_outlineOverrideGlobalConfig_EnableOverrideDefaultValue; // 0x1F9
		::System::Boolean ESPP_outlineOverrideGlobalConfig_OverrideDefaultValue; // 0x1FA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_BlitOutlineBeforeTransparent_FieldHandleType; // 0x1FC
		::System::Boolean ESPP_BlitOutlineBeforeTransparent_UseIt; // 0x200
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_BlitOutlineBeforeTransparent; // 0x208
		::System::Boolean ESPP_BlitOutlineBeforeTransparent_EnableFade; // 0x210
		::System::Boolean ESPP_BlitOutlineBeforeTransparent_EnableOverrideDefaultValue; // 0x211
		::System::Boolean ESPP_BlitOutlineBeforeTransparent_OverrideDefaultValue; // 0x212
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineEnableMultiLayer_FieldHandleType; // 0x214
		::System::Boolean ESPP_outlineEnableMultiLayer_UseIt; // 0x218
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineEnableMultiLayer; // 0x220
		::System::Boolean ESPP_outlineEnableMultiLayer_EnableFade; // 0x228
		::System::Boolean ESPP_outlineEnableMultiLayer_EnableOverrideDefaultValue; // 0x229
		::System::Boolean ESPP_outlineEnableMultiLayer_OverrideDefaultValue; // 0x22A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineUseSingleColor_FieldHandleType; // 0x22C
		::System::Boolean ESPP_outlineUseSingleColor_UseIt; // 0x230
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineUseSingleColor; // 0x238
		::System::Boolean ESPP_outlineUseSingleColor_EnableFade; // 0x240
		::System::Boolean ESPP_outlineUseSingleColor_EnableOverrideDefaultValue; // 0x241
		::System::Boolean ESPP_outlineUseSingleColor_OverrideDefaultValue; // 0x242
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineSingleColor_FieldHandleType; // 0x244
		::System::Boolean ESPP_outlineSingleColor_UseIt; // 0x248
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_outlineSingleColor; // 0x250
		::System::Boolean ESPP_outlineSingleColor_EnableFade; // 0x258
		::System::Boolean ESPP_outlineSingleColor_EnableOverrideDefaultValue; // 0x259
		::UnityEngine::Color ESPP_outlineSingleColor_OverrideDefaultValue; // 0x25C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDisable_FieldHandleType; // 0x26C
		::System::Boolean ESPP_outlineDisable_UseIt; // 0x270
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineDisable; // 0x278
		::System::Boolean ESPP_outlineDisable_EnableFade; // 0x280
		::System::Boolean ESPP_outlineDisable_EnableOverrideDefaultValue; // 0x281
		::System::Boolean ESPP_outlineDisable_OverrideDefaultValue; // 0x282
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineFillInner_FieldHandleType; // 0x284
		::System::Boolean ESPP_outlineFillInner_UseIt; // 0x288
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineFillInner; // 0x290
		::System::Boolean ESPP_outlineFillInner_EnableFade; // 0x298
		::System::Boolean ESPP_outlineFillInner_EnableOverrideDefaultValue; // 0x299
		::System::Boolean ESPP_outlineFillInner_OverrideDefaultValue; // 0x29A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineFillInnerBehindScene_FieldHandleType; // 0x29C
		::System::Boolean ESPP_outlineFillInnerBehindScene_UseIt; // 0x2A0
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineFillInnerBehindScene; // 0x2A8
		::System::Boolean ESPP_outlineFillInnerBehindScene_EnableFade; // 0x2B0
		::System::Boolean ESPP_outlineFillInnerBehindScene_EnableOverrideDefaultValue; // 0x2B1
		::System::Boolean ESPP_outlineFillInnerBehindScene_OverrideDefaultValue; // 0x2B2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineFillInnerColor_FieldHandleType; // 0x2B4
		::System::Boolean ESPP_outlineFillInnerColor_UseIt; // 0x2B8
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_outlineFillInnerColor; // 0x2C0
		::System::Boolean ESPP_outlineFillInnerColor_EnableFade; // 0x2C8
		::System::Boolean ESPP_outlineFillInnerColor_EnableOverrideDefaultValue; // 0x2C9
		::UnityEngine::Color ESPP_outlineFillInnerColor_OverrideDefaultValue; // 0x2CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineFillInnerColorIntensity_FieldHandleType; // 0x2DC
		::System::Boolean ESPP_outlineFillInnerColorIntensity_UseIt; // 0x2E0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_outlineFillInnerColorIntensity; // 0x2E8
		::System::Boolean ESPP_outlineFillInnerColorIntensity_EnableFade; // 0x2F0
		::System::Boolean ESPP_outlineFillInnerColorIntensity_EnableOverrideDefaultValue; // 0x2F1
		::System::Single ESPP_outlineFillInnerColorIntensity_OverrideDefaultValue; // 0x2F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineThickness_FieldHandleType; // 0x2F8
		::System::Boolean ESPP_outlineThickness_UseIt; // 0x2FC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_outlineThickness; // 0x300
		::System::Boolean ESPP_outlineThickness_EnableFade; // 0x308
		::System::Boolean ESPP_outlineThickness_EnableOverrideDefaultValue; // 0x309
		::System::Single ESPP_outlineThickness_OverrideDefaultValue; // 0x30C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineFlicker_FieldHandleType; // 0x310
		::System::Boolean ESPP_outlineFlicker_UseIt; // 0x314
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineFlicker; // 0x318
		::System::Boolean ESPP_outlineFlicker_EnableFade; // 0x320
		::System::Boolean ESPP_outlineFlicker_EnableOverrideDefaultValue; // 0x321
		::System::Boolean ESPP_outlineFlicker_OverrideDefaultValue; // 0x322

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_90F082773AF65045()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_90F082773AF65045_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_A4D542D66439C65E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_A4D542D66439C65E_OFFSET))(this, a1);
		}

		::System::Void Method_5_A4D542D66439C65E_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_A4D542D66439C65E_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_1C99438FC0F67C2D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_1C99438FC0F67C2D_OFFSET))(this, a1);
		}

		::System::Void Method_5_1C99438FC0F67C2D_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_1C99438FC0F67C2D_1_OFFSET))(this, a1);
		}
	};
}
