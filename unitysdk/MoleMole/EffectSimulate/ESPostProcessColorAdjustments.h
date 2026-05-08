#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigEntityColorAdjustments; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ColorAdjustments; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16D0BE30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16D0C160)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x16D0C050)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x16D0C0A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16D0AC10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x16D0AB50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_438300467EDE6B0B_OFFSET UNITYSDK_OFFSET(0x16D0AE80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x16D00A70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x16D0AE30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x16D0AD60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x16D0AD00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x16D0BE20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x16D0C060)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_58D68FEBA7B5A778_OFFSET UNITYSDK_OFFSET(0x16D0B580)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_59791C706EFFC2BA_1_OFFSET UNITYSDK_OFFSET(0x16D07EC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_59791C706EFFC2BA_2_OFFSET UNITYSDK_OFFSET(0x16D09090)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_59791C706EFFC2BA_OFFSET UNITYSDK_OFFSET(0x16D02980)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x16D00680)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x16D0B030)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x16D020D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x16D0C150)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16D0C080)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x16D0AC50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x16D0ADC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x16D0ABA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x16D0A530)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x16D0BEE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16D0ACC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x16D0C070)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x16D0BED0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x16D0A440)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x16D0C040)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x16D0AA30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x16D0BF70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16D0BFB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16D00A30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x16D0AB00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x16D00EB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x16D0C130)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x16D0BE40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x16D0C140)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x16D0C090)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_ECCE1872B868F9DC_OFFSET UNITYSDK_OFFSET(0x16D06790)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x16D0A260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x16D0B730)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessColorAdjustments_TypeDefinitionIndex = 78806;

	class ESPostProcessColorAdjustments : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::ColorAdjustments*>
	{
	public:
		::MoleMole::Config::ConfigEntityColorAdjustments* m_stAsset; // 0xB0
		::System::Single _DefaultPostExposure; // 0xB8
		::System::Single _DefaultContrast; // 0xBC
		::UnityEngine::Color _DefaultColorFilter; // 0xC0
		::System::Single _DefaultHueShift; // 0xD0
		::System::Single _DefaultSaturation; // 0xD4
		::System::Single _DefaultDesaturate; // 0xD8
		::System::Boolean _DefaultApplyLutToSkybox; // 0xDC
		::System::Single _DefaultSkySaturation; // 0xE0
		::System::Single _DefaultSkyContrast; // 0xE4
		::System::Boolean _VolDefault_UseSceneDesaturateMask; // 0xE8
		::System::Single _VolDefault_postExposure; // 0xEC
		::System::Single _VolDefault_contrast; // 0xF0
		::UnityEngine::Color _VolDefault_colorFilter; // 0xF4
		::System::Single _VolDefault_hueShift; // 0x104
		::System::Single _VolDefault_saturation; // 0x108
		::System::Single _VolDefault_desaturate; // 0x10C
		::System::Boolean _VolDefault_applyLutToSkybox; // 0x110
		::System::Single _VolDefault_skySaturation; // 0x114
		::System::Single _VolDefault_skyContrast; // 0x118
		::System::Single _VolDefault_sceneExposure; // 0x11C
		::System::Single _VolDefault_characterExposure; // 0x120
		::System::Single _VolDefault_skyboxExposure; // 0x124
		::UnityEngine::Texture* _VolDefault_FXLutTexture; // 0x128
		::System::Single _VolDefault_FXExposure; // 0x130
		::System::Boolean _VolPreVal_UseSceneDesaturateMask_overrideState; // 0x134
		::System::Boolean _VolPreVal_UseSceneDesaturateMask; // 0x135
		::System::Boolean _VolPreVal_postExposure_overrideState; // 0x136
		::System::Single _VolPreVal_postExposure; // 0x138
		::System::Boolean _VolPreVal_contrast_overrideState; // 0x13C
		::System::Single _VolPreVal_contrast; // 0x140
		::System::Boolean _VolPreVal_colorFilter_overrideState; // 0x144
		::UnityEngine::Color _VolPreVal_colorFilter; // 0x148
		::System::Boolean _VolPreVal_hueShift_overrideState; // 0x158
		::System::Single _VolPreVal_hueShift; // 0x15C
		::System::Boolean _VolPreVal_saturation_overrideState; // 0x160
		::System::Single _VolPreVal_saturation; // 0x164
		::System::Boolean _VolPreVal_desaturate_overrideState; // 0x168
		::System::Single _VolPreVal_desaturate; // 0x16C
		::System::Boolean _VolPreVal_applyLutToSkybox_overrideState; // 0x170
		::System::Boolean _VolPreVal_applyLutToSkybox; // 0x171
		::System::Boolean _VolPreVal_skySaturation_overrideState; // 0x172
		::System::Single _VolPreVal_skySaturation; // 0x174
		::System::Boolean _VolPreVal_skyContrast_overrideState; // 0x178
		::System::Single _VolPreVal_skyContrast; // 0x17C
		::System::Boolean _VolPreVal_sceneExposure_overrideState; // 0x180
		::System::Single _VolPreVal_sceneExposure; // 0x184
		::System::Boolean _VolPreVal_characterExposure_overrideState; // 0x188
		::System::Single _VolPreVal_characterExposure; // 0x18C
		::System::Boolean _VolPreVal_skyboxExposure_overrideState; // 0x190
		::System::Single _VolPreVal_skyboxExposure; // 0x194
		::System::Boolean _VolPreVal_FXLutTexture_overrideState; // 0x198
		::UnityEngine::Texture* _VolPreVal_FXLutTexture; // 0x1A0
		::System::Boolean _VolPreVal_FXExposure_overrideState; // 0x1A8
		::System::Single _VolPreVal_FXExposure; // 0x1AC
		::System::Single _TimelineCurveFirstVal_postExposure; // 0x1B0
		::System::Single _TimelineCurveLastVal_postExposure; // 0x1B4
		::System::Single _TimelineCurveFirstVal_contrast; // 0x1B8
		::System::Single _TimelineCurveLastVal_contrast; // 0x1BC
		::System::Single _TimelineCurveFirstVal_hueShift; // 0x1C0
		::System::Single _TimelineCurveLastVal_hueShift; // 0x1C4
		::System::Single _TimelineCurveFirstVal_saturation; // 0x1C8
		::System::Single _TimelineCurveLastVal_saturation; // 0x1CC
		::System::Single _TimelineCurveFirstVal_desaturate; // 0x1D0
		::System::Single _TimelineCurveLastVal_desaturate; // 0x1D4
		::System::Boolean _TimelineCurveFirstVal_applyLutToSkybox; // 0x1D8
		::System::Boolean _TimelineCurveLastVal_applyLutToSkybox; // 0x1D9
		::System::Single _TimelineCurveFirstVal_skySaturation; // 0x1DC
		::System::Single _TimelineCurveLastVal_skySaturation; // 0x1E0
		::System::Single _TimelineCurveFirstVal_skyContrast; // 0x1E4
		::System::Single _TimelineCurveLastVal_skyContrast; // 0x1E8
		::System::Single _TimelineCurveFirstVal_sceneExposure; // 0x1EC
		::System::Single _TimelineCurveLastVal_sceneExposure; // 0x1F0
		::System::Single _TimelineCurveFirstVal_characterExposure; // 0x1F4
		::System::Single _TimelineCurveLastVal_characterExposure; // 0x1F8
		::System::Single _TimelineCurveFirstVal_skyboxExposure; // 0x1FC
		::System::Single _TimelineCurveLastVal_skyboxExposure; // 0x200
		::System::Single _TimelineCurveFirstVal_FXExposure; // 0x204
		::System::Single _TimelineCurveLastVal_FXExposure; // 0x208
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_UseSceneDesaturateMask_FieldHandleType; // 0x20C
		::System::Boolean ESPP_UseSceneDesaturateMask; // 0x210
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_postExposure_FieldHandleType; // 0x214
		::System::Boolean ESPP_postExposure_UseIt; // 0x218
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_postExposure; // 0x220
		::System::Boolean ESPP_postExposure_EnableFade; // 0x228
		::System::Boolean ESPP_postExposure_EnableOverrideDefaultValue; // 0x229
		::System::Single ESPP_postExposure_OverrideDefaultValue; // 0x22C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrast_FieldHandleType; // 0x230
		::System::Boolean ESPP_contrast_UseIt; // 0x234
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrast; // 0x238
		::System::Boolean ESPP_contrast_EnableFade; // 0x240
		::System::Boolean ESPP_contrast_EnableOverrideDefaultValue; // 0x241
		::System::Single ESPP_contrast_OverrideDefaultValue; // 0x244
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorFilter_FieldHandleType; // 0x248
		::UnityEngine::Color ESPP_colorFilter; // 0x24C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hueShift_FieldHandleType; // 0x25C
		::System::Boolean ESPP_hueShift_UseIt; // 0x260
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hueShift; // 0x268
		::System::Boolean ESPP_hueShift_EnableFade; // 0x270
		::System::Boolean ESPP_hueShift_EnableOverrideDefaultValue; // 0x271
		::System::Single ESPP_hueShift_OverrideDefaultValue; // 0x274
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_saturation_FieldHandleType; // 0x278
		::System::Boolean ESPP_saturation_UseIt; // 0x27C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_saturation; // 0x280
		::System::Boolean ESPP_saturation_EnableFade; // 0x288
		::System::Boolean ESPP_saturation_EnableOverrideDefaultValue; // 0x289
		::System::Single ESPP_saturation_OverrideDefaultValue; // 0x28C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_desaturate_FieldHandleType; // 0x290
		::System::Boolean ESPP_desaturate_UseIt; // 0x294
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_desaturate; // 0x298
		::System::Boolean ESPP_desaturate_EnableFade; // 0x2A0
		::System::Boolean ESPP_desaturate_EnableOverrideDefaultValue; // 0x2A1
		::System::Single ESPP_desaturate_OverrideDefaultValue; // 0x2A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_applyLutToSkybox_FieldHandleType; // 0x2A8
		::System::Boolean ESPP_applyLutToSkybox_UseIt; // 0x2AC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_applyLutToSkybox; // 0x2B0
		::System::Boolean ESPP_applyLutToSkybox_EnableFade; // 0x2B8
		::System::Boolean ESPP_applyLutToSkybox_EnableOverrideDefaultValue; // 0x2B9
		::System::Boolean ESPP_applyLutToSkybox_OverrideDefaultValue; // 0x2BA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skySaturation_FieldHandleType; // 0x2BC
		::System::Boolean ESPP_skySaturation_UseIt; // 0x2C0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_skySaturation; // 0x2C8
		::System::Boolean ESPP_skySaturation_EnableFade; // 0x2D0
		::System::Boolean ESPP_skySaturation_EnableOverrideDefaultValue; // 0x2D1
		::System::Single ESPP_skySaturation_OverrideDefaultValue; // 0x2D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyContrast_FieldHandleType; // 0x2D8
		::System::Boolean ESPP_skyContrast_UseIt; // 0x2DC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_skyContrast; // 0x2E0
		::System::Boolean ESPP_skyContrast_EnableFade; // 0x2E8
		::System::Boolean ESPP_skyContrast_EnableOverrideDefaultValue; // 0x2E9
		::System::Single ESPP_skyContrast_OverrideDefaultValue; // 0x2EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneExposure_FieldHandleType; // 0x2F0
		::System::Boolean ESPP_sceneExposure_UseIt; // 0x2F4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sceneExposure; // 0x2F8
		::System::Boolean ESPP_sceneExposure_EnableFade; // 0x300
		::System::Boolean ESPP_sceneExposure_EnableOverrideDefaultValue; // 0x301
		::System::Single ESPP_sceneExposure_OverrideDefaultValue; // 0x304
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterExposure_FieldHandleType; // 0x308
		::System::Boolean ESPP_characterExposure_UseIt; // 0x30C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterExposure; // 0x310
		::System::Boolean ESPP_characterExposure_EnableFade; // 0x318
		::System::Boolean ESPP_characterExposure_EnableOverrideDefaultValue; // 0x319
		::System::Single ESPP_characterExposure_OverrideDefaultValue; // 0x31C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyboxExposure_FieldHandleType; // 0x320
		::System::Boolean ESPP_skyboxExposure_UseIt; // 0x324
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_skyboxExposure; // 0x328
		::System::Boolean ESPP_skyboxExposure_EnableFade; // 0x330
		::System::Boolean ESPP_skyboxExposure_EnableOverrideDefaultValue; // 0x331
		::System::Single ESPP_skyboxExposure_OverrideDefaultValue; // 0x334
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_FXLutTexture_FieldHandleType; // 0x338
		::UnityEngine::Texture* ESPP_FXLutTexture; // 0x340
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_FXExposure_FieldHandleType; // 0x348
		::System::Boolean ESPP_FXExposure_UseIt; // 0x34C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_FXExposure; // 0x350
		::System::Boolean ESPP_FXExposure_EnableFade; // 0x358
		::System::Boolean ESPP_FXExposure_EnableOverrideDefaultValue; // 0x359
		::System::Single ESPP_FXExposure_OverrideDefaultValue; // 0x35C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_59791C706EFFC2BA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_59791C706EFFC2BA_OFFSET))(this, a1);
		}

		::System::Void Method_5_ECCE1872B868F9DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_ECCE1872B868F9DC_OFFSET))(this, a1);
		}

		::System::Void Method_5_59791C706EFFC2BA_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_59791C706EFFC2BA_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_59791C706EFFC2BA_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_59791C706EFFC2BA_2_OFFSET))(this, a1);
		}

		::System::Void Method_5_F0D9B6AAFF504D87()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_F0D9B6AAFF504D87_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_438300467EDE6B0B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_438300467EDE6B0B_OFFSET))(this, a1);
		}

		::System::Void Method_5_6BA7BB45F0BA72F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_6BA7BB45F0BA72F4_OFFSET))(this);
		}

		::System::Void Method_5_58D68FEBA7B5A778(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_58D68FEBA7B5A778_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}
	};
}
