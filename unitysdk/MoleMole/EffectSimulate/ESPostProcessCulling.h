#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigEntityCullingEffects; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class Culling; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x17560760)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17562840)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_13D78D8CCC5186FB_OFFSET UNITYSDK_OFFSET(0x17561D20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_1C99438FC0F67C2D_1_OFFSET UNITYSDK_OFFSET(0x1755ED80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_1C99438FC0F67C2D_OFFSET UNITYSDK_OFFSET(0x1755D3A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x17562860)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x175629A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x17562A60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x175611F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x17561130)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x17553C80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x17561420)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x17561350)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x175612F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x17562B00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x175629B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x17553800)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x17561680)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x175558E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x17562AF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17562830)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x17561230)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x175613B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x17561180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_90F082773AF65045_OFFSET UNITYSDK_OFFSET(0x17554070)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x17560A90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x17562760)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x175612A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_A4D542D66439C65E_OFFSET UNITYSDK_OFFSET(0x17556430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x17562900)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x17562750)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_B22DDFD266DDE41C_OFFSET UNITYSDK_OFFSET(0x17561470)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x175609A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x175629C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x17561010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x175627F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_BEB6D3AE6B2F04A5_OFFSET UNITYSDK_OFFSET(0x1755B580)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x175629D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17553C40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x175610E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x17562730)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x17562910)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x17562850)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x17562740)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING__CTOR_OFFSET UNITYSDK_OFFSET(0x17561F30)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessCulling_TypeDefinitionIndex = 79242;

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

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_90F082773AF65045()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_90F082773AF65045_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_A4D542D66439C65E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_A4D542D66439C65E_OFFSET))(this, a1);
		}

		::System::Void Method_5_BEB6D3AE6B2F04A5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_BEB6D3AE6B2F04A5_OFFSET))(this, a1);
		}

		::System::Void Method_5_1C99438FC0F67C2D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_1C99438FC0F67C2D_OFFSET))(this, a1);
		}

		::System::Void Method_5_1C99438FC0F67C2D_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_1C99438FC0F67C2D_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_03C4FFAD29DE0852()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_03C4FFAD29DE0852_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_B22DDFD266DDE41C(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_B22DDFD266DDE41C_OFFSET))(this, a1);
		}

		::System::Void Method_5_6BA7BB45F0BA72F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_6BA7BB45F0BA72F4_OFFSET))(this);
		}

		::System::Void Method_5_13D78D8CCC5186FB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_13D78D8CCC5186FB_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCULLING_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}
	};
}
