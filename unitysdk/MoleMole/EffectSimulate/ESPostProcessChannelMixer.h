#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityChannelMixerEffects; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class ChannelMixer; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_0756C0BF4C8BD127_1_OFFSET UNITYSDK_OFFSET(0x183FFB80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_0756C0BF4C8BD127_OFFSET UNITYSDK_OFFSET(0x183FEE20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x184008E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18402160)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x183FA8D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18401FF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x184020C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x18402290)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x184010D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x18401010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x184014A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x18401300)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x18401230)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x184011D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_522F2897D3370F6B_OFFSET UNITYSDK_OFFSET(0x183FBC80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x18402170)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x18402220)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x183FA560)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x183FB5E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x18402210)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18402230)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_83DA8FE11BEA9751_OFFSET UNITYSDK_OFFSET(0x18401350)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x18401110)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x18401290)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x18401060)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x18400B50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x18401F40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x18401180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x184020A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x18402090)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_B153DBF66F2B9EE2_OFFSET UNITYSDK_OFFSET(0x183FDF60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x18400A60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x184020B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x18400EF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x18402250)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x184020D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x183FA890)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x18400FC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x183FABB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x18401FD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x18402180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x18402240)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x18401FE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_EE2957687AFE92A5_OFFSET UNITYSDK_OFFSET(0x184018B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x18401A00)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessChannelMixer_TypeDefinitionIndex = 67642;

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

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_1DE6433C25680F9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_1DE6433C25680F9D_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_522F2897D3370F6B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_522F2897D3370F6B_OFFSET))(this, a1);
		}

		::System::Void Method_5_B153DBF66F2B9EE2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_B153DBF66F2B9EE2_OFFSET))(this, a1);
		}

		::System::Void Method_5_0756C0BF4C8BD127(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_0756C0BF4C8BD127_OFFSET))(this, a1);
		}

		::System::Void Method_5_0756C0BF4C8BD127_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_0756C0BF4C8BD127_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_092CD57850778EFC_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_83DA8FE11BEA9751(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_83DA8FE11BEA9751_OFFSET))(this, a1);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_EE2957687AFE92A5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_EE2957687AFE92A5_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}
	};
}
