#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityChannelMixerEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class ChannelMixer; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1B586E00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_13D78D8CCC5186FB_1_OFFSET UNITYSDK_OFFSET(0x1B58C1E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_13D78D8CCC5186FB_OFFSET UNITYSDK_OFFSET(0x1B58B4D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x1B587D90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x1B587100)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_522F2897D3370F6B_OFFSET UNITYSDK_OFFSET(0x1B5883F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_734CC582838F149E_OFFSET UNITYSDK_OFFSET(0x1B58A670)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1B5870F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x1B5873A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B58CEF0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessChannelMixer_TypeDefinitionIndex = 69471;

	class ESPostProcessChannelMixer : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::ChannelMixer*>
	{
	public:
		::MoleMole::Config::ConfigEntityChannelMixerEffects* m_stAsset; // 0xB0
		::System::Single _VolDefault_redOutRedIn; // 0xB8
		::System::Single _VolDefault_redOutGreenIn; // 0xBC
		::System::Single _VolDefault_redOutBlueIn; // 0xC0
		::System::Single _VolDefault_greenOutRedIn; // 0xC4
		::System::Single _VolDefault_greenOutGreenIn; // 0xC8
		::System::Single _VolDefault_greenOutBlueIn; // 0xCC
		::System::Single _VolDefault_blueOutRedIn; // 0xD0
		::System::Single _VolDefault_blueOutGreenIn; // 0xD4
		::System::Single _VolDefault_blueOutBlueIn; // 0xD8
		::System::Boolean _VolPreVal_redOutRedIn_overrideState; // 0xDC
		::System::Single _VolPreVal_redOutRedIn; // 0xE0
		::System::Boolean _VolPreVal_redOutGreenIn_overrideState; // 0xE4
		::System::Single _VolPreVal_redOutGreenIn; // 0xE8
		::System::Boolean _VolPreVal_redOutBlueIn_overrideState; // 0xEC
		::System::Single _VolPreVal_redOutBlueIn; // 0xF0
		::System::Boolean _VolPreVal_greenOutRedIn_overrideState; // 0xF4
		::System::Single _VolPreVal_greenOutRedIn; // 0xF8
		::System::Boolean _VolPreVal_greenOutGreenIn_overrideState; // 0xFC
		::System::Single _VolPreVal_greenOutGreenIn; // 0x100
		::System::Boolean _VolPreVal_greenOutBlueIn_overrideState; // 0x104
		::System::Single _VolPreVal_greenOutBlueIn; // 0x108
		::System::Boolean _VolPreVal_blueOutRedIn_overrideState; // 0x10C
		::System::Single _VolPreVal_blueOutRedIn; // 0x110
		::System::Boolean _VolPreVal_blueOutGreenIn_overrideState; // 0x114
		::System::Single _VolPreVal_blueOutGreenIn; // 0x118
		::System::Boolean _VolPreVal_blueOutBlueIn_overrideState; // 0x11C
		::System::Single _VolPreVal_blueOutBlueIn; // 0x120
		::System::Single _TimelineCurveFirstVal_redOutRedIn; // 0x124
		::System::Single _TimelineCurveLastVal_redOutRedIn; // 0x128
		::System::Single _TimelineCurveFirstVal_redOutGreenIn; // 0x12C
		::System::Single _TimelineCurveLastVal_redOutGreenIn; // 0x130
		::System::Single _TimelineCurveFirstVal_redOutBlueIn; // 0x134
		::System::Single _TimelineCurveLastVal_redOutBlueIn; // 0x138
		::System::Single _TimelineCurveFirstVal_greenOutRedIn; // 0x13C
		::System::Single _TimelineCurveLastVal_greenOutRedIn; // 0x140
		::System::Single _TimelineCurveFirstVal_greenOutGreenIn; // 0x144
		::System::Single _TimelineCurveLastVal_greenOutGreenIn; // 0x148
		::System::Single _TimelineCurveFirstVal_greenOutBlueIn; // 0x14C
		::System::Single _TimelineCurveLastVal_greenOutBlueIn; // 0x150
		::System::Single _TimelineCurveFirstVal_blueOutRedIn; // 0x154
		::System::Single _TimelineCurveLastVal_blueOutRedIn; // 0x158
		::System::Single _TimelineCurveFirstVal_blueOutGreenIn; // 0x15C
		::System::Single _TimelineCurveLastVal_blueOutGreenIn; // 0x160
		::System::Single _TimelineCurveFirstVal_blueOutBlueIn; // 0x164
		::System::Single _TimelineCurveLastVal_blueOutBlueIn; // 0x168
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_redOutRedIn_FieldHandleType; // 0x16C
		::System::Boolean ESPP_redOutRedIn_UseIt; // 0x170
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_redOutRedIn; // 0x178
		::System::Boolean ESPP_redOutRedIn_EnableFade; // 0x180
		::System::Boolean ESPP_redOutRedIn_EnableOverrideDefaultValue; // 0x181
		::System::Single ESPP_redOutRedIn_OverrideDefaultValue; // 0x184
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_redOutGreenIn_FieldHandleType; // 0x188
		::System::Boolean ESPP_redOutGreenIn_UseIt; // 0x18C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_redOutGreenIn; // 0x190
		::System::Boolean ESPP_redOutGreenIn_EnableFade; // 0x198
		::System::Boolean ESPP_redOutGreenIn_EnableOverrideDefaultValue; // 0x199
		::System::Single ESPP_redOutGreenIn_OverrideDefaultValue; // 0x19C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_redOutBlueIn_FieldHandleType; // 0x1A0
		::System::Boolean ESPP_redOutBlueIn_UseIt; // 0x1A4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_redOutBlueIn; // 0x1A8
		::System::Boolean ESPP_redOutBlueIn_EnableFade; // 0x1B0
		::System::Boolean ESPP_redOutBlueIn_EnableOverrideDefaultValue; // 0x1B1
		::System::Single ESPP_redOutBlueIn_OverrideDefaultValue; // 0x1B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_greenOutRedIn_FieldHandleType; // 0x1B8
		::System::Boolean ESPP_greenOutRedIn_UseIt; // 0x1BC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_greenOutRedIn; // 0x1C0
		::System::Boolean ESPP_greenOutRedIn_EnableFade; // 0x1C8
		::System::Boolean ESPP_greenOutRedIn_EnableOverrideDefaultValue; // 0x1C9
		::System::Single ESPP_greenOutRedIn_OverrideDefaultValue; // 0x1CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_greenOutGreenIn_FieldHandleType; // 0x1D0
		::System::Boolean ESPP_greenOutGreenIn_UseIt; // 0x1D4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_greenOutGreenIn; // 0x1D8
		::System::Boolean ESPP_greenOutGreenIn_EnableFade; // 0x1E0
		::System::Boolean ESPP_greenOutGreenIn_EnableOverrideDefaultValue; // 0x1E1
		::System::Single ESPP_greenOutGreenIn_OverrideDefaultValue; // 0x1E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_greenOutBlueIn_FieldHandleType; // 0x1E8
		::System::Boolean ESPP_greenOutBlueIn_UseIt; // 0x1EC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_greenOutBlueIn; // 0x1F0
		::System::Boolean ESPP_greenOutBlueIn_EnableFade; // 0x1F8
		::System::Boolean ESPP_greenOutBlueIn_EnableOverrideDefaultValue; // 0x1F9
		::System::Single ESPP_greenOutBlueIn_OverrideDefaultValue; // 0x1FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blueOutRedIn_FieldHandleType; // 0x200
		::System::Boolean ESPP_blueOutRedIn_UseIt; // 0x204
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_blueOutRedIn; // 0x208
		::System::Boolean ESPP_blueOutRedIn_EnableFade; // 0x210
		::System::Boolean ESPP_blueOutRedIn_EnableOverrideDefaultValue; // 0x211
		::System::Single ESPP_blueOutRedIn_OverrideDefaultValue; // 0x214
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blueOutGreenIn_FieldHandleType; // 0x218
		::System::Boolean ESPP_blueOutGreenIn_UseIt; // 0x21C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_blueOutGreenIn; // 0x220
		::System::Boolean ESPP_blueOutGreenIn_EnableFade; // 0x228
		::System::Boolean ESPP_blueOutGreenIn_EnableOverrideDefaultValue; // 0x229
		::System::Single ESPP_blueOutGreenIn_OverrideDefaultValue; // 0x22C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blueOutBlueIn_FieldHandleType; // 0x230
		::System::Boolean ESPP_blueOutBlueIn_UseIt; // 0x234
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_blueOutBlueIn; // 0x238
		::System::Boolean ESPP_blueOutBlueIn_EnableFade; // 0x240
		::System::Boolean ESPP_blueOutBlueIn_EnableOverrideDefaultValue; // 0x241
		::System::Single ESPP_blueOutBlueIn_OverrideDefaultValue; // 0x244

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_522F2897D3370F6B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_522F2897D3370F6B_OFFSET))(this, a1);
		}

		::System::Void Method_5_734CC582838F149E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_734CC582838F149E_OFFSET))(this, a1);
		}

		::System::Void Method_5_13D78D8CCC5186FB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_13D78D8CCC5186FB_OFFSET))(this, a1);
		}

		::System::Void Method_5_13D78D8CCC5186FB_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_13D78D8CCC5186FB_1_OFFSET))(this, a1);
		}
	};
}
