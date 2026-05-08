#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::Config { class ConfigEntityVignettes; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class Vignette; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_0AD139A96804E15E_OFFSET UNITYSDK_OFFSET(0x1172DD60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1172E3F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x117297B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1172E1A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_3021F634E77C58A0_OFFSET UNITYSDK_OFFSET(0x1172B2C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x1172E4E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1172E420)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1172D7A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x1172D6E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x1172D9D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4F6CBEF30D6E7AC4_1_OFFSET UNITYSDK_OFFSET(0x1172C760)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4F6CBEF30D6E7AC4_OFFSET UNITYSDK_OFFSET(0x1172BD70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x1172D900)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x1172D8A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x1172E4B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x1172E340)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x11728AF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_71456C0B214E6DAC_OFFSET UNITYSDK_OFFSET(0x1172D150)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x1172E4C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1172E410)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_83DA8FE11BEA9751_OFFSET UNITYSDK_OFFSET(0x1172DA20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x1172D7E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x1172D960)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1172D730)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1172E580)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x1172D350)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x1172E350)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1172D850)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x1172E400)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x1172E3E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x1172D260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x1172E330)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x1172D5C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x1172E240)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1172E4F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11728D60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x1172D690)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x11728FE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x1172E310)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x11728DA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1172E280)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x1172E4D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1172E320)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_EB4352D10DA7234E_OFFSET UNITYSDK_OFFSET(0x11729BD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1172DB00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1172DE40)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessVignette_TypeDefinitionIndex = 62460;

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

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_EB4352D10DA7234E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_EB4352D10DA7234E_OFFSET))(this, a1);
		}

		::System::Void Method_5_3021F634E77C58A0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_3021F634E77C58A0_OFFSET))(this, a1);
		}

		::System::Void Method_5_4F6CBEF30D6E7AC4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4F6CBEF30D6E7AC4_OFFSET))(this, a1);
		}

		::System::Void Method_5_4F6CBEF30D6E7AC4_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4F6CBEF30D6E7AC4_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_71456C0B214E6DAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_71456C0B214E6DAC_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_83DA8FE11BEA9751(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_83DA8FE11BEA9751_OFFSET))(this, a1);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_5_0AD139A96804E15E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_0AD139A96804E15E_OFFSET))(this, a1);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_9681042564541CD6_OFFSET))(this);
		}
	};
}
