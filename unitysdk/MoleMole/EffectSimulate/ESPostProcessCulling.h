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

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1BD83FD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_1C99438FC0F67C2D_1_OFFSET UNITYSDK_OFFSET(0x1BD908C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_1C99438FC0F67C2D_OFFSET UNITYSDK_OFFSET(0x1BD8ECB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_2561DC986DD32699_OFFSET UNITYSDK_OFFSET(0x1BD8CBC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x1BD86290)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_3021F634E77C58A0_OFFSET UNITYSDK_OFFSET(0x1BD86FA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x1BD84440)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1BD84430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_90F082773AF65045_OFFSET UNITYSDK_OFFSET(0x1BD84840)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD924D0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessCulling_TypeDefinitionIndex = 78307;

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
		::UnityEngine::Color _VolDefault_outlineSingleColor1; // 0xF0
		::UnityEngine::Color _VolDefault_outlineSingleColor2; // 0x100
		::System::Boolean _VolPreVal_EnableHizCulling_overrideState; // 0x110
		::System::Boolean _VolPreVal_EnableHizCulling; // 0x111
		::System::Boolean _VolPreVal_EnableShadowHizCulling_overrideState; // 0x112
		::System::Boolean _VolPreVal_EnableShadowHizCulling; // 0x113
		::System::Boolean _VolPreVal_ForceUseSMAA_overrideState; // 0x114
		::System::Boolean _VolPreVal_ForceUseSMAA; // 0x115
		::System::Boolean _VolPreVal_outlineOverrideGlobalConfig_overrideState; // 0x116
		::System::Boolean _VolPreVal_outlineOverrideGlobalConfig; // 0x117
		::System::Boolean _VolPreVal_BlitOutlineBeforeTransparent_overrideState; // 0x118
		::System::Boolean _VolPreVal_BlitOutlineBeforeTransparent; // 0x119
		::System::Boolean _VolPreVal_outlineEnableMultiLayer_overrideState; // 0x11A
		::System::Boolean _VolPreVal_outlineEnableMultiLayer; // 0x11B
		::System::Boolean _VolPreVal_outlineUseSingleColor_overrideState; // 0x11C
		::System::Boolean _VolPreVal_outlineUseSingleColor; // 0x11D
		::System::Boolean _VolPreVal_outlineSingleColor_overrideState; // 0x11E
		::UnityEngine::Color _VolPreVal_outlineSingleColor; // 0x120
		::System::Boolean _VolPreVal_outlineDisable_overrideState; // 0x130
		::System::Boolean _VolPreVal_outlineDisable; // 0x131
		::System::Boolean _VolPreVal_outlineFillInner_overrideState; // 0x132
		::System::Boolean _VolPreVal_outlineFillInner; // 0x133
		::System::Boolean _VolPreVal_outlineFillInnerBehindScene_overrideState; // 0x134
		::System::Boolean _VolPreVal_outlineFillInnerBehindScene; // 0x135
		::System::Boolean _VolPreVal_outlineFillInnerColor_overrideState; // 0x136
		::UnityEngine::Color _VolPreVal_outlineFillInnerColor; // 0x138
		::System::Boolean _VolPreVal_outlineFillInnerColorIntensity_overrideState; // 0x148
		::System::Single _VolPreVal_outlineFillInnerColorIntensity; // 0x14C
		::System::Boolean _VolPreVal_outlineThickness_overrideState; // 0x150
		::System::Single _VolPreVal_outlineThickness; // 0x154
		::System::Boolean _VolPreVal_outlineFlicker_overrideState; // 0x158
		::System::Boolean _VolPreVal_outlineFlicker; // 0x159
		::System::Boolean _VolPreVal_outlineSingleColor1_overrideState; // 0x15A
		::UnityEngine::Color _VolPreVal_outlineSingleColor1; // 0x15C
		::System::Boolean _VolPreVal_outlineSingleColor2_overrideState; // 0x16C
		::UnityEngine::Color _VolPreVal_outlineSingleColor2; // 0x170
		::System::Boolean _TimelineCurveFirstVal_EnableHizCulling; // 0x180
		::System::Boolean _TimelineCurveLastVal_EnableHizCulling; // 0x181
		::System::Boolean _TimelineCurveFirstVal_EnableShadowHizCulling; // 0x182
		::System::Boolean _TimelineCurveLastVal_EnableShadowHizCulling; // 0x183
		::System::Boolean _TimelineCurveFirstVal_ForceUseSMAA; // 0x184
		::System::Boolean _TimelineCurveLastVal_ForceUseSMAA; // 0x185
		::System::Boolean _TimelineCurveFirstVal_outlineOverrideGlobalConfig; // 0x186
		::System::Boolean _TimelineCurveLastVal_outlineOverrideGlobalConfig; // 0x187
		::System::Boolean _TimelineCurveFirstVal_BlitOutlineBeforeTransparent; // 0x188
		::System::Boolean _TimelineCurveLastVal_BlitOutlineBeforeTransparent; // 0x189
		::System::Boolean _TimelineCurveFirstVal_outlineEnableMultiLayer; // 0x18A
		::System::Boolean _TimelineCurveLastVal_outlineEnableMultiLayer; // 0x18B
		::System::Boolean _TimelineCurveFirstVal_outlineUseSingleColor; // 0x18C
		::System::Boolean _TimelineCurveLastVal_outlineUseSingleColor; // 0x18D
		::UnityEngine::Color _TimelineCurveFirstVal_outlineSingleColor; // 0x190
		::UnityEngine::Color _TimelineCurveLastVal_outlineSingleColor; // 0x1A0
		::System::Boolean _TimelineCurveFirstVal_outlineDisable; // 0x1B0
		::System::Boolean _TimelineCurveLastVal_outlineDisable; // 0x1B1
		::System::Boolean _TimelineCurveFirstVal_outlineFillInner; // 0x1B2
		::System::Boolean _TimelineCurveLastVal_outlineFillInner; // 0x1B3
		::System::Boolean _TimelineCurveFirstVal_outlineFillInnerBehindScene; // 0x1B4
		::System::Boolean _TimelineCurveLastVal_outlineFillInnerBehindScene; // 0x1B5
		::UnityEngine::Color _TimelineCurveFirstVal_outlineFillInnerColor; // 0x1B8
		::UnityEngine::Color _TimelineCurveLastVal_outlineFillInnerColor; // 0x1C8
		::System::Single _TimelineCurveFirstVal_outlineFillInnerColorIntensity; // 0x1D8
		::System::Single _TimelineCurveLastVal_outlineFillInnerColorIntensity; // 0x1DC
		::System::Single _TimelineCurveFirstVal_outlineThickness; // 0x1E0
		::System::Single _TimelineCurveLastVal_outlineThickness; // 0x1E4
		::System::Boolean _TimelineCurveFirstVal_outlineFlicker; // 0x1E8
		::System::Boolean _TimelineCurveLastVal_outlineFlicker; // 0x1E9
		::UnityEngine::Color _TimelineCurveFirstVal_outlineSingleColor1; // 0x1EC
		::UnityEngine::Color _TimelineCurveLastVal_outlineSingleColor1; // 0x1FC
		::UnityEngine::Color _TimelineCurveFirstVal_outlineSingleColor2; // 0x20C
		::UnityEngine::Color _TimelineCurveLastVal_outlineSingleColor2; // 0x21C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_EnableHizCulling_FieldHandleType; // 0x22C
		::System::Boolean ESPP_EnableHizCulling_UseIt; // 0x230
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_EnableHizCulling; // 0x238
		::System::Boolean ESPP_EnableHizCulling_EnableFade; // 0x240
		::System::Boolean ESPP_EnableHizCulling_EnableOverrideDefaultValue; // 0x241
		::System::Boolean ESPP_EnableHizCulling_OverrideDefaultValue; // 0x242
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_EnableShadowHizCulling_FieldHandleType; // 0x244
		::System::Boolean ESPP_EnableShadowHizCulling_UseIt; // 0x248
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_EnableShadowHizCulling; // 0x250
		::System::Boolean ESPP_EnableShadowHizCulling_EnableFade; // 0x258
		::System::Boolean ESPP_EnableShadowHizCulling_EnableOverrideDefaultValue; // 0x259
		::System::Boolean ESPP_EnableShadowHizCulling_OverrideDefaultValue; // 0x25A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ForceUseSMAA_FieldHandleType; // 0x25C
		::System::Boolean ESPP_ForceUseSMAA_UseIt; // 0x260
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_ForceUseSMAA; // 0x268
		::System::Boolean ESPP_ForceUseSMAA_EnableFade; // 0x270
		::System::Boolean ESPP_ForceUseSMAA_EnableOverrideDefaultValue; // 0x271
		::System::Boolean ESPP_ForceUseSMAA_OverrideDefaultValue; // 0x272
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineOverrideGlobalConfig_FieldHandleType; // 0x274
		::System::Boolean ESPP_outlineOverrideGlobalConfig_UseIt; // 0x278
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineOverrideGlobalConfig; // 0x280
		::System::Boolean ESPP_outlineOverrideGlobalConfig_EnableFade; // 0x288
		::System::Boolean ESPP_outlineOverrideGlobalConfig_EnableOverrideDefaultValue; // 0x289
		::System::Boolean ESPP_outlineOverrideGlobalConfig_OverrideDefaultValue; // 0x28A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_BlitOutlineBeforeTransparent_FieldHandleType; // 0x28C
		::System::Boolean ESPP_BlitOutlineBeforeTransparent_UseIt; // 0x290
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_BlitOutlineBeforeTransparent; // 0x298
		::System::Boolean ESPP_BlitOutlineBeforeTransparent_EnableFade; // 0x2A0
		::System::Boolean ESPP_BlitOutlineBeforeTransparent_EnableOverrideDefaultValue; // 0x2A1
		::System::Boolean ESPP_BlitOutlineBeforeTransparent_OverrideDefaultValue; // 0x2A2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineEnableMultiLayer_FieldHandleType; // 0x2A4
		::System::Boolean ESPP_outlineEnableMultiLayer_UseIt; // 0x2A8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineEnableMultiLayer; // 0x2B0
		::System::Boolean ESPP_outlineEnableMultiLayer_EnableFade; // 0x2B8
		::System::Boolean ESPP_outlineEnableMultiLayer_EnableOverrideDefaultValue; // 0x2B9
		::System::Boolean ESPP_outlineEnableMultiLayer_OverrideDefaultValue; // 0x2BA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineUseSingleColor_FieldHandleType; // 0x2BC
		::System::Boolean ESPP_outlineUseSingleColor_UseIt; // 0x2C0
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineUseSingleColor; // 0x2C8
		::System::Boolean ESPP_outlineUseSingleColor_EnableFade; // 0x2D0
		::System::Boolean ESPP_outlineUseSingleColor_EnableOverrideDefaultValue; // 0x2D1
		::System::Boolean ESPP_outlineUseSingleColor_OverrideDefaultValue; // 0x2D2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineSingleColor_FieldHandleType; // 0x2D4
		::System::Boolean ESPP_outlineSingleColor_UseIt; // 0x2D8
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_outlineSingleColor; // 0x2E0
		::System::Boolean ESPP_outlineSingleColor_EnableFade; // 0x2E8
		::System::Boolean ESPP_outlineSingleColor_EnableOverrideDefaultValue; // 0x2E9
		::UnityEngine::Color ESPP_outlineSingleColor_OverrideDefaultValue; // 0x2EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDisable_FieldHandleType; // 0x2FC
		::System::Boolean ESPP_outlineDisable_UseIt; // 0x300
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineDisable; // 0x308
		::System::Boolean ESPP_outlineDisable_EnableFade; // 0x310
		::System::Boolean ESPP_outlineDisable_EnableOverrideDefaultValue; // 0x311
		::System::Boolean ESPP_outlineDisable_OverrideDefaultValue; // 0x312
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineFillInner_FieldHandleType; // 0x314
		::System::Boolean ESPP_outlineFillInner_UseIt; // 0x318
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineFillInner; // 0x320
		::System::Boolean ESPP_outlineFillInner_EnableFade; // 0x328
		::System::Boolean ESPP_outlineFillInner_EnableOverrideDefaultValue; // 0x329
		::System::Boolean ESPP_outlineFillInner_OverrideDefaultValue; // 0x32A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineFillInnerBehindScene_FieldHandleType; // 0x32C
		::System::Boolean ESPP_outlineFillInnerBehindScene_UseIt; // 0x330
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineFillInnerBehindScene; // 0x338
		::System::Boolean ESPP_outlineFillInnerBehindScene_EnableFade; // 0x340
		::System::Boolean ESPP_outlineFillInnerBehindScene_EnableOverrideDefaultValue; // 0x341
		::System::Boolean ESPP_outlineFillInnerBehindScene_OverrideDefaultValue; // 0x342
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineFillInnerColor_FieldHandleType; // 0x344
		::System::Boolean ESPP_outlineFillInnerColor_UseIt; // 0x348
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_outlineFillInnerColor; // 0x350
		::System::Boolean ESPP_outlineFillInnerColor_EnableFade; // 0x358
		::System::Boolean ESPP_outlineFillInnerColor_EnableOverrideDefaultValue; // 0x359
		::UnityEngine::Color ESPP_outlineFillInnerColor_OverrideDefaultValue; // 0x35C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineFillInnerColorIntensity_FieldHandleType; // 0x36C
		::System::Boolean ESPP_outlineFillInnerColorIntensity_UseIt; // 0x370
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_outlineFillInnerColorIntensity; // 0x378
		::System::Boolean ESPP_outlineFillInnerColorIntensity_EnableFade; // 0x380
		::System::Boolean ESPP_outlineFillInnerColorIntensity_EnableOverrideDefaultValue; // 0x381
		::System::Single ESPP_outlineFillInnerColorIntensity_OverrideDefaultValue; // 0x384
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineThickness_FieldHandleType; // 0x388
		::System::Boolean ESPP_outlineThickness_UseIt; // 0x38C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_outlineThickness; // 0x390
		::System::Boolean ESPP_outlineThickness_EnableFade; // 0x398
		::System::Boolean ESPP_outlineThickness_EnableOverrideDefaultValue; // 0x399
		::System::Single ESPP_outlineThickness_OverrideDefaultValue; // 0x39C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineFlicker_FieldHandleType; // 0x3A0
		::System::Boolean ESPP_outlineFlicker_UseIt; // 0x3A4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineFlicker; // 0x3A8
		::System::Boolean ESPP_outlineFlicker_EnableFade; // 0x3B0
		::System::Boolean ESPP_outlineFlicker_EnableOverrideDefaultValue; // 0x3B1
		::System::Boolean ESPP_outlineFlicker_OverrideDefaultValue; // 0x3B2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineSingleColor1_FieldHandleType; // 0x3B4
		::System::Boolean ESPP_outlineSingleColor1_UseIt; // 0x3B8
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_outlineSingleColor1; // 0x3C0
		::System::Boolean ESPP_outlineSingleColor1_EnableFade; // 0x3C8
		::System::Boolean ESPP_outlineSingleColor1_EnableOverrideDefaultValue; // 0x3C9
		::UnityEngine::Color ESPP_outlineSingleColor1_OverrideDefaultValue; // 0x3CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineSingleColor2_FieldHandleType; // 0x3DC
		::System::Boolean ESPP_outlineSingleColor2_UseIt; // 0x3E0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_outlineSingleColor2; // 0x3E8
		::System::Boolean ESPP_outlineSingleColor2_EnableFade; // 0x3F0
		::System::Boolean ESPP_outlineSingleColor2_EnableOverrideDefaultValue; // 0x3F1
		::UnityEngine::Color ESPP_outlineSingleColor2_OverrideDefaultValue; // 0x3F4

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

		::System::Void Method_5_3021F634E77C58A0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_3021F634E77C58A0_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_2561DC986DD32699_OFFSET))(this, a1);
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
