#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigEntityCausticsEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class Caustics; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x19BC7C30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x19BC9170)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_46737F85CDB5E497_1_OFFSET UNITYSDK_OFFSET(0x19BCDDA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_46737F85CDB5E497_2_OFFSET UNITYSDK_OFFSET(0x19BCEDA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_46737F85CDB5E497_OFFSET UNITYSDK_OFFSET(0x19BC9980)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_63E3E26A3D57F57D_OFFSET UNITYSDK_OFFSET(0x19BCCAC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0x19BC8330)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19BC7F80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x19BC7F90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x19BCFDA0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessCaustics_TypeDefinitionIndex = 64342;

	class ESPostProcessCaustics : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::Caustics*>
	{
	public:
		::MoleMole::Config::ConfigEntityCausticsEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_Use_Caustics; // 0xB8
		::System::Single _VolDefault_Brightness; // 0xBC
		::System::Single _VolDefault_Speed; // 0xC0
		::System::Single _VolDefault_Range; // 0xC4
		::System::Single _VolDefault_HeightOffset; // 0xC8
		::System::Single _VolDefault_MainLightScale; // 0xCC
		::System::Single _VolDefault_LocalLightScale; // 0xD0
		::System::Single _VolDefault_IndirectScale; // 0xD4
		::System::Single _VolDefault_Tilling; // 0xD8
		::UnityEngine::Color _VolDefault_Tint; // 0xDC
		::System::Single _VolDefault_Strength; // 0xEC
		::UnityEngine::Texture* _VolDefault_Tex; // 0xF0
		::System::Boolean _VolPreVal_Use_Caustics_overrideState; // 0xF8
		::System::Boolean _VolPreVal_Use_Caustics; // 0xF9
		::System::Boolean _VolPreVal_Brightness_overrideState; // 0xFA
		::System::Single _VolPreVal_Brightness; // 0xFC
		::System::Boolean _VolPreVal_Speed_overrideState; // 0x100
		::System::Single _VolPreVal_Speed; // 0x104
		::System::Boolean _VolPreVal_Range_overrideState; // 0x108
		::System::Single _VolPreVal_Range; // 0x10C
		::System::Boolean _VolPreVal_HeightOffset_overrideState; // 0x110
		::System::Single _VolPreVal_HeightOffset; // 0x114
		::System::Boolean _VolPreVal_MainLightScale_overrideState; // 0x118
		::System::Single _VolPreVal_MainLightScale; // 0x11C
		::System::Boolean _VolPreVal_LocalLightScale_overrideState; // 0x120
		::System::Single _VolPreVal_LocalLightScale; // 0x124
		::System::Boolean _VolPreVal_IndirectScale_overrideState; // 0x128
		::System::Single _VolPreVal_IndirectScale; // 0x12C
		::System::Boolean _VolPreVal_Tilling_overrideState; // 0x130
		::System::Single _VolPreVal_Tilling; // 0x134
		::System::Boolean _VolPreVal_Tint_overrideState; // 0x138
		::UnityEngine::Color _VolPreVal_Tint; // 0x13C
		::System::Boolean _VolPreVal_Strength_overrideState; // 0x14C
		::System::Single _VolPreVal_Strength; // 0x150
		::System::Boolean _VolPreVal_Tex_overrideState; // 0x154
		::UnityEngine::Texture* _VolPreVal_Tex; // 0x158
		::System::Boolean _TimelineCurveFirstVal_Use_Caustics; // 0x160
		::System::Boolean _TimelineCurveLastVal_Use_Caustics; // 0x161
		::System::Single _TimelineCurveFirstVal_Brightness; // 0x164
		::System::Single _TimelineCurveLastVal_Brightness; // 0x168
		::System::Single _TimelineCurveFirstVal_Speed; // 0x16C
		::System::Single _TimelineCurveLastVal_Speed; // 0x170
		::System::Single _TimelineCurveFirstVal_Range; // 0x174
		::System::Single _TimelineCurveLastVal_Range; // 0x178
		::System::Single _TimelineCurveFirstVal_HeightOffset; // 0x17C
		::System::Single _TimelineCurveLastVal_HeightOffset; // 0x180
		::System::Single _TimelineCurveFirstVal_MainLightScale; // 0x184
		::System::Single _TimelineCurveLastVal_MainLightScale; // 0x188
		::System::Single _TimelineCurveFirstVal_LocalLightScale; // 0x18C
		::System::Single _TimelineCurveLastVal_LocalLightScale; // 0x190
		::System::Single _TimelineCurveFirstVal_IndirectScale; // 0x194
		::System::Single _TimelineCurveLastVal_IndirectScale; // 0x198
		::System::Single _TimelineCurveFirstVal_Tilling; // 0x19C
		::System::Single _TimelineCurveLastVal_Tilling; // 0x1A0
		::UnityEngine::Color _TimelineCurveFirstVal_Tint; // 0x1A4
		::UnityEngine::Color _TimelineCurveLastVal_Tint; // 0x1B4
		::System::Single _TimelineCurveFirstVal_Strength; // 0x1C4
		::System::Single _TimelineCurveLastVal_Strength; // 0x1C8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Use_Caustics_FieldHandleType; // 0x1CC
		::System::Boolean ESPP_Use_Caustics_UseIt; // 0x1D0
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_Use_Caustics; // 0x1D8
		::System::Boolean ESPP_Use_Caustics_EnableFade; // 0x1E0
		::System::Boolean ESPP_Use_Caustics_EnableOverrideDefaultValue; // 0x1E1
		::System::Boolean ESPP_Use_Caustics_OverrideDefaultValue; // 0x1E2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Brightness_FieldHandleType; // 0x1E4
		::System::Boolean ESPP_Brightness_UseIt; // 0x1E8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_Brightness; // 0x1F0
		::System::Boolean ESPP_Brightness_EnableFade; // 0x1F8
		::System::Boolean ESPP_Brightness_EnableOverrideDefaultValue; // 0x1F9
		::System::Single ESPP_Brightness_OverrideDefaultValue; // 0x1FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Speed_FieldHandleType; // 0x200
		::System::Boolean ESPP_Speed_UseIt; // 0x204
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_Speed; // 0x208
		::System::Boolean ESPP_Speed_EnableFade; // 0x210
		::System::Boolean ESPP_Speed_EnableOverrideDefaultValue; // 0x211
		::System::Single ESPP_Speed_OverrideDefaultValue; // 0x214
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Range_FieldHandleType; // 0x218
		::System::Boolean ESPP_Range_UseIt; // 0x21C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_Range; // 0x220
		::System::Boolean ESPP_Range_EnableFade; // 0x228
		::System::Boolean ESPP_Range_EnableOverrideDefaultValue; // 0x229
		::System::Single ESPP_Range_OverrideDefaultValue; // 0x22C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_HeightOffset_FieldHandleType; // 0x230
		::System::Boolean ESPP_HeightOffset_UseIt; // 0x234
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_HeightOffset; // 0x238
		::System::Boolean ESPP_HeightOffset_EnableFade; // 0x240
		::System::Boolean ESPP_HeightOffset_EnableOverrideDefaultValue; // 0x241
		::System::Single ESPP_HeightOffset_OverrideDefaultValue; // 0x244
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_MainLightScale_FieldHandleType; // 0x248
		::System::Boolean ESPP_MainLightScale_UseIt; // 0x24C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_MainLightScale; // 0x250
		::System::Boolean ESPP_MainLightScale_EnableFade; // 0x258
		::System::Boolean ESPP_MainLightScale_EnableOverrideDefaultValue; // 0x259
		::System::Single ESPP_MainLightScale_OverrideDefaultValue; // 0x25C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_LocalLightScale_FieldHandleType; // 0x260
		::System::Boolean ESPP_LocalLightScale_UseIt; // 0x264
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_LocalLightScale; // 0x268
		::System::Boolean ESPP_LocalLightScale_EnableFade; // 0x270
		::System::Boolean ESPP_LocalLightScale_EnableOverrideDefaultValue; // 0x271
		::System::Single ESPP_LocalLightScale_OverrideDefaultValue; // 0x274
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_IndirectScale_FieldHandleType; // 0x278
		::System::Boolean ESPP_IndirectScale_UseIt; // 0x27C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_IndirectScale; // 0x280
		::System::Boolean ESPP_IndirectScale_EnableFade; // 0x288
		::System::Boolean ESPP_IndirectScale_EnableOverrideDefaultValue; // 0x289
		::System::Single ESPP_IndirectScale_OverrideDefaultValue; // 0x28C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Tilling_FieldHandleType; // 0x290
		::System::Boolean ESPP_Tilling_UseIt; // 0x294
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_Tilling; // 0x298
		::System::Boolean ESPP_Tilling_EnableFade; // 0x2A0
		::System::Boolean ESPP_Tilling_EnableOverrideDefaultValue; // 0x2A1
		::System::Single ESPP_Tilling_OverrideDefaultValue; // 0x2A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Tint_FieldHandleType; // 0x2A8
		::System::Boolean ESPP_Tint_UseIt; // 0x2AC
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_Tint; // 0x2B0
		::System::Boolean ESPP_Tint_EnableFade; // 0x2B8
		::System::Boolean ESPP_Tint_EnableOverrideDefaultValue; // 0x2B9
		::UnityEngine::Color ESPP_Tint_OverrideDefaultValue; // 0x2BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Strength_FieldHandleType; // 0x2CC
		::System::Boolean ESPP_Strength_UseIt; // 0x2D0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_Strength; // 0x2D8
		::System::Boolean ESPP_Strength_EnableFade; // 0x2E0
		::System::Boolean ESPP_Strength_EnableOverrideDefaultValue; // 0x2E1
		::System::Single ESPP_Strength_OverrideDefaultValue; // 0x2E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Tex_FieldHandleType; // 0x2E8
		::UnityEngine::Texture* ESPP_Tex; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_5_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_80313B77C31AD02B_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_46737F85CDB5E497(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_46737F85CDB5E497_OFFSET))(this, a1);
		}

		::System::Void Method_5_63E3E26A3D57F57D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_63E3E26A3D57F57D_OFFSET))(this, a1);
		}

		::System::Void Method_5_46737F85CDB5E497_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_46737F85CDB5E497_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_46737F85CDB5E497_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_46737F85CDB5E497_2_OFFSET))(this, a1);
		}
	};
}
