#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TonemappingMode.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::Config { class ConfigEntityTonemappingEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class Tonemapping; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x191B45C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x191B4D30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x191B4FC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x191B4FB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x191B4F20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x191B4240)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x191B4180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x191B4470)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x191B43A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x191B4340)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_521267F2AEE4A422_OFFSET UNITYSDK_OFFSET(0x191B0240)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_522F2897D3370F6B_OFFSET UNITYSDK_OFFSET(0x191B1CF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x191B4D60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x191B4E50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x191AF000)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x191AFDB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x191B4F00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x191B4D50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_83DA8FE11BEA9751_OFFSET UNITYSDK_OFFSET(0x191B44C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_8649317719F42121_1_OFFSET UNITYSDK_OFFSET(0x191B31D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_8649317719F42121_OFFSET UNITYSDK_OFFSET(0x191B2820)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x191B4280)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x191B4400)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x191B41D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_8E7482C252877E8A_OFFSET UNITYSDK_OFFSET(0x191B4880)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x191B3DA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x191B4E70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x191B42F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x191AF2E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x191B5060)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x191B4F10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x191B3CB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x191B4D20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x191B4060)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x191B4D70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x191B4DB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x191AF2A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x191B4130)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x191AF570)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x191B4E60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x191B5070)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x191B4E40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x191B4D40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x191B3B80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x191B4980)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessTonemapping_TypeDefinitionIndex = 80773;

	class ESPostProcessTonemapping : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::Tonemapping*>
	{
	public:
		::MoleMole::Config::ConfigEntityTonemappingEffects* m_stAsset; // 0xB0
		::UnityEngine::NAPRenderPipeline0::TonemappingMode _VolDefault_mode; // 0xB8
		::System::Single _VolDefault_toeStrength; // 0xBC
		::System::Single _VolDefault_toeLength; // 0xC0
		::System::Single _VolDefault_shoulderStrength; // 0xC4
		::System::Single _VolDefault_shoulderLength; // 0xC8
		::System::Single _VolDefault_shoulderAngle; // 0xCC
		::System::Single _VolDefault_customGamma; // 0xD0
		::System::Boolean _VolPreVal_mode_overrideState; // 0xD4
		::UnityEngine::NAPRenderPipeline0::TonemappingMode _VolPreVal_mode; // 0xD8
		::System::Boolean _VolPreVal_toeStrength_overrideState; // 0xDC
		::System::Single _VolPreVal_toeStrength; // 0xE0
		::System::Boolean _VolPreVal_toeLength_overrideState; // 0xE4
		::System::Single _VolPreVal_toeLength; // 0xE8
		::System::Boolean _VolPreVal_shoulderStrength_overrideState; // 0xEC
		::System::Single _VolPreVal_shoulderStrength; // 0xF0
		::System::Boolean _VolPreVal_shoulderLength_overrideState; // 0xF4
		::System::Single _VolPreVal_shoulderLength; // 0xF8
		::System::Boolean _VolPreVal_shoulderAngle_overrideState; // 0xFC
		::System::Single _VolPreVal_shoulderAngle; // 0x100
		::System::Boolean _VolPreVal_customGamma_overrideState; // 0x104
		::System::Single _VolPreVal_customGamma; // 0x108
		::System::Single _TimelineCurveFirstVal_toeStrength; // 0x10C
		::System::Single _TimelineCurveLastVal_toeStrength; // 0x110
		::System::Single _TimelineCurveFirstVal_toeLength; // 0x114
		::System::Single _TimelineCurveLastVal_toeLength; // 0x118
		::System::Single _TimelineCurveFirstVal_shoulderStrength; // 0x11C
		::System::Single _TimelineCurveLastVal_shoulderStrength; // 0x120
		::System::Single _TimelineCurveFirstVal_shoulderLength; // 0x124
		::System::Single _TimelineCurveLastVal_shoulderLength; // 0x128
		::System::Single _TimelineCurveFirstVal_shoulderAngle; // 0x12C
		::System::Single _TimelineCurveLastVal_shoulderAngle; // 0x130
		::System::Single _TimelineCurveFirstVal_customGamma; // 0x134
		::System::Single _TimelineCurveLastVal_customGamma; // 0x138
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mode_FieldHandleType; // 0x13C
		::UnityEngine::NAPRenderPipeline0::TonemappingMode ESPP_mode; // 0x140
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toeStrength_FieldHandleType; // 0x144
		::System::Boolean ESPP_toeStrength_UseIt; // 0x148
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_toeStrength; // 0x150
		::System::Boolean ESPP_toeStrength_EnableFade; // 0x158
		::System::Boolean ESPP_toeStrength_EnableOverrideDefaultValue; // 0x159
		::System::Single ESPP_toeStrength_OverrideDefaultValue; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toeLength_FieldHandleType; // 0x160
		::System::Boolean ESPP_toeLength_UseIt; // 0x164
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_toeLength; // 0x168
		::System::Boolean ESPP_toeLength_EnableFade; // 0x170
		::System::Boolean ESPP_toeLength_EnableOverrideDefaultValue; // 0x171
		::System::Single ESPP_toeLength_OverrideDefaultValue; // 0x174
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shoulderStrength_FieldHandleType; // 0x178
		::System::Boolean ESPP_shoulderStrength_UseIt; // 0x17C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shoulderStrength; // 0x180
		::System::Boolean ESPP_shoulderStrength_EnableFade; // 0x188
		::System::Boolean ESPP_shoulderStrength_EnableOverrideDefaultValue; // 0x189
		::System::Single ESPP_shoulderStrength_OverrideDefaultValue; // 0x18C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shoulderLength_FieldHandleType; // 0x190
		::System::Boolean ESPP_shoulderLength_UseIt; // 0x194
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shoulderLength; // 0x198
		::System::Boolean ESPP_shoulderLength_EnableFade; // 0x1A0
		::System::Boolean ESPP_shoulderLength_EnableOverrideDefaultValue; // 0x1A1
		::System::Single ESPP_shoulderLength_OverrideDefaultValue; // 0x1A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shoulderAngle_FieldHandleType; // 0x1A8
		::System::Boolean ESPP_shoulderAngle_UseIt; // 0x1AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shoulderAngle; // 0x1B0
		::System::Boolean ESPP_shoulderAngle_EnableFade; // 0x1B8
		::System::Boolean ESPP_shoulderAngle_EnableOverrideDefaultValue; // 0x1B9
		::System::Single ESPP_shoulderAngle_OverrideDefaultValue; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_customGamma_FieldHandleType; // 0x1C0
		::System::Boolean ESPP_customGamma_UseIt; // 0x1C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_customGamma; // 0x1C8
		::System::Boolean ESPP_customGamma_EnableFade; // 0x1D0
		::System::Boolean ESPP_customGamma_EnableOverrideDefaultValue; // 0x1D1
		::System::Single ESPP_customGamma_OverrideDefaultValue; // 0x1D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_521267F2AEE4A422(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_521267F2AEE4A422_OFFSET))(this, a1);
		}

		::System::Void Method_5_522F2897D3370F6B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_522F2897D3370F6B_OFFSET))(this, a1);
		}

		::System::Void Method_5_8649317719F42121(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_8649317719F42121_OFFSET))(this, a1);
		}

		::System::Void Method_5_8649317719F42121_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_8649317719F42121_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_EBEE0D0A222A8264()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_EBEE0D0A222A8264_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_83DA8FE11BEA9751(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_83DA8FE11BEA9751_OFFSET))(this, a1);
		}

		::System::Void Method_5_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_5_8E7482C252877E8A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_8E7482C252877E8A_OFFSET))(this, a1);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}
	};
}
