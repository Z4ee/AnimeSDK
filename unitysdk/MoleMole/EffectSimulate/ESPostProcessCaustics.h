#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigEntityCausticsEffects; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class Caustics; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_0C65243341F1EFB1_OFFSET UNITYSDK_OFFSET(0x16B6D6C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16B6E510)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16B6E830)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x16B64B30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_2A99139D13C42A50_1_OFFSET UNITYSDK_OFFSET(0x16B6BB10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_2A99139D13C42A50_OFFSET UNITYSDK_OFFSET(0x16B6AAC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x16B6E8D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x16B6E6E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16B6D440)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x16B6D380)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_46737F85CDB5E497_OFFSET UNITYSDK_OFFSET(0x16B665E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x16B6D670)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x16B6D5A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x16B6D540)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x16B6E630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x16B6E780)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_594D45A47A873869_OFFSET UNITYSDK_OFFSET(0x16B69780)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x16B64770)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x16B6D850)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x16B65D90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x16B6E5D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16B6E790)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x16B6D480)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x16B6D600)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x16B6D3D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x16B6CE10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x16B6E650)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16B6D4F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x16B6E770)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x16B6E640)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x16B6CD20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x16B6E520)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x16B6D260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x16B6E5E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16B6E540)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16B64AF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x16B6CB60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x16B6D330)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x16B64F10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0x16B6DD30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x16B6E620)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x16B6E7A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x16B6E8E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x16B6E530)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x16B6DEC0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessCaustics_TypeDefinitionIndex = 82137;

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

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_46737F85CDB5E497(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_46737F85CDB5E497_OFFSET))(this, a1);
		}

		::System::Void Method_5_594D45A47A873869(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_594D45A47A873869_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_2A99139D13C42A50_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_2A99139D13C42A50_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_CBDC22058B67F0FE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_CBDC22058B67F0FE_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_0C65243341F1EFB1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_0C65243341F1EFB1_OFFSET))(this, a1);
		}

		::System::Void Method_5_6BA7BB45F0BA72F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_6BA7BB45F0BA72F4_OFFSET))(this);
		}

		::System::Void Method_5_D4975DF907B2431F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_D4975DF907B2431F_OFFSET))(this, a1);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCAUSTICS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}
	};
}
